#include <stdio.h>

int main() {
  int *ptr;
  {
    int x = 10;
    ptr = &x;
    *ptr = 20;
    printf("x: %d\n", x); 
  }
  //Here ptr is no longer a dangling pointer because x is allocated dynamically. 
  //In this case, it's important to free the allocated memory after use to prevent memory leaks using free(ptr). 
  // Note: if you do this, you must then set ptr to NULL after calling free(). 
  
  free(ptr);
  ptr = NULL;
  return 0;
}