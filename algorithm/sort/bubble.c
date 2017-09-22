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
    for (int i = 0; i < length-1; i++)
    {
        for (int j = 0; j < length-i-1; j++)
        {
            if (data[j] > data[j+1]) swap( data, j, j+1 );
        }
    }
}

void bubble_stop_when_noexchange_demo()
{
    int data[] = { 10, 20, 11, 30, 9, 5, 12, 29 };
    bubble_stop_when_noexchange( data, lengthof(data, int) );
    print_int_array( data, lengthof(data, int) );
}

void bubble_stop_when_noexchange( int *data, int length )
{
    int i = length - 1;
    while(i > 0)
    {
        int pos = 0;
        for (int j = 0; j < i; j++)
        {
            if (data[j] > data[j+1])
            {
                pos = j;
                swap( data, j, j+1 );
            }
        }
        i = pos;
    }
}

void bubble_low_high_demo()
{
    int data[] = { 10, 20, 11, 30, 9, 5, 12, 29 };
    bubble_low_high( data, lengthof(data, int) );
    print_int_array( data, lengthof(data, int) );
}

void bubble_low_high( int *data, int length )
{
    int low = 0;
    int high = length-1;
    while (low < high)
    {
        for (int j = low; j < high-1; j++)
        {
            if (data[j] > data[j+1]) swap( data, j, j+1 );
        }
        high--;
        for (int k = high; k > 0; k--)
        {
            if (data[k] < data[k-1]) swap( data, k, k-1 );
        }
        low++;
    }
}