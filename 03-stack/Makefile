stack : stack.o push.o pop.o top.o
	gcc -o stack stack.o push.o pop.o top.o

stack.o : stack.c mystack.h
	gcc -c stack.c

push.o : push.c mystack.h
	gcc -c push.c

pop.o : pop.c mystack.h
	gcc -c pop.c

top.o : top.c mystack.h
	gcc -c top.c

mystack.h : ../include/mystack.h
.PHONY : mystack.h
