# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 23:09:38 by ipersids          #+#    #+#              #
#    Updated: 2024/11/14 00:06:47 by ipersids         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compilation variables
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
HDRS		= -I$(LIBFT_DIR) -I.
AR 			= ar
ARFLAGS 	= -rvcs

# Platform-specific settings
ifeq ($(OS),Windows_NT)
    RM = del /q
    RM_DIR = rmdir /s /q
    LIB_EXT = .lib
else
    RM = rm -f
    RM_DIR = rm -rf
    LIB_EXT = .a
endif

# File names
NAME		:= libftprintf$(LIB_EXT)
SRCS		:= ft_printf.c ft_puthex_fd.c ft_putptr_fd.c ft_putunmb_fd.c
OBJ			:= $(SRCS:%.c=%.o)
LIBFT_DIR	:= ./libft
LIBFT		:= $(LIBFT_DIR)/libft$(LIB_EXT)

# Targets
all: $(LIBFT) $(NAME)

# Compile libft by calling its Makefile
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

# Create the libftprintf library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) ./libft/*.o
	@echo "\nLibrary $(NAME) created.\n"

# Compile object files
%.o: %.c 
	$(CC) $(CFLAGS) $(HDRS) -c $< -o $@
	@echo "Compiled $< into $@"

# Clean object files
clean:
	@$(RM) -f $(OBJ)
	@$(MAKE) -C $(LIBFT_DIR) clean
	@echo "Cleaned up $(NAME) object files."

# Remove all compiled files
fclean: clean
	@$(RM) -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@echo "Cleaned up $(NAME) executable files."

# Rebuild everything
re: fclean all
	@echo "Cleaned up $(NAME) objects + executable and rebuilded library."

.PHONY: all clean fclean re
