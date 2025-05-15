#include "Brain.hpp"

Brain::Brain(void)
{
	// std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &Brain)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = Brain;
}

Brain::~Brain(void)
{
	// std::cout << "Brain Destructor called" << std::endl;
}


Brain& Brain::operator=(const Brain &beast)
{
	if (this != &beast)
		// this->_type = beast.getType();
	return *this;
}
