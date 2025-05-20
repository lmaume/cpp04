#include "Animal.hpp"

Animal::Animal(void)
{
	// std::cout << "Default Animal constructor called" << std::endl;
	_type = "Animal";
}

Animal::Animal(const Animal &Animal)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = Animal;
}

Animal::~Animal(void)
{
	// std::cout << "Animal Destructor called" << std::endl;
}


Animal& Animal::operator=(const Animal &beast)
{
	if (this != &beast)
		this->_type = beast.getType();
	return *this;
}



std::string	Animal::getType() const
{
	return _type;
}
