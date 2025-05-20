#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"
#include "Brain.hpp"

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

class WrongCat : public WrongAnimal
{
	private:
		Brain* _brain;

	public:
		void		makeSound() const;
		void		think() const;
		std::string	getType() const;

		WrongCat& operator=(const WrongCat &beast);

		WrongCat(void);
		WrongCat(const WrongCat &f);
		~WrongCat(void);
		
};

#endif