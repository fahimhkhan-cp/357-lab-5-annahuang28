#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array_list.h"

#define INITIAL_CAPACITY 4
#define GROWTH_FACTOR 2

ArrayList *array_list_new(size_t initial_capacity) {
    if (initial_capacity == 0){
        initial_capacity = INITIAL_CAPACITY;
    }
    ArrayList *list = malloc(sizeof(ArrayList));
    if (!list){
        return NULL; // for memory allocation failure
    }

    list->data = malloc(initial_capacity * sizeof(char *));
    if (!list->data){
        free(list); 
        return NULL;
    }
    list->length = 0;
    list->capacity = initial_capacity;
    return list;
}
void array_list_add_to_end(ArrayList *list, char *string) {
    if (list->length >= list->capacity) {
        size_t new_capacity = list->capacity * GROWTH_FACTOR;
        char **new_data = realloc(list->data, new_capacity * sizeof(char *));
        if (!new_data) {
            return; // for allocation failure
        }
        list->data = new_data;
        list->capacity = new_capacity;
    }
    list->data[list->length] = strdup(string); // duplicate the string
    list->length++;
}
