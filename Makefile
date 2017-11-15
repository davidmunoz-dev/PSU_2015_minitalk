##
## Makefile for make in /rendu/rendu_Systeme_Unix/PSU_2015_my_ls
##
## Made by munoz david
## Login   <munoz_d@epitech.net>
##
## Started on  Thu Nov 26 22:59:46 2015 munoz david
## Last update Tue Jan  5 10:46:39 2016 Munoz David
##

CLIENT	= client

SERVER	= server

OBJ1	= $(addprefix $(CLIENT)/, $(SRC1:.c=.o))

OBJ2	= $(addprefix $(SERVER)/, $(SRC2:.c=.o))

SRC1	= main_client.c

SRC2	= main_server.c

TMP	= $(SRC:.c=.c~)

CC	= gcc

RM 	= rm -f

LDFLAGS = -L./lib/my/ -lmy

CFLAGS	= -W -Wall -Werror -ansi -pedantic -I./include/ -I/home/${USER}/.froot/include

DIR	= lib/my

all: $(CLIENT) $(SERVER)

$(CLIENT): $(OBJ1)
	@(cd $(DIR) && $(MAKE))
	$(CC) -o $(CLIENT)/$(CLIENT) $(OBJ1) $(LDFLAGS) $(CFLAGS)
	@echo "\033[1;32m[Minitalk] : Client compilated\n\033[0m"

$(SERVER): $(OBJ2)
	@(cd $(DIR) && $(MAKE))
	$(CC) -o $(SERVER)/$(SERVER) $(OBJ2) $(LDFLAGS) $(CFLAGS)
	@echo "\033[1;32m[Minitalk] : Server compilated\n\033[0m"

clean:
	$(RM) $(OBJ1) $(TMP)
	$(RM) $(OBJ2) $(TMP)
	cd $(DIR) && ($(MAKE) clean)
	@echo "\033[1;31m[Minitalk] : Binary files deleted\n\033[0m"

fclean:
	$(RM) $(OBJ1)
	$(RM) $(OBJ2)
	$(RM) $(CLIENT)/$(CLIENT)
	$(RM) $(SERVER)/$(SERVER)
	cd $(DIR) && ($(MAKE) clean)
	@echo "\033[1;31m[Minitalk] : Binary and executable files are deleted\n\033[0m"

re: lib fclean all

.PHONY: all clean fclean re lib
