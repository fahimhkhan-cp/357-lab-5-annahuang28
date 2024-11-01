#include "checkit.h"
#include "task1.h"

void test1() {
   char input[] = "Hello THERE";
   char result[15];
   char *expected = "hello there";

   str_lower(input, result);

   checkit_string(result, expected);
}

void test_str_mutate(){
   char input[] = "tHiS IS TeStInG";
   str_lower_mutate(input);

   checkit_string("this is testing", input);

}

int main(void) {
   test1();
   test_str_mutate();
   return 0;
}
