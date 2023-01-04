#include<stdio.h>

#define P printf
#define S scanf

main()
{
	char a;
	

	P("Enter Charecter = ");
	S("%c",&a);

	if(a >= 'A'  &&  a <= 'Z'  ||  a >= 'a'  &&  a <= 'z' )
	{
		P("%c is alphabet.",a);

	}
	else if(a >= '0'  &&  a <= '9')
	{
		P("%c is digit.",a);
	}
	else
	{
		P("%c is special character.",a);
	}

	

}
