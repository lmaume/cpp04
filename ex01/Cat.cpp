#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	// std::cout << "Default Cat constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
	// _brain = new Brain("meow idea");
}

Cat::Cat(const Cat &Cat)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = Cat;
}

Cat::~Cat(void)
{
	// std::cout << "Cat Destructor called" << std::endl;
	delete _brain;
}

Cat& Cat::operator=(const Cat &beast)
{
	if (this != &beast)
	{
		this->_type = beast.getType();
		this->_brain = beast._brain;
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << getType() << " sound." << std::endl;
}

void	Cat::think() const
{
	this->_brain->showIdea();
}

std::string	Cat::getType() const
{
	return _type;
}

