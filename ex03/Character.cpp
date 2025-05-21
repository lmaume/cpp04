#include "ICharacter.hpp"


Character::Character()
{

}

Character::Character(std::string name)
{
	this->_name = name;
}

Character::~Character()
{
	for (int i = 0; i <= 3; i++)
		delete _materia[i];
}

std::string const& Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (_index <= 3)
	{
		_materia[_index] = m;
		_index++;
	}
	(void)m;
}

//? si un spell est unequip, il faut penser a le delete,
//? sinon le destructeur s'en charge (contraintes du sujet)
void Character::unequip(int idx)
{
	_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "choose a spell between 0 and 3." << std::endl;
	}
	else if (_materia[idx] != NULL)
		_materia[idx]->use(target);
	else
		std::cout << "no spell in this slot\n";
}
