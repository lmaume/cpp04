#include "AMateria.hpp"
#include "ICharacter.hpp"

Fire::Fire()
{
	_type = "fire";
}
Fire::~Fire()
{

}

Fire* Fire::clone() const
{
	Fire* clone = new Fire;
	return clone;
}

void Fire::use(ICharacter& target)
{
	std::cout << "* shoots an fire bolt at " << target.getName() << " *" << std::endl;
	std::cout << "[1]    2723689 segmentation fault  ./Materia" << std::endl;
}
