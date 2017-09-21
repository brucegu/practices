#ifndef COMMON_H
#define COMMON_H

//length of int[], char[] etc.
#define lengthof(data, ty) (sizeof(data)/sizeof(ty))

void swap( int *data, int i, int j )
{
    int tmp = data[i];
    data[i] = data[j];
    data[j] = tmp;
}

void print_int_array( int *data, int length )
{
    printf( "data:\n" );
    for (int i=0; i<length; i++)
    {
        printf( " %d", data[i] );
    }
}

#endif