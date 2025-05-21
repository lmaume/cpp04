#ifndef AMATERIA_HPP
# define AMATERIA_HPP

// #include "ICharacter.hpp"

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

class Ice : public AMateria
{
	protected:

	public:
		Ice();
		~Ice();
		Ice* clone() const;
		void use(ICharacter& target);
};

class Cure : public AMateria
{
	protected:

	public:
		Cure();
		~Cure();
		Cure* clone() const;
		void use(ICharacter& target);
};

class Fire : public AMateria
{
	protected:

	public:
		Fire();
		~Fire();
		Fire* clone() const;
		void use(ICharacter& target);
};

#endif