PROJ_NAME = Assessment_platform
TEST_PROJ_NAME = Test_$(PROJ_NAME)


#COVERAGE_TEST_NAME = coverage_$(PROJ_NAME)

SRC = 3_Implementation/main.c\
3_Implementation/src/inst.c\
3_Implementation/src/reg.c

TEST_SRC = 3_Implementation/test/test.c\
3_Implementation/unity/unity.c 

INC = 3_Implementation/inc

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
	gcc $(SRC) -I$(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run : all
	3_Implementation/Build/$(PROJ_NAME).$(EXEC)

test: $(SRC) $(TEST_SRC)
	gcc $(TEST_SRC) $(SRC) -I$(INC) -o $(TEST_PROJ_NAME).$(EXEC)
	3_Implementation/Build/$(TEST_PROJ_NAME).$(EXEC)


clean:
	$(RM) *.$(EXEC)
	