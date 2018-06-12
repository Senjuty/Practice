#include <stdio.h>
int addition=0, sub = 0, multi = 0;

int add(int x, int y)
{
	int z = x+y;
	addition++;
	return z;
}

int substract(int x, int y)
{
	int z = x-y;
	sub++;
	return z;
}
int multiply()
{
	int z = add(4,5)*substract(6,3);
	multi++;
	return z;
}

void nested_for_loop()
{
	for(int a = 0;a < 3; a++)		//-----------------------nested for loop
		{
			for(int b=0;b< 5; b++)
			{
				int x = add(5,4);
				int y = substract(10,4);
			}
		}

		//printf("for loop \\n");

}

void nested_while_loop()
{
	int i=0,j;

		while(i<3)						//----------------------------nested while
			{
				j=0;
				while(j<4)
				{
					int z = multiply();
					j++;
				}
				i++;
			}
			//printf("while loop \\n");

}

void nested_do_while_loop()
{
	int a=0,b;

		do {							//----------------------------nested do while
		   add(3,4);
		   a++;
		   b=0;
		   do {
		      multiply();
		      b++;
		   }while( b<3 );

		}while( a<4 );

		  //printf("do_while \\n");

}

int main()
{
	nested_for_loop();
	nested_while_loop();
	nested_do_while_loop();
	//printf("%d\n", addition);
	//printf("%d\n",sub);
	//printf("%d\n", multi);
	return 0;
}
