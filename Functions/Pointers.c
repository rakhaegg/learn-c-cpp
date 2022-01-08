#include <stdio.h>

void test(int k);
int main() {
    int num;
    printf("Enter a number: ");

    scanf("%d", &num);

    printf("%d", num);


    printf("The Address of i %x \n " , &num);
    test(num);
    printf("The Address of i %x \n " , &num);
    test(num);
    
	return 0;
}

void test(int k ){
    printf("The address of k is %x\n", &k);
}