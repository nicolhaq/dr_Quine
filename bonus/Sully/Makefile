NAME = Sully
CC = g++
SRC = Sully.cpp
INC =
DEL = Sully_*	
OBJ = $(SRC:.cpp=.o)
INCFLAG = -I ./
FLAG = -Wall -Wextra -Werror -std=c++11 

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $(OBJ)

%.o: %.cpp
	$(CC) $(FLAG) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME) $(DEL) a.out

re: fclean all

.PHONY: all clean fclean re