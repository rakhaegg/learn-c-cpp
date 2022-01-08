#include <stdio.h>


void another_pointer();
int main() {
    int j = 63;
    int *p = NULL;
        printf("p contains address %x\n", p);

    p = &j; 
    
    printf("The address of j is %x\n", &j);

    printf("p contains address %x\n", p);
    printf("The value of j is %d\n", j);
    printf("p is pointing to the value %d\n", *p);
    printf("-----------------------------\n");
    another_pointer();
    /*
    There are several things to notice about this program:
    • Pointers should be initialized to NULL until they are assigned a valid location.
• Pointers can be assigned the address of a variable using the ampersand & sign.
• To see what a pointer is pointing to, use the * again, as in *p. In this case the * is called the indirection or dereference operator. The process is called dereferencing.

    */
}
void another_pointer(){
      int x = 5;
    int y;
    int *p = NULL;
    p = &x;
    
    y = *p + 2; /* y is assigned 7 */
    y += *p;     /* y is assigned 12 */
    *p = y;       /* x is assigned 12 */
    (*p)++;      /* x is incremented to 13 */

    printf("p is pointing to the value %d\n", *p); 
}