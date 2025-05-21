#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Fire());
	ICharacter* me = new Character("me");
	AMateria* spell1;
	AMateria* spell2;
	AMateria* spell3;

	spell1 = src->createMateria("ice");
	spell2 = src->createMateria("cure");
	spell3 = src->createMateria("fire");
	me->equip(spell1);
	me->equip(spell2);
	me->equip(spell3);
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(-3, *bob);

	me->unequip(0);
	me->unequip(1);
	me->unequip(2);

	me->use(2, *bob);

	delete bob;
	delete me;
	delete src;
	delete spell1;
	delete spell2;
	delete spell3;

	return 0;
}
