// C Program to demonstrate use of bitwise operators
#include <stdio.h>

long int_bin(int a);
int main()
{
	// a = 5(00000101), b = 9(00001001)
	unsigned char a = 5, b = 9;

	// The result is 00000001

	printf("a = %d, b = %d\n", a, b);
    long c = int_bin(a);
    /*
    printf("THIS IS RETURN : %ld\n" , c);
    // 

    * result AND is 1 if both are bits is 1
	printf("a&b = %d\n", a & b);

    * result OR is 1 if only 1 is 1
	// The result is 00001101
	printf("a|b = %d\n", a | b);

	// The result is 00001100
    * result XOR is 1 if different
	printf("a^b = %d\n", a ^ b);

	// The result is 11111010
    * result LEFT SHIFT is 
	printf("~a = %d\n", a = ~a);

	// The result is 00010010
    * result RIGHT SHIFT is
	printf("b<<1 = %d\n", b << 1);

	// The result is 00000100
	printf("b>>1 = %d\n", b >> 1);
    */
	return 0;
	
}
long int_bin(int value){
    long bno=0 ; 
    long rem ; 
    long f=1;

    while (value != 0 )
    {
        /*
          EXAMPlE

          5
            1
            0 + 1 * 1 = 1
            1 * 10 = 10
            5 / 2 = 2.5 
        
          2.5 
            o.5
            1 + 0.5 * 10 = 6

        */
        
        rem = value % 2;
        printf("%ld\n" , rem);
        bno = bno + rem * f;
        printf("%ld\n" , bno);
        f = f * 10;
        printf("%ld\n" ,f);
        value = value/2;
        printf("%d\n" , value);
        printf("-----------------------\n");
    }
    return bno;
}