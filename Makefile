NAME = libminimath.a

SHELL = /bin/sh
CC = gcc
RM = rm -rf
AR = ar
ARFLAGS = -rcs
CFLAGS = -Wall -Wextra -Werror
IFLAGS = -I$(INC_PATH)
LFLAGS = -lm

.SUFFIXE:
.SUFFIXES: .c .o .h

INC_PATH = $(shell find includes -type d)
SRC_PATH = $(shell find src -type d)
OBJ_PATH = obj

vpath %.c $(foreach dir, $(SRC_PATH), $(dir):)

SRC		=		ft_vec2.c			\
				ft_vec2_op.c		\
				ft_vec2_op2.c		\
				ft_vec2_norm.c		\
				ft_vec2_prod.c		\
				ft_vec3.c			\
				ft_vec3_op.c		\
				ft_vec3_op2.c		\
				ft_vec3_norm.c		\
				ft_vec3_prod.c		\
				ft_vec4.c			\
				ft_vec4_op.c		\
				ft_vec4_op2.c		\
				ft_vec4_norm.c		\
				ft_vec4_prod.c		\
				ft_mat3x3.c			\
				ft_mat3x3_op.c		\
				ft_mat3x3_op2.c		\
				ft_mat4x4.c			\
				ft_mat4x4_op.c		\
				ft_mat4x4_op2.c		\
				ft_mat_vec_op.c		\
				ft_angle.c			\
				ft_sqr.c			\

OBJ = $(addprefix $(OBJ_PATH)/, $(SRC:%.c=%.o))

.PHONY: all
all: $(NAME)

$(NAME): $(OBJ_PATH) $(OBJ)
	@$(AR) $(ARFLAGS) $@ $(OBJ)
	@echo "\nOK\t\t$(NAME) is ready"

$(OBJ_PATH):
	@mkdir -p $@
	@echo "Created\t\t$@ directory"

$(OBJ_PATH)/%.o : %.c
	@echo "\r\033[KCompiling\t$< \c"
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

.PHONY: debug
debug: CFLAGS+=-g3
debug: re

.PHONY: clean
clean:
	@$(RM) $(OBJ_PATH)
	@echo "Cleaned\t\tobject files"

.PHONY: fclean
fclean: clean
	@$(RM) $(NAME)
	@echo "Removed\t\t$(NAME)"

.PHONY: re
re: fclean all
