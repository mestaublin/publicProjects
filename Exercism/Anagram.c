#include "acronym.h"
#include <stdlib.h>
#include <stdio.h>


char *abbreviate(const char *phrase){
    int i = 0;
    int j = sizeof(phrase);
    char *acro = malloc(sizeof(phrase));
    if (phrase == NULL) {
        return NULL; 
    } else {cd
    while (i <= j){
        if (i == 0) {
            acro[i]=phrase[i];
        } else if (int isspace(int phrase[i])) {
            acro[i]=phrase[i];
            i++;
            
        }
        i++;
    }
        return acro;
        }
    
}

char *abbreviate(const char *phrase){
    if (phrase == NULL || strlen(phrase) == 0) {
        return NULL;}
    bool usenext = true;
    int i = 0;
    int j = 0;
    //const char* acro = phrase;
    char *acro = malloc(sizeof(phrase));
    while (phrase[i] != '\0'){
        if (isalpha(phrase[i]) || usenext) {
        acro[j]=phrase[i];
        usenext = false;
            j++;
        } else if (isspace(phrase[i])) {
        usenext = true;
        }
        i++;
} 
      return acro;  
}