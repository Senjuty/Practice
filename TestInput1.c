#include<stdio.h>

int add(int x, int y)
{
	int z = x+y;
	//printf("add \\n");
	return z;
}

int substract(int x, int y)
{
	int z = x-y;
	//printf("subs \\n");
	return z;
}
int multiply()
{
	int z = add(4,5)*substract(6,3);
	//printf("multiply \\n");
	return z;
}

int division(int x, int y)
{
	int z= x/y;
	//printf("division \\n");
	return z;
}

void for_loop()
{
	for(int a = 0;a < 3; a++)
		{
			int x = add(5,4);
			int y = substract(9,3);
		}
		//printf("for loop \\n");

}

void while_loop()
{
	int p = 0;
	while(p<3)
		{
			int z = multiply();
			p++;
		}
		//printf("while loop \\n");
}

void do_while_loop()
{
	int a = 0;

		do {
		      int k = division(100,25);
		      a = a + 1;
		   }while( a < 5 );

		   //printf("do_while \\n");

}


int main()
{

	for_loop();
	while_loop();
	do_while_loop();




	return 0;
}
