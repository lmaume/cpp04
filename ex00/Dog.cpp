#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	// std::cout << "Default Dog constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog &Dog)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = Dog;
}

Dog::~Dog(void)
{
	// std::cout << "Dog Destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &beast)
{
	if (this != &beast)
		this->_type = beast.getType();
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << getType() << " sound." << std::endl;
}

std::string	Dog::getType() const
{
	return _type;
}
