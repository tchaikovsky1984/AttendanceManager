all : atc

atc : att.out parse.out
	@echo "Linking parse and att binaries"
	gcc att.out parse.out -o atc

att.out : att.c
	@echo "Compiling att.c"
	gcc -o att.out -c att.c
	chmod +x att.out

parse.out : parse.c
	@echo "Compiling parse.c"
	gcc -o parse.out -c parse.c
	chmod +x parse.out

clean :
	@echo "Removing executable binaries"
	rm -rf att.out parse.out atc
