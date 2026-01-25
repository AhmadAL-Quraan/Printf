NAME=libftprintf.a

CC=cc


AR = ar rcs
RM = rm -f
CFLAGS = -Wall -Wextra -Werror 
SRCS = ft_hex.c ft_itoa.c ft_pointer.c ft_print_base.c ft_utostr.c printf_main.c printf_utilization.c
#OBJS will change .c in .o
OBJS = $(SRCS:.c=.o)

OBJS_B=$(SRCS_B:.c=.o)

# To use with libft test cases saved in ~/Documents/programs/42_helping_tools/ on my personal machine

#these are commands, $< when used in the "recipe",
#means "the first prerequisite" - the first thing after the : in the line above.
# $@ --> the target file
# This is called a rule target which is executed when needed
# So when the target $(NAME) is executed, make file will search for .o file for any 
#specifc file, then it gonna generate it from this rule if it's not exists or old
%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@
#this command mean take the OBJS and put into the NAME with the commands of AR
# This the first target that make file starts when you write "make"
$(NAME): $(OBJS) $(OBJS_B)
		$(AR) $(NAME) $(OBJS) $(OBJS_B)

# But when we say make all --> it start builds from here (first target)
all: $(NAME)
#for the bonus part
#The clean will remove all .o files
clean:
	$(RM) $(OBJS) $(OBJS_B)
#The fclean (full clean) will do the clean + remove the .a file
fclean: clean
	$(RM) $(NAME)

	#re will do fclean and he will do the make again
re : fclean all
# so: $(OBJS)
# 	$(CC) -shared -o libft.so $(OBJS) $(OBJS_B)


# declare the .PHONY is to tell make that (fclean, re, all, info..) are not real files
#Because make assumes that those are real files by defualt (because make assumes that any target is a real file)
# Also those can't be execute until called explicitly 
.PHONY :so all clean fclean re  info

info:
	@echo "	 libft: make [info , all , bonus , clean , fclean , re]"
	@echo "	libft build targets"
	@echo "		all: compile the library"
	@echo "		bonus: compile the library with bonus"
	@echo "		clean: remove object files"
	@echo "		fclean: remove object files and archive library"
	@echo "		re: fclean and all						"
