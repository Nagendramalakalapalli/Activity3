PROJECT = ASCII
SRC = ./ASCII.c ./main.c
TEST_SRC = ./unit_ASCII.c

Build:
	gcc $(SRC) $(TEST_SRC) -o $(PROJECT).out

Run :
	./$(PROJECT).out

Analyse:
	cppcheck --enable=all $(SRC)

clean :
	rm -rf *.out 

