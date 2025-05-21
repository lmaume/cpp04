#include "IMateriaSource.hpp"
#include "AMateria.hpp"

//? la MateriaSource peut contenir 4 Materias maximum

MateriaSource::MateriaSource()
{
	_index = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i <= 3; i++)
		delete _materia[i];
}

void MateriaSource::learnMateria(AMateria* param)
{
	AMateria* copy = param;
	if (_index <= 3)
	{
		_materia[_index] = copy;
		_index++;
	}
}

//? retourne une copie via clone de materia apprise par learnMateria
AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i <= 3; i++)
	{
		if (_materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	return NULL;
}
