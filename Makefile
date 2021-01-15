NAME := libminimath.a

SHELL = /bin/sh
RM = /bin/rm

.SUFFIXES:
.SUFFIXES: .c .o .h

include includes.mk sources.mk

OBJ_FILES = $(SRC_FILES:%.c=%.o)

# ****************************** DIRS AND PATHS ****************************** #

INC_DIR = includes
SRC_DIR = src
OBJ_DIR = obj

INC = $(addprefix $(INC_DIR)/, $(INC_FILES))
OBJ = $(addprefix $(OBJ_DIR)/, $(OBJ_FILES))

VPATH = $(SRC_DIR)

# *************************** COMPILING AND FLAGS **************************** #

CC = gcc
AR = ar

ARFLAGS = -rcs
CFLAGS = -Wall -Wextra -Werror -g3
CPPFLAGS = -I$(INC_DIR)

# ********************************** RULES *********************************** #

all: $(NAME)

# OBJ DIR #

$(OBJ_DIR):
	@mkdir -p $@
	@echo "Created\t\t$@ directory"

# COMPILING #

$(OBJ_DIR)/%.o : %.c $(INC)
	@echo "\r\033[KCompiling\t$< \c"
	@$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ -c $<

# ARCHIVING AND INDEXING #

$(NAME): $(OBJ_DIR) $(OBJ) $(INC)
	@$(AR) $(ARFLAGS) $@ $(OBJ)
	@echo "\nOK\t\t$@ is ready"

# CLEAN #

clean:
	@$(RM) -rf $(OBJ_DIR)
	@echo "Cleaned\t\tobject files"

fclean: clean
	@$(RM) -f $(NAME)
	@echo "Removed\t\t$(NAME)"

re: fclean all

.PHONY: all clean fclean re
