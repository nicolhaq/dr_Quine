NAME = Sully
CC = clang
SRC = Sully.c
INC =
DEL = Sully_*	
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
	@rm -rf $(NAME) $(DEL) a.out

re: fclean all

.PHONY: all clean fclean re