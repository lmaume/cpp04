#include "Brain.hpp"

Brain::Brain(void)
{
	// std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(std::string idea)
{
	for (int i = 0; i <= 99; i++)
		this->_ideas[i] = idea;
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

void		Brain::setIdeas(const std::string *ideas)
{
	if (ideas != NULL)
	{
		for (int i = 0; i < 99; i++)
			this->_ideas[i] = ideas[i];
	}
}

const std::string	*Brain::GetIdeas() const
{
	return _ideas;
}

void	Brain::showIdea()
{
	for (int i = 0; i <= 99; i++)
		std::cout << this->_ideas[i] << std::endl;
}

Brain& Brain::operator=(const Brain &beast)
{
	if (this != &beast)
		setIdeas(beast.GetIdeas());
	return *this;
}
