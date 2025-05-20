#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

class Brain
{
	protected:
		std::string	_ideas[100];

	public:

		Brain& operator=(const Brain &beast);

		void				setIdeas(const std::string *ideas);
		const std::string	*GetIdeas() const;
		void				showIdea();
		Brain(void);
		Brain(std::string idea);
		Brain(const Brain &f);
		virtual ~Brain(void);

};

#endif