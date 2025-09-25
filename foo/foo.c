#include <stdio.h>
int main()
{
	unsigned int x = 1;
	int y = -2;
	if(y<x) x+=2;
	else x+=1;
	printf("x=%d\n", x);
}
