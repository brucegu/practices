objects = main.o defs.o bubble.o quick.o insert.o
gccflags = -g

sort : $(objects)
	gcc $(gccflags) -o sort $(objects)

main.o : main.c bubble.h
	gcc -c $(gccflags) main.c
defs.o : defs.c defs.h
	gcc -c $(gccflags) defs.c
bubble.o : bubble.c bubble.h defs.h
	gcc -c $(gccflags) bubble.c
quick.o : quick.c quick.h defs.h
	gcc -c $(gccflags) quick.c
insert.o : insert.c insert.h defs.h
	gcc -c $(gccflags) insert.c
.PHONY: clean
clean :
	-del sort.* $(objects)