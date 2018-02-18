/*C program to swap two bits of a byte.*/

    #include <stdio.h>

    int main()
    {
	    unsigned char data=0x0A;

	    // swaping 1st bit to 2nd bit (bit counting 7-0).
	    // binary of 0x0A is : 0000 1010

	    data^=(1<<1);
	    data^=(1<<2);

	    // data will be : 0000 1100 (0x0C)
	    printf("\ndata after swap bits : %02X",data);

	    return 0;
    }
