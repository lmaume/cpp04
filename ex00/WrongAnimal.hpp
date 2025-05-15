#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		void	makeSound() const;
		std::string	getType() const;

		WrongAnimal& operator=(const WrongAnimal &beast);

		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &f);
		virtual ~WrongAnimal(void);

};

#endif