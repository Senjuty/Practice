#include<stdio.h>


int addition=0, sub = 0, multi = 0, div = 0;

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

int division(int x, int y)
{
	int z= x/y;
	div++;
	return z;
}

void if_statement()
{
	if(add(5,4)< 20)
		{
			add(10,3);
		}
		else
		{
			substract(10,3);
		}

}

void nested_if()
{
	int z;

	if(z<20)
	{
		add(10,3);
	}
	else if(z<10)
	{
		substract(12,4);
	}
	else
	{
		multiply();
	}


}

void switch_case()
{
	char Num;


	switch(Num) {
	  case 'a' :
		 add(2,3);
		 break;
	  case 'b' :
		  substract(10,5);
		  break;
	  case 'c' :
		 multiply();
		 break;
	  default :
		 division(10,5);




	}

}

void goto_test()
{
    int z= 0;

    goto adding;

    adding:
        z = add(1,3);

}

int main()
{
    goto_test();
	if_statement();
	nested_if();
	switch_case();


	return 0;
}





