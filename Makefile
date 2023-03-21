NAME = push_swap

SRCDIR = source
INCDIR = header
OBJDIR = objs

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -O0


SRC = $(wildcard $(SRCDIR)/*.c)
OBJ = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRC))


all: $(NAME)

$(NAME):$(OBJ)
	make -C ./Libft/
	make -C ./ft_printf/
	$(CC) $^ -o $@ ./Libft/libft.a ./ft_printf/libftprintf.a

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

$(OBJDIR):
	mkdir $(OBJDIR)

clean:
	rm -rf objs
	rm -rf ./Libft/*.o
	rm -rf ./ft_printf/*.o

fclean: clean
	rm -rf $(NAME)

re:fclean all

$(OBJ): | $(OBJDIR)

.PHONY: all clean fclean
