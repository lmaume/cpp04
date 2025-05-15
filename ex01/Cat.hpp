#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

class Cat : public Animal
{
	protected:

	public:
		void		makeSound() const;
		std::string	getType() const;

		Cat& operator=(const Cat &beast);

		Cat(void);
		Cat(const Cat &f);
		~Cat(void);
		
};

#endif