# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/27 11:44:57 by tanselmo          #+#    #+#              #
#    Updated: 2024/03/28 12:07:21 by tanselmo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_DIR = Libft/

LIBFT = libft.a

SRCS_DIR = src

OBJ_DIR = obj

OBJ_DIR_BONUS = obj_bonus

SRCS_DIR_BONUS = bonus

FILES = src/ft_atol.c \
src/ft_bucle_sort.c \
src/ft_check.c \
src/ft_conversion.c \
src/ft_cost.c \
src/ft_free.c \
src/ft_index.c \
src/ft_list_size.c \
src/ft_make_array.c \
src/ft_make_movs.c \
src/ft_make_stack.c \
src/ft_position.c \
src/ft_print_error.c \
src/ft_push.c \
src/ft_reverse_rotate.c \
src/ft_rotate.c \
src/ft_sort_nbrs.c \
src/ft_strjoin_ps.c \
src/ft_swap.c \
src/ft_target_pos.c \
src/main.c \

FILES_BONUS = bonus/ft_check_bonus.c \
bonus/ft_check_input_bonus.c \
bonus/ft_conversion_bonus.c \
bonus/ft_do_movements_bonus.c \
bonus/ft_free_bonus.c \
bonus/ft_main_bonus.c \
bonus/ft_make_array_bonus.c \
bonus/ft_make_stack_bonus.c \
bonus/ft_print_error_bonus.c \
bonus/ft_atol_bonus.c \
bonus/ft_utils_bonus.c \
bonus/ft_push_bonus.c \
bonus/ft_reverse_rotate_bonus.c \
bonus/ft_rotate_bonus.c \
bonus/ft_swap_bonus.c \


CC = gcc

CFLAGS = -g -Wall -Werror -Wextra

OBJS_SRCS = $(patsubst %.c, $(OBJ_DIR)/%.o, $(FILES))

OBJS_SRCS_BONUS = $(patsubst %.c, $(OBJ_DIR_BONUS)/%.o, $(FILES_BONUS))

NAME = push_swap

NAME_BONUS = checker

INCLUDE = -I $(SRCS_DIR) -I $(LIBFT_DIR) -I $(SRCS_DIR_BONUS)

RM = rm -rf

all: $(NAME)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_DIR_BONUS)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

#Rules

$(NAME): $(OBJS_SRCS)
	@$(MAKE) -s all bonus printf gnl -C $(LIBFT_DIR)
	@$(CC) $(INCLUDE) $(OBJS_SRCS) -L$(LIBFT_DIR) -lft -o $(NAME)

bonus: $(NAME_BONUS)
$(NAME_BONUS): $(OBJS_SRCS_BONUS)
	@$(MAKE) -s all bonus printf gnl -C $(LIBFT_DIR)
	@$(CC) $(INCLUDE) $(OBJS_SRCS_BONUS) -L$(LIBFT_DIR) -lft -o $(NAME_BONUS)

clean:
	@$(RM) $(OBJ_DIR) $(OBJ_DIR_BONUS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	@$(RM) $(NAME) $(NAME_BONUS)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re bonus