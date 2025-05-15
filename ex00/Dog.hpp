#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

class Dog : public Animal
{
	protected:

	public:
		void		makeSound() const;
		std::string	getType() const;

		Dog& operator=(const Dog &beast);

		Dog(void);
		Dog(const Dog &f);
		~Dog(void);
		
};

#endif