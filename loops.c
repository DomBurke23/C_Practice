/* Print numbers from 1 to 10 */ 
#include <stdio.h>

void exampleOne()
{
	// print 1 to 10 
	int i;
	for (i = 1; i < 11; ++i)
	{
		printf("%d ", i);
	} 
}

void exampleTwo()
{
	int num, count, sum = 0; 
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    // for loop terminates when num is less than count
    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }
    printf("Sum = %d", sum); 
}  

int exampleThree()
{
   int i;
   int flag = 10;  
   int end = 0; 
   for (i=1; (i<=3) && (flag>1); i++)
   {
       printf("%d\n", i);
   }
   int ii;
   for (ii=1; ii < 10 || !end; ii++)
   {
       printf("%d\n", ii);
	   end = 1; 
   }
   return 0;
}

void pr18536 () {
	int i = 0;
	short x [16];
	while ( ++ i < 4 ) {
		printf("\ni = %d",i);
		if ( x [ i - 1 ] != 2 ) {
			printf("\ni inside if = %d", i);
		}
	}	
}

int main() {
  	exampleOne();
  	exampleTwo();
	exampleThree();
	pr18536();
	return 0; 
}
