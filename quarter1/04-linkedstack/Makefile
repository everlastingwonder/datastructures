all : stack

stack : stack.o init.o push.o pop.o top.o
	gcc -o stack stack.o init.o push.o pop.o top.o

stack.o : stack.c ../include/mystack.h
	gcc -c stack.c

init.o : init.c ../include/mystack.h
	gcc -c init.c

push.o : push.c ../include/mystack.h
	gcc -c push.c

pop.o : pop.c ../include/mystack.h
	gcc -c pop.c

top.o : top.c ../include/mystack.h
	gcc -c top.c

clean : stack.o push.o pop.o top.o
	rm *.o
.PHONY : clean
