#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* animal[20];
	for (int i = 0; i < 9; i++)
		animal[i] = new Dog;
	for (int i = 9; i < 20; i++)
		animal[i] = new Cat;

	// dynamic_cast<Dog*>(animal[0])->think();
	// dynamic_cast<Cat*>(animal[12])->think();
	
	for (int i = 0; i < 20; i++)
		delete animal[i];
	return 0;
}