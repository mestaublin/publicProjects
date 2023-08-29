#include <string.h>
#include <stdlib.h>

typedef struct sqwarq {
  int prime;
  int square;  
}squares;
int square_root(int number);



static const squares lookup[] = {
    {1, 1},
    {2, 4},
    {3, 9},
    {5, 25},
    {7, 49},
    {11, 121},
    {13, 169},
    {17, 289},
    {19, 361},
};

int square_root(int number){
    int total = 1;
    int i = 1;
    while ( i < 9 && number > 0 ) {
        squares mysquare = lookup[i];
        if (number%mysquare.square == 0){
            total *= mysquare.prime; 
            number /= mysquare.square;
            } else {
            i++;
            }
        }
    return total;
}

    