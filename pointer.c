#include <stdio.h>

void main()
{
	int a=25,*b;
	printf("the value is %d",a);
	printf("\n the adddress is %x", &a);
	b=&a;
	printf("\n %x",b);
}
	