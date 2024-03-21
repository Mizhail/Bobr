FLAGS = -Wall -Werror -Wextra -std=c11

all: charStack.o str.o toPolska.o main.o
	gcc $(FLAGS) charStack.o str.o toPolska.o main.o -o main.exe
	./main.exe
	
charStack.o:
	gcc $(FLAGS) -c charStack.c

str.o:
	gcc $(FLAGS) -c str.c

toPolska.o:
	gcc $(FLAGS) -c toPolska.c

main.o:
	gcc $(FLAGS) -c main.c

rebuild: clean all

clean:
	del charStack.o
	del str.o
	del toPolska.o
	del main.o
	del main.exe