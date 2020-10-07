NAME := libminimath.a

SHELL = /bin/sh
RM = /bin/rm

.SUFFIXE:
.SUFFIXES: .c .o .h

# ******************************** CC AND FLAGS ****************************** #

CC = gcc
AR = ar

ARFLAGS = -rcs
CFLAGS = -Wall -Wextra -Werror
IFLAGS = -I$(INC_DIR)
LFLAGS = -lm

# ******************************* DIRS AND PATHS ***************************** #

INC_DIR		=	includes
SRC_DIR		=	src
OBJ_DIR		=	obj

INC			=	$(addprefix $(INC_DIR)/, $(INC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR)/, $(SRC:%.c=%.o))

VPATH		=	$(SRC_DIR)

# ********************************** FILES *********************************** #

INC_FILES	=	minimath.h			\
				minimath_define.h	\
				minimath_mat3x3.h	\
				minimath_mat4x4.h	\
				minimath_mat_vec.h	\
				minimath_op.h		\
				minimath_vec2.h		\
				minimath_vec3.h		\
				minimath_vec4.h

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
				ft_sqr.c

# ********************************** RULES *********************************** #

.PHONY: all
all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ) $(INC)
	@$(AR) $(ARFLAGS) $@ $(OBJ)
	@echo "\nOK\t\t$(NAME) is ready"

# OBJ DIR #

$(OBJ_DIR):
	@mkdir -p $@
	@echo "Created\t\t$@ directory"

# COMPILING #

$(OBJ_DIR)/%.o : %.c
	@echo "\r\033[KCompiling\t$< \c"
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

# DEBUG #

.PHONY: debug
debug: CFLAGS+=-g3
debug: re

# CLEAN #

.PHONY: clean
clean:
	@$(RM) -rf $(OBJ_DIR)
	@echo "Cleaned\t\tobject files"

.PHONY: fclean
fclean: clean
	@$(RM) $(NAME)
	@echo "Removed\t\t$(NAME)"

.PHONY: re
re: fclean all
