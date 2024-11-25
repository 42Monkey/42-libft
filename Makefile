################################################################################
## ARGUMENTS
NAME		= libft.a
HEADERS		= libft.h
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR 			= ar rcs
RM			= rm -f

################################################################################
## SOURCES

SRCS_FILES	=  \
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BSRCS_FILES	= \
			ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ_FILES	= $(SRCS_FILES:.c=.o)
BOBJ_FILES	= $(BSRCS_FILES:.c=.o)

################################################################################
## RULES

all:		$(NAME)

$(NAME):	$(OBJ_FILES)
			$(AR) $@ $^
			@echo "$(CYAN)Successfully created $(NAME)$(NC)\n"

%.o: 		%.c
			$(CC) $(CFLAGS) -c $< -o $@
			@echo "$(GREEN)Successfully compiled $<$(NC)\n"

bonus: 		$(BOBJ_FILES)
			$(AR) $@ $^
			@echo "$(GREEN)Successfully created $(NAME)$(NC)\n"

clean:
			$(RM) $(OBJ_FILES) $(BOBJ_FILES)
			@echo "$(YELLOW)Successfully removed object files$(NC)\n"

fclean:		clean
			$(RM) $(NAME)
			@echo "$(YELLOW)Successfully removed everything $(NAME)$(NC)\n"

re:		fclean all

.PHONY: 	all clean fclean re

################################################################################
## STYLES

CYAN := \033[0;36m
YELLOW := \033[0;33m
GREEN := \033[0;32m
NC := \033[0m
