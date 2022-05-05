PROJECT = ASCII
SRC = ASCII.c main.c
TEST_SRC = ./Unit_ASCII.c

Build:
	gcc $(SRC)  -o $(PROJECT).out

Run :
	./$(PROJECT).out

Analyse:
	cppcheck --enable=all $(SRC)

clean :
	rm -rf *.out 

