PROJECT = ASCII
SRC = ASCII.c main.c
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
	gcc $(SRC)  -o $(PROJECT).out

Run :
	./$(PROJECT).out

Analyse:
	cppcheck --enable=all $(SRC)

clean :
	rm -rf *.out 

dynamic_analysis : Build
	valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))
	
coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
	gcov -a ./$(call FixPath,$(PROJ_NAME).$(EXEC))