#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

class Animal
{
	protected:
		std::string	_type;

	public:
		void	makeSound() const;
		std::string	getType() const;

		Animal& operator=(const Animal &beast);

		Animal(void);
		Animal(const Animal &f);
		virtual ~Animal(void);

};

#endif