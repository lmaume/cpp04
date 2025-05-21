#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

class AMateria;

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

		IMateriaSource& operator=(const IMateriaSource &mat);
};

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_materia[4];
		int			_index;
	public:
		MateriaSource();
		~MateriaSource();
		void		learnMateria(AMateria* param);
		AMateria*	createMateria(std::string const & type);
};

#endif