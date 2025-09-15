#!/bin/sh
gcc -Wall -Wextra -Werror -c ft_strlen.c ft_swap.c ft_strcmp.c ft_putchar.c ft_putstr.c
ar rc libft.a ft_strlen.o ft_swap.o ft_strcmp.o ft_putchar.o ft_putstr.o