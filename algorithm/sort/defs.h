#ifndef COMMON_H
#define COMMON_H

//length of int[], char[] etc.
#define lengthof(data, ty) (sizeof(data)/sizeof(ty))

extern void swap( int *data, int i, int j );
extern void print_int_array( int *data, int length );

#endif