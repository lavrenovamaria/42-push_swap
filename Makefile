NAME = push_swap

SRCS_DIR = ./srcs/

NAME_CLIENT = client

CC = gcc

FLAGS = -Wall -Werror -Wextra

DIR_LIBFT = libft/
LIBFT = libft/libft.a

HEADER = ./includes/minitalk.h

HEADER_B = ./includes/minitalk_bonus.h

MINITALK_CLIENT = ./src/client.c

MINITALK_CLIENT_B = client_bonus.h

MINITALK_SERVER = ./src/server.c

MINITALK_SERVER_B = server_bonus.h

SOURCES_LIBFT = $(addprefix $(DIR_LIBFT), $(LIBFT))

all: $(NAME_SERVER) $(NAME_CLIENT)

$(NAME_SERVER): $(MINITALK_SERVER) $(LIBFT)
	@$(CC) $(FLAGS) $(MINITALK_SERVER) $(LIBFT) -o $(NAME_SERVER) -I ./includes
	@echo "--server is ready to use--(ᵔᴥᵔ)"

$(NAME_CLIENT): $(MINITALK_CLIENT) $(LIBFT)
	@$(CC) $(FLAGS) $(MINITALK_CLIENT) $(LIBFT) -o $(NAME_CLIENT) -I ./includes
	@echo "ʕ•ᴥ•ʔ--client is ready to use--"

$(NAME_SERVER_BONUS): $(MINITALK_SERVER) $(LIBFT)
	@$(CC) $(FLAGS) $(MINITALK_SERVER) $(LIBFT) -o $(NAME_SERVER_BONUS) -I ./includes
	@echo "--server is ready to use--(ᵔᴥᵔ)"

$(NAME_CLIENT_BONUS): $(MINITALK_CLIENT) $(LIBFT)
	@$(CC) $(FLAGS) $(MINITALK_CLIENT) $(LIBFT) -o $(NAME_CLIENT_BONUS) -I ./includes
	@echo "ʕ•ᴥ•ʔ--client is ready to use--"

$(LIBFT) :
	$(MAKE) -C $(DIR_LIBFT)

bonus: $(NAME_SERVER_BONUS) $(NAME_CLIENT_BONUS)
	@echo "[bonus version is ready to use]"

fclean:
	@rm -f $(NAME_SERVER) $(NAME_CLIENT) $(NAME_SERVER_BONUS) $(NAME_CLIENT_BONUS)

re: fclean all

.PHONY : all re fclean bonus
