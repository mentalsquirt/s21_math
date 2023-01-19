NAME=s21_math

CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic

SRCS=s21_acos.c s21_asin.c s21_atan.c s21_cos.c s21_sin.c s21_tan.c s21_convert.c s21_fabs.c 
OBJS=$(SRCS:.c=.o)

EXIT_PATH=./

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(OBJS) -o $(EXIT_PATH)$@

%.o: %.c s21_math.h
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean:
		make clean
		rm -rf $(NAME) $(NAME).dSYM

re:
		make fclean
		make

.PHONY: all clean test s21_math.a gcov_report