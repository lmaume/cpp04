#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
	_type = "cure";
}
Cure::~Cure()
{

}

Cure* Cure::clone() const
{
	Cure* clone = new Cure;
	return clone;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
