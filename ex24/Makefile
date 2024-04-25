NAME = libft.a
SRCS_DIR = srcs
INC_DIR = includes
SRCS := $(shell find $(SRCS_DIR) -name '*.c')
OBJS = $(SRCS:$(SRCS_DIR)/%.c=$(SRCS_DIR)/%.o)
CC = cc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
all: $(NAME)
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c
	$(CC) -c $(FLAGS) $< -o $@
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) *.out
re: fclean all

	

	
