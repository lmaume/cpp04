#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	// std::cout << "Default WrongCat constructor called" << std::endl;
	_type = "WrongCat";
	_brain = new Brain();
}

WrongCat::WrongCat(const WrongCat &WrongCat)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = WrongCat;
}

WrongCat::~WrongCat(void)
{
	// std::cout << "WrongCat Destructor called" << std::endl;
	delete _brain;
}

WrongCat& WrongCat::operator=(const WrongCat &beast)
{
	if (this != &beast)
	{
		this->_type = beast.getType();
		this->_brain = beast._brain;
	}
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << getType() << " sound." << std::endl;
}

void	WrongCat::think() const
{
	this->_brain->showIdea();
}

std::string	WrongCat::getType() const
{
	return _type;
}

