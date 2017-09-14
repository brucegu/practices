objects = combinator.o circle.o rectangle.o
shap : $(objects)
	gcc -o shap.exe $(objects)

combinator.o : circle.h rectangle.h
	gcc -c combinator.c
circle.o : circle.h
	gcc -c circle.c
rectangle.o : rectangle.h
	gcc -c rectangle.c

.PHONY: clean
clean :
	-del shap.exe $(objects)