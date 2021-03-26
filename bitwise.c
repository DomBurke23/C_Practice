#include <stdio.h>

int main()
{
	int x=255;
	~x;
	printf("%d\n", x);
	x = ~x;
	printf("%d\n", x);
	x >>=15; 
	printf("%d\n", x);

	
	int y=255;
	~y;
	printf("%d\n", y);
	y=(~4);
	printf("%d\n", y);
	
	int ice1 = (1-2+3*4/2)%3;
	printf("%d\n", ice1);
}
