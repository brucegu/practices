#include <stdio.h>
#include "bubble.h"
#include "defs.h"

void bubble_demo()
{
    int data[] = { 10, 20, 11, 30, 9, 5, 12, 29 };
    bubble( data, lengthof(data, int) );
    print_int_array( data, lengthof(data, int) );
}

void bubble( int *data, int length )
{
    for (int i=0; i<length; i++)
    {
        for (int j=i+1; j<length; j++)
        {
            if (data[i] < data[j]) swap( data, i, j );
        }
    }
}