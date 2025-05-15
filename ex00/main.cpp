#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();

	std::cout << "[Let Me Presemt You Some Coll Dawg & Cars]" << std::endl;
	std::cout << "\n";

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "\n";
	std::cout << "[Oh Hell Yeah THAT Was Relly Coll So Now...]\n[Let me show you some real stuff that will not leave you the same as you were before...]" << std::endl;
	std::cout << "\n";

	std::cout << wrongI->getType() << " " << std::endl;
	wrongI->makeSound(); //will output the wrongcat sound!
	wrongMeta->makeSound();

	std::cout << "\n";
	std::cout << "[Did You Like That ? DID YOU LIKE All The Anom- Abonim- ANobim-.. Horrible thngs you saw ?!]" << std::endl;

	delete	i;
	delete	j;
	delete	meta;
	delete	wrongI;
	delete	wrongMeta;

	return 0;
}