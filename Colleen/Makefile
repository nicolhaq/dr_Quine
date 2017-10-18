NAME = Colleen
CC = clang
SRC = Colleen.c
INC =	
OBJ = $(SRC:.c=.o)
INCFLAG = -I ./
FLAG = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $(OBJ)

%.o: %.c
	$(CC) $(FLAG) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re