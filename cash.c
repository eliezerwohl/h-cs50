#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    float f;
    int i = 0;
    do {
        printf("please type float: ");
        f = get_float();
        f = round(f * 100);
    }
    while ( f < 0 );
    
    while(f - 25 >= 0) {
        i++;
        f = f - 25;
    }
    while(f - 10 >= 0) {
        i++;
        f = f - 10;
    }
    while(f - 5 >= 0) {
        i++;
        f = f - 5;
    }
    while(f - 1 >= 0 ) {
        i++;
        f = f - 1;
    }
    printf("%i\n", i);
}
