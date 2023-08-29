#ifndef DARTS_H
#define DARTS_H
#include <stdint.h>
#include <stddef.h>
typedef struct{
    float x;
    float y;
}coordinate_t;

uint8_t score(coordinate_t landing_position);

#endif

#include "darts.h"
#include <math.h>
uint8_t score(coordinate_t landing_position) {
    uint8_t total;
    float result = sqrt(pow(landing_position.x, 2) + pow(landing_position.y, 2));
    if (result <= 1) {
        total = 10;
    } else if (result <= 5) {
        total = 5;
    } else if (result <= 10) {
        total = 1;
    } else {
        total = 0;
    }
    
    return total;
}
