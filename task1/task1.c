#include <ctype.h>
#include <string.h>
#include "task1.h"

// run in terminal using
// gcc -Wall -std=c99 -pedantic task.c task1_tests.c
// ./a.out

void str_lower(char *orig, char *copy) {
    for (size_t i = 0; i < strlen(orig); i++){
        copy[i] = tolower((unsigned char)orig[i]);
    }
    orig[strlen(orig)] = '\0';
}

void str_lower_mutate(char *orig){
    for (size_t i = 0; i < strlen(orig); i++) {
        orig[i] = tolower((unsigned char)orig[i]);
    }
}