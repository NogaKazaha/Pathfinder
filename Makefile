NAME	=	pathfinder

CFLG	=	-std=c11 $(addprefix -W, all extra error pedantic) -g

SRCD	=	src
INCD	=	inc
OBJD	=	obj

LMXD	=	libmx
LMXA:=	$(LMXD)/libmx.a
LMXI:=	$(LMXD)/inc

INC		=	pathfinder.h
INCS	=	$(addprefix $(INCD)/, $(INC))

SRC	= main.c \
mx_pathfinder_clear.c \
mx_pathfinder_adj_matrix_fill.c \
mx_error_invalid_line_value.c \
mx_check_first_word.c \
mx_check_second_word.c \
mx_check_third_word.c \
mx_pathfinder_error_check_all.c \
mx_pathfinder_error_invalid_argc.c \
mx_pathfinder_error_invalid_first_line.c \
mx_pathfinder_error_invalid_name.c \
mx_pathfinder_uniq_matrix.c \
mx_pathfinder_matrix_init.c \
mx_pathfinder_error_checker.c \
mx_pathfinder_adj_matrix.c \
mx_pathfinder_stack_fill.c \
mx_pathfiner_stack.c \
mx_pathfinder_rout.c \
mx_pathfinder_rout_matrix_init.c \
mx_pathfinder_output.c \
mx_pathfinder_print.c \
mx_pathfinder_print_path.c \
mx_pathfinder_print_route.c \
mx_pathfinder_print_dist.c \
mx_pathfinder_error_num.c \
mx_pathfinder_temp_matrix.c \
mx_pathfinder_dupdel.c


SRCS	=	$(addprefix $(SRCD)/, $(SRC))
OBJS	=	$(addprefix $(OBJD)/, $(SRC:%.c=%.o))

all: install

install: $(LMXA) $(NAME)

$(NAME): $(OBJS)
	@clang $(CFLG) $(OBJS) -L$(LMXD) -lmx -o $@
	@printf "\r\33[2K$@ \033[32;1mcreated\033[0m\n"

$(OBJD)/%.o: $(SRCD)/%.c $(INCS)
	@clang $(CFLG) -c $< -o $@ -I$(INCD) -I$(LMXI)
	@printf "\r\33[2K$(NAME) \033[33;1mcompile \033[0m$(<:$(SRCD)/%.c=%) "

$(OBJS): | $(OBJD)

$(OBJD):
	@mkdir -p $@

$(LMXA):
	@make -sC $(LMXD)
clean:
	@make -sC $(LMXD) $@
	@rm -rf $(OBJD)
	@printf "$(OBJD)\t   \033[31;1mdeleted\033[0m\n"

uninstall: clean
	@make -sC $(LMXD) $@
	@rm -rf $(NAME)
	@printf "$(NAME) \033[31;1muninstalled\033[0m\n"

reinstall: uninstall install
