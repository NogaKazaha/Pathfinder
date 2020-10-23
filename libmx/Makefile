.PHONY: all libmx uninstall clean reinstall

SRCS := $(wildcard src/*.c)
HDRS := $(wildcard inc/*.h)

all: libmx

libmx:
	@printf "\r\33[2K$(NAME) \033[33;1mcompile \033[0m$(<:$(SRCD)/%.c=%) "
	@clang -c ${HDRS} ${SRCS}
	@printf "\r\33[2K$@ \033[32;1mcreated\033[0m\n"
	@mkdir obj
	@mv *.o obj
	@ar -rc libmx.a obj/*.o
	@ranlib libmx.a


uninstall: clean
	@rm -f libmx.a

clean:
	@rm -f inc/*.gch
	@rm -rdf obj

reinstall: uninstall libmx
