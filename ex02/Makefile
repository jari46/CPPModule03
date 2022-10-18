NAME			:= Repetitive-work

CXX				:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98
RM				:= rm -f

SRCS	:= \
				main.cpp \
				ClapTrap.cpp \
				FragTrap.cpp

OBJS		= $(SRCS:.cpp=.o)

.PHONY:	all std clean fclean re

all:			$(NAME)

clean:
				$(RM) $(OBJS)

fclean:	clean
				$(RM) $(NAME)

re:				fclean all

$(NAME):	$(OBJS)
					$(CXX) $(CFLAGS) $^ -o $@
