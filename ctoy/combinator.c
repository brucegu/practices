#include <stdio.h>
#include "circle.h"
#include "rectangle.h"

int main(int argc, char *argv)
{
    circle_show();
    printf( "\n" );
    rectangle_show();

    for (int i = 0; i < 10000; i++)
    {
        int j = i;
    }

    printf( "enter anything to quit!");
    char input[20];
    scanf( "%s", input );

    return 0;
}