#ifndef TASK2_H
#define TASK2_H
#include <stddef.h>

typedef struct {
    char **data;
    size_t length;
    size_t capacity;
} ArrayList;

ArrayList *array_list_new(size_t initial_capacity);
void array_list_add_to_end(ArrayList *list, char *string);

#endif
