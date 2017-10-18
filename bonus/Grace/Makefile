NAME = Grace
CC = g++
SRC = Grace.cpp
INC =	
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
	@rm -rf $(NAME) Grace_kid.cpp

re: fclean all

.PHONY: all clean fclean re