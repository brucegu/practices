objects = combinator.o circle.o rectangle.o
mode = debug
gccflags = -g

#ifeq ($(gccflags), debug)
#gccflags = -g
#endif

shap : $(objects)
	gcc $(gccflags) -o shap.exe $(objects)

combinator.o : combinator.c circle.h rectangle.h
	gcc -c $(gccflags) combinator.c
circle.o : circle.c circle.h
	gcc -c $(gccflags) circle.c
rectangle.o : rectangle.c rectangle.h
	gcc -c $(gccflags) rectangle.c

.PHONY: clean
clean :
	-del shap.exe $(objects)