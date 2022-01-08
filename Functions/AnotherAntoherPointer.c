#include <stdio.h>

void another_test();
void another_test_2();

int main()
{
    int a[5] = {22, 33, 44, 55, 66};
    int *ptr = NULL;
    int i;

    ptr = a;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    another_test();

    printf("\n");
    
    another_test_2();
}
void another_test()
{
    int a[5] = {22, 33, 44, 55, 66};
    int *ptr = a;
    int res = *(ptr + 2);
    printf("%d", res);
}
void another_test_2(){
    int a[5] = {22, 33, 44, 55, 66};
    int *ptr = NULL;
        
    ptr = a;  /* point to the first array element */
    printf("%d  %x\n", *ptr, ptr);  /* 22 */
    ptr++;
    printf("%d  %x\n", *ptr, ptr);  /* 33 */
    ptr += 3;
    printf("%d  %x\n", *ptr, ptr);  /* 66 */
    ptr--;
    printf("%d  %x\n", *ptr, ptr);  /* 55 */
    ptr -= 2;
    printf("%d  %x\n", *ptr, ptr);  /* 33 */ 
}