#include <stdio.h>

int main(void)
{
	int n = 98;
	int *p = &n;
	

       printf("%p = value of what p holds\n", p);	
	(*p)++;
	printf("%p = address of n\n", &n);
       printf("%p = value of what p holds\n", p);	
	printf("%d\n", *p);
	return (*p);
}
