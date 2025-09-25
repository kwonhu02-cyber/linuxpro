#include <stdio.h>
int func(int a, int b)
{
	int c;
	c = (a++)+(++b);
#ifdef DEBUG
	printf("a=%d b=%d c=%d\n", a,b,c);
#endif
}
int main()
{
	int i, j;
#ifdef DEBUG
	printf("i=%d, j=%d\n", i, j);
#endif
	i = 5, j = 8;
	printf("result = %d\n", func(i,j));
	return 0;
}
