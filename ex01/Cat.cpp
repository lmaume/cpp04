#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	// std::cout << "Default Cat constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &Cat)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = Cat;
}

Cat::~Cat(void)
{
	// std::cout << "Cat Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &beast)
{
	if (this != &beast)
		this->_type = beast.getType();
	std::cout << beast.getType() << "TRALALERO TRALALA << std::endl" << std::endl;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << getType() << " sound." << std::endl;
}

std::string	Cat::getType() const
{
	return _type;
}

