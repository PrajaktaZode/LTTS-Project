PROJ_NAME = Assessment_Platform
#TEST_PROJ_NAME = Test_$(PROJ_NAME)


#COVERAGE_TEST_NAME = coverage_$(PROJ_NAME)

SRC = Implementation/src/inst.c\
Implementation/src/reg.c

#TEST_SRC = ./test/test.c unity/unity.c 

INC = Implementation/inc

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
   editor = notepad
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
	  editor = cat
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
#.PHONY : all test coverage run clean doc

all:  
	gcc main.c $(SRC) -I$(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run : all
	./$(PROJ_NAME).$(EXEC)


clean:
	$(RM) *.$(EXEC)
	