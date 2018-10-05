#include <cs50.h>
#include <stdio.h>

int main(void) {
   int input;
   do {
   printf("what is your int: ");   
    input = get_int();
   }
   while ( input < 0 || input > 23);
   for( int row = 0; row < input; row++){
      for (int x = 1; x < input - row; x++ ){
        printf(" ");
      }
      for (int x = 0; x <= row; x++ ){
        printf("#");
      }
      printf("  ");
      for (int x = 0; x <= row; x++ ){
        printf("#");
      }
      printf("\n");
   }
}
