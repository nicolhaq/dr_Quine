NAME = Grace
CC = clang
SRC = Grace.c
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
	@rm -rf $(NAME) Grace_kid.c
re: fclean all

.PHONY: all clean fclean re