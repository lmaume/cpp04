#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	// std::cout << "Default Dog constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
	// _brain = new Brain("ouaf idea");
}

Dog::Dog(const Dog &Dog)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = Dog;
}

Dog::~Dog(void)
{
	// std::cout << "Dog Destructor called" << std::endl;
	delete _brain;
}

Dog& Dog::operator=(const Dog &beast)
{
	if (this != &beast)
	{
		this->_type = beast.getType();
		this->_brain = beast._brain;
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << getType() << " sound." << std::endl;
}

void	Dog::think() const
{
	this->_brain->showIdea();
}

std::string	Dog::getType() const
{
	return _type;
}
