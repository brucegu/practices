#include <stdio.h>
#include <string.h>

#include "bubble.h"
#include "quick.h"
#include "insert.h"

int get_sort_type( char type[], int argc, char *argv[] );

int main( int argc, char *argv[] )
{
    char type[30];
    if (get_sort_type( type, argc, argv ) == 0) return 0;

    if (strcmp(type, "bubble") == 0)
    {
        bubble_demo();
    }
    else if (strcmp(type, "bubble_stop_when_noexchange") == 0)
    {
        bubble_stop_when_noexchange_demo();
    }
    else if (strcmp(type, "bubble_low_high") == 0)
    {
        bubble_low_high_demo();
    }
    else if (strcmp(type, "quick") == 0)
    {
        quick_demo();
    }
    else if (strcmp(type, "straight_insert") == 0)
    {
        straight_insert_demo();
    }
    else
    {
        printf( "ERROR: cann't find the type[%s] sort!", type );
    }

    return 0;
}

int get_sort_type( char type[], int argc, char *argv[] )
{
    if (argc == 1)
    {
        int valid = 0;
        while(!valid)
        {
            char * tmp;
            printf( "please input the sort type or input q to exit: \n" );
            scanf( "%s", tmp );

            if (strcmp(tmp, "q") == 0) return 0;

            if (strlen(tmp) <= 29)
            {
                valid = 1;
                strcpy(type, tmp);
            }
            else
            {
                printf( "ERROR: length of the input is more than 9! \n" );
            }
        }
    }
    else if (argc == 2)
    {
        if (strlen(argv[1]) > 29)
        {
            printf( "size of argument[%s] is too long! \n", argv[1] );
            return 0;
        }
        else
        {
            strcpy(type, argv[1]);
        }
    }
    else
    {
        printf( "too much arguments! \n" );
        return 0;
    }
    return 1;
}