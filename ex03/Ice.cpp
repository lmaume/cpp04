#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
	_type = "ice";
}
Ice::~Ice()
{

}

Ice* Ice::clone() const
{
	Ice* clone = new Ice;
	return clone;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
