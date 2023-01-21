NAME=s21_math

CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic
DEBUG=-g -DDEBUG

SRCS=s21_acos.c s21_asin.c s21_atan.c s21_cos.c s21_sin.c s21_tan.c s21_fabs.c 
OBJS=$(SRCS:.c=.o)

EXIT_PATH=./

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(OBJS) -o $(EXIT_PATH)$@

%.o: %.c s21_math.h
		$(CC) $(CFLAGS) -c $< -o $@

test: $(OBJS) $(SRCS) s21_math.h
		$(CC) $(CFLAGS) trigonometry_tests.c $(OBJS) -o $(EXIT_PATH)$@
		$(EXIT_PATH)$@
		make fclean

debug: $(SRCS) s21_math.h
		$(CC) $(CFLAGS) $(DEBUG) trigonometry_tests.c $(SRCS) -o $(EXIT_PATH)$@
		$(EXIT_PATH)$@
		make fclean

clean:
		rm -f $(OBJS)

fclean:
		make clean
		rm -rf $(NAME) $(NAME).dSYM test test.dSYM debug debug.dSYM

re:
		make fclean
		make

.PHONY: all clean test s21_math.a gcov_report