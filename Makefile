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

INC_FILES	=	minimath.h			\
				minimath_define.h	\
				minimath_mat3x3.h	\
				minimath_mat4x4.h	\
				minimath_mat_vec.h	\
				minimath_op.h		\
				minimath_vec2.h		\
				minimath_vec3.h		\
				minimath_vec4.h		\

INC			=	$(addprefix includes/, $(INC_FILES))

SRC		=		vec2.c			\
				vec2_op.c		\
				vec2_op2.c		\
				vec2_norm.c		\
				vec2_prod.c		\
				vec3.c			\
				vec3_op.c		\
				vec3_op2.c		\
				vec3_norm.c		\
				vec3_prod.c		\
				vec4.c			\
				vec4_op.c		\
				vec4_op2.c		\
				vec4_norm.c		\
				vec4_prod.c		\
				mat3x3.c		\
				mat3x3_op.c		\
				mat3x3_op2.c	\
				mat4x4.c		\
				mat4x4_op.c		\
				mat4x4_op2.c	\
				mat_vec_op.c	\
				ft_angle.c		\
				ft_sqr.c		\

OBJ = $(addprefix $(OBJ_PATH)/, $(SRC:%.c=%.o))

.PHONY: all
all: $(NAME)

$(NAME): $(OBJ_PATH) $(OBJ) $(INC)
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
