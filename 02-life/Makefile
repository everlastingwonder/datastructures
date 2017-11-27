life : life.o count.o map.o
	gcc -o life life.o count.o map.o

life.o : life.c life.h
	gcc -c life.c

count.o : count.c life.h
	gcc -c count.c

map.o : map.c life.h title.txt
	gcc -c map.c

life.h : ../include/life.h
.PHONY : life.h
