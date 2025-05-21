NAME = Materia

SRCS =	main.cpp			\
		ICharacter.cpp		\
		IMateriaSource.cpp	\
		AMateria.cpp		\
		Character.cpp		\
		MateriaSource.cpp	\
		Ice.cpp				\
		Cure.cpp			\
		Fire.cpp			\

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -g3 -MMD -std=c++98

RM = rm -f

OBJS = $(SRCS:.cpp=.o)
DEPS = $(OBJS:.o=.d)

all : $(NAME)
	
$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean : 
	$(RM) $(OBJS) $(DEPS)

fclean : clean
	$(RM) $(NAME)

re : fclean all