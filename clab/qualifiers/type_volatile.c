#include<stdio.h>
/*file.i :-preprocessor performs primary transformations of the source program text using 
		only lexical analysis.
file.o :- raw binary files, which will be processed by linker to produce final executable file
file.s :- source code in assembly level language
	  The files contain assembly instructions to the processor in sequential order
*/

/* used to indicate to the compiler that a variable's value
 may change unexpectedly, so it should not rely on the value being cached 
in a register or optimized away.*/


volatile static int i=10;
void f1() //volatile int i
{
	//gloabal or local static value is 0 assigned 

	volatile static int i; // static which is local stays throughout the program // static int i;
	i=i+20;
	printf("\nf1(i)=%d\n",i);
}
struct check
{
	
	volatile int a:3; 
	//never compresses the volatile size data using bit field
	// try volatile int a
	unsigned int b; //b:5 bit field -idd odd bytes 3 bytes extra padding 

	volatile char c;
};
int main()
{
	printf("size of struct check=%d bytes",sizeof(struct check));
	printf("i=%d",++i);
	f1();
	f1();
	return 0;
}
