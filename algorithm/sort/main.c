#include <stdio.h>
#include <string.h>

#include "bubble.h"

int getSortType( char type[], int argc, char *argv[] );

int main( int argc, char *argv[] )
{
    char type[10];
    if (getSortType( type, argc, argv ) == 0) return 0;

    if (strcmp(type, "bubble") == 0)
    {
        bubble();
    }
    else
    {
        printf( "ERROR: cann't find the type[%s] sort!", type );
    }

    return 0;
}

int getSortType( char type[], int argc, char *argv[] )
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

            if (strlen(tmp) <= 9)
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
        if (strlen(argv[1]) > 9)
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