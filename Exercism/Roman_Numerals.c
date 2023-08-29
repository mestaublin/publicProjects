
#include <stdlib.h>
#include <math.h>
char *to_roman_numeral(unsigned int number)
{
    char * romanNumeral = calloc(number, sizeof(char) * number);
    int snum = (int)number;
    int counter = 0; 


    while (snum >= 1000) {
        romanNumeral[counter++] = 'M';
        snum -= 1000;
        }  

    while (snum < 1000 && snum >= 100){
        if (snum/100 == 9) {
           romanNumeral[counter++] = 'C';
            romanNumeral[counter++] = 'M'; 
            snum -= 900;
        } else if (snum/100 == 4) {
           romanNumeral[counter++] = 'C';
            romanNumeral[counter++] = 'D';
            snum -= 400;
        } else {
            while (snum/100 >= 5) {
              romanNumeral[counter++] = 'D';
                snum -= 500;
            } while (snum >= 100) {
            romanNumeral[counter++] = 'C';
             snum -= 100;
            }  
        }
    }
    
    while (snum < 100 && snum >= 10){
        if (snum/10 == 9) {
           romanNumeral[counter++] = 'X';
            romanNumeral[counter++] = 'C'; 
            snum -= 90;
        } else if (snum/10 == 4) {
           romanNumeral[counter++] = 'X';
            romanNumeral[counter++] = 'L';
            snum -= 40;
        } else {
            while (snum/10 >= 5) {
              romanNumeral[counter++] = 'L';
                snum -= 50;
            } while (snum >= 10) {
            romanNumeral[counter++] = 'X';
             snum -= 10;
            }  
        }
    } 

    while (snum%10 > 0) {
        if (snum == 9 ){
            romanNumeral[counter++] = 'I';
            romanNumeral[counter++] = 'X';
            snum -= 9;
        } else if  (snum == 4){
            romanNumeral[counter++] = 'I';
            romanNumeral[counter++] = 'V';
            snum -= 4;
        } else {
            while (snum >= 5) {
               romanNumeral[counter++] = 'V';
               snum -= 5; 
            } while (snum > 0) {
                romanNumeral[counter++] = 'I';
               snum -= 1; 
            }
        }    
    }

    return romanNumeral;
}