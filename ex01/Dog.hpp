#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

class Dog : public Animal
{
	private:
		Brain* _brain;

	public:
		void		makeSound() const;
		void		think() const;
		std::string	getType() const;

		Dog& operator=(const Dog &beast);

		Dog(void);
		Dog(const Dog &f);
		~Dog(void);
		
};

#endif