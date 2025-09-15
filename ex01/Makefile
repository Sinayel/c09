CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRC_DIR = srcs
INC_DIR = includes

SRCS    = $(SRC_DIR)/ft_putchar.c \
          $(SRC_DIR)/ft_swap.c \
          $(SRC_DIR)/ft_putstr.c \
          $(SRC_DIR)/ft_strlen.c \
          $(SRC_DIR)/ft_strcmp.c

OBJS    = $(SRCS:.c=.o)

NAME    = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/ft.h
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	@echo "Cleaning object files..."
	rm -f $(OBJS)

fclean: clean
	@echo "Cleaning $(NAME)..."
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re