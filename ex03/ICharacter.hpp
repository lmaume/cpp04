#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
	protected:
		std::string _name;
	public:
		ICharacter() {}
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		
		ICharacter& operator=(const ICharacter &chara);

		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
	private:
		std::string _name;
		int			_index;
		AMateria* _materia[4];
	public:
		Character();
		Character(std::string name);
		~Character();
		std::string const& getName() const;


		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif