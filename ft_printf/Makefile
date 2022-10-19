NAME = libftprintf.a

SRCDIR = srcs
OBJSDIR = objs
INC = includes

CC = gcc

FLAGS = -Wall -Wextra -Werror -I$(INC)

SRCS := $(wildcard $(SRCDIR)/*.c)
OBJS := $(addprefix $(OBJSDIR)/, $(notdir $(SRCS:.c=.o)))

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJSDIR)/%.o: $(SRCDIR)/%.c | $(OBJSDIR)
	$(CC) -c $< $(FLAGS) -o $@

$(OBJSDIR):
	@mkdir -p $@

clean :
	rm -rf $(OBJSDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all
