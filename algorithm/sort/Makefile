objects = main.o bubble.o
gccflags = -g

sort : $(objects)
	gcc $(gccflags) -o sort $(objects)

main.o : main.c bubble.h
	gcc -c $(gccflags) main.c
bubble.o : bubble.c bubble.h defs.h
	gcc -c $(gccflags) bubble.c

.PHONY: clean
clean :
	-del sort.* $(objects)