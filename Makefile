# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/24 19:44:36 by aqoraan           #+#    #+#              #
#    Updated: 2026/01/27 21:50:50 by aqoraan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

MAIN=main.c

CC=cc
CFLAGS=-Wall -Werror -Wextra
ARCHIVING=ar -rs 

SRCS=ft_hex.c ft_itoa.c cnt_variadic_arg.c ft_pointer.c  ft_utostr.c printf_utilization.c ft_print_base.c printf_main.c
SRCS_OBJ=$(SRCS:.c=.o)


$(SRCS_OBJ): $(SRCS) 
	$(CC) $(CFLAGS) -c $(SRCS) 

$(NAME): $(SRCS_OBJ)
	$(ARCHIVING) $(NAME) $(SRCS_OBJ)


connect_arc_main: $(MAIN) $(NAME)
	$(CC) $(CFLAGS) $(MAIN) $(NAME) -o output
	./output

$(MAIN): 
	echo -e "#include <stdio.h>\nint main(){\n}" > main.c 

all: $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm $(NAME) 
	rm output

re: fclean all
.PHONY :all clean fclean re connect_arc_main
#these are commands, $< when used in the "recipe",
#means "the first prerequisite" - the first thing after the : in the line above.
# $@ --> the target file
# This is called a rule target which is executed when needed
# So when the target $(NAME) is executed, make file will search for .o file for any 
#specifc file, then it gonna generate it from this rule if it's not exists or old
#this command mean take the OBJS and put into the NAME with the commands of AR
# This the first target that make file starts when you write "make"

# But when we say make all --> it start builds from here (first target)
#for the bonus part
#The clean will remove all .o files
# so: $(OBJS)
# 	$(CC) -shared -o libft.so $(OBJS) $(OBJS_B)


# declare the .PHONY is to tell make that (fclean, re, all, info..) are not real files
#Because make assumes that those are real files by defualt (because make assumes that any target is a real file)
# Also those can't be execute until called explicitly 

