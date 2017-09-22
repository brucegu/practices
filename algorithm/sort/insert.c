#include <stdio.h>

#include "insert.h"
#include "defs.h"

void straight_insert_demo()
{
    int data[] = { 10, 20, 11, 30, 9, 5, 12, 29 };
    straight_insert( data, lengthof(data, int) );
    print_int_array( data, lengthof(data, int) );
}

void straight_insert(int *data, int length)
{
    for(int i = 1; i < length; i++)
    {
        for(int j = i-1; j >= 0; j--)
        {
            if (data[j] < data[i])
            {
               move(data, j+1, i);
               break;
            }
            else if (j == 0)
            {
                move(data, 0, i);
            }
        }
    }
}

void move(int *data, int index, int partition)
{
    if (index >= partition) return;

    int partition_val = data[partition];
    for(int i = partition; i > index; i--)
    {
        data[i] = data[i-1];
    }
    data[index] = partition_val;
}