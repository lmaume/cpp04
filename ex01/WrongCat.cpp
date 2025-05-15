#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	// std::cout << "Default WrongCat constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &WrongCat)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = WrongCat;
}

WrongCat::~WrongCat(void)
{
	// std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &beast)
{
	if (this != &beast)
		this->_type = beast.getType();
	std::cout << beast.getType() << "TRALALERO TRALALA << std::endl" << std::endl;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << getType() << " sound." << std::endl;
}

std::string	WrongCat::getType() const
{
	return _type;
}

