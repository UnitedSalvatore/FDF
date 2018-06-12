NAME = fdf

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

MINILIBX_DIR = minilibx_macos
MINILIBX = $(MINILIBX_DIR)/libmlx.a

FILENAMES = main.c \
			functions.h

SOURCES = $(addprefix ./src/, $(FILENAMES))
OBJECTS = $(SOURCES:.c=.o)

CC = gcc
FLAGS ?= -Wall -Wextra -Werror
FLAGS += -I./$(MINILIBX_DIR) -I./$(LIBFT_DIR)/include

all: $(NAME)

$(NAME): $(LIBFT) $(MINILIBX) $(OBJECTS)
	$(CC) -o $@ $(FLAGS) $(OBJECTS) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_DIR)/

$(MINILIBX):
	make -C $(MINILIBX_DIR)/

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS)
	make -C $(LIBFT_DIR)/ fclean
	make -C $(MINILIBX_DIR)/ clean

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	find ./src/ ./include/ -type f -name "*.[c,h]" | xargs norminette
