#include "checkit.h"
#include "array_list.h"

// write a test that shows array list implementation works as intended 
// must include one test case that forces a resize of the underlying array

void test1() {
    ArrayList *list = array_list_new(2);
    if (!list) {
        fprintf(stderr, "failed to create array list");
        return;
    }

    // adding elements test
    array_list_add_to_end(list, "First");
    array_list_add_to_end(list, "Second");

    // check length and capacity before resize
    if (list->length == 2 && list->capacity ==2) {
        printf("Passed\n");
    } else {
        printf("failed");
    }

    // forcing a resize
    array_list_add_to_end(list, "Third");

    // check length and capacity before resize
    if (list->length == 3 && list->capacity ==4) {
        printf("Passed after resizing\n");
    } else {
        printf("failed");
    }

    // check the stored values
    if ((strcmp(list->data[0], "First") == 0) && 
        (strcmp(list->data[1], "Second") == 0) && 
        (strcmp(list->data[2], "Third") == 0)) {
        printf("Passed");
    } else {
        printf("failed");
    }

}

int main(void) {
   test1();
   return 0;
}
