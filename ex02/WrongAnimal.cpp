#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	// std::cout << "Default WrongAnimal constructor called" << std::endl;
	_type = "Abonation. (wronganimal)";
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = WrongAnimal;
}

WrongAnimal::~WrongAnimal(void)
{
	// std::cout << "WrongAnimal Destructor called" << std::endl;
}


WrongAnimal& WrongAnimal::operator=(const WrongAnimal &beast)
{
	if (this != &beast)
		this->_type = beast.getType();
	return *this;
}


void	WrongAnimal::makeSound() const
{
	std::cout << getType() << " sound." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return _type;
}
