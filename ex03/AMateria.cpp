#include "AMateria.hpp"


AMateria::AMateria()
{

}
AMateria::~AMateria()
{

}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

std::string const& AMateria::getType() const
{
	return this->_type;
}
