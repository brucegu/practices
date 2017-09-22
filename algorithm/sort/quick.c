#include <stdio.h>

#include "quick.h"
#include "defs.h"

void quick_demo()
{
    int data[] = { 10, 20, 11, 30, 9, 5, 12, 29 };
    quick( data, 0, lengthof(data, int) );
    print_int_array( data, lengthof(data, int) );
}

int partition( int *data, int low, int high )
{
    int key = data[low];
    while(low < high)
    {
        while(low < high && data[high] >= key ) high--;
        swap(data, low, high);
        while(low < high && data[low] < key) low++;
        swap(data, low, high);
    }
    return low;
}

void quick( int *data, int low, int high )
{
    if (low >= high) return;

    int loc = partition( data, low, high );
    quick( data, low, loc-1);
    quick( data, loc+1, high);
}