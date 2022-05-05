PROJECT = ASCII
SRC = ./ASCII.c ./main.c
INC = ./ASCII.h
TEST_SRC = ./Unit_ASCII.c


ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


Build:
	gcc $(SRC)  -o $(PROJECT).$(EXEC)

Run :
	./$(PROJECT).$(EXEC)

Analyse:
	cppcheck --enable=all $(SRC)

dynamic_analysis : Build
	valgrind ./$(call FixPath,$(PROJECT).$(EXEC))
	
# coverage:
# 	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(PROJECT).$(EXEC)) -lm
# 	gcov -a ./$(call FixPath,$(PROJECT).$(EXEC))

clean :
	rm -rf *.out *.gcda *.gcno *.gcov


COVERAGE :
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(TEST_SRC) -o $(PROJECT).out -lgtest -lgtest_main -lpthread
	./$(PROJECT).out 
	gcov -a $(SRC)