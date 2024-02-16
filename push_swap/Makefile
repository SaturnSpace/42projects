# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/16 12:59:08 by acarpent          #+#    #+#              #
#    Updated: 2024/02/16 14:31:42 by acarpent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Définitions de base
NAME = push_swap
CC = cc
CFLAGS = -g -Wall -Wextra -Werror 
CPPFLAGS = -I./include
BUILD = ./build
PRINTF = ./external/ft_printf
SRC = $(shell find ./src -name '*.c') # A REMPLACER
OBJ = $(SRC:src/%.c=$(BUILD)/%.o)

# Crée le dossier BUILD si nécessaire
$(shell mkdir -p $(BUILD))
	
# Règle principale
all: 	printf $(NAME)

# Règle pour compiler printf
printf:
	$(MAKE) -C $(PRINTF)
	
# Règle pour créer l'exécutable push_swap
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJ) -L$(PRINTF) -lftprintf -o $(NAME)

# Règle pour compiler les fichiers .c en .o et les déplacer dans BUILD
$(BUILD)/%.o: src/%.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

# Règles pour nettoyer les fichiers objets et l'exécutable
clean:
	$(MAKE) -C $(PRINTF) clean
	rm -f $(BUILD)/*.o

fclean: clean
	$(MAKE) -C $(PRINTF) fclean
	rm -f $(NAME)

# Règle pour recompiler
re: fclean all

# Pour éviter les conflits avec des fichiers du même nom
.PHONY: all clean fclean re printf