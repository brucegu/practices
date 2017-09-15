#include <stdio.h>
#include "circle.h"
#include "rectangle.h"

int main(int argc, char *argv)
{
    circle_show();
    printf( "\n" );
    rectangle_show();

    printf( "enter anything to quit!");
    char input[20];
    scanf( "%s", input );

    return 0;
}