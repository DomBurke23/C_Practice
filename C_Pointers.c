#include <stdio.h>
const int MAX = 3;
	
int exampleOne()
{
   printf("Entered exampleOne() \n");
   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */
   ip = &var;  /* store address of var in pointer variable*/
   printf("Address of var variable: %x\n", &var  );
   /* address stored in pointer variable */
   printf("Address stored in ip variable: %x\n", ip );
   /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip );
   return 0;
}

/* Null Pointer */ 
int exampleTwo()
{
   printf("\nEntered exampleTwo() \n");
   int  *ptr = NULL; 
   printf("The value of ptr is : %x\n", ptr  );
   return 0;
}

/* Incrementing a Pointer */ 
int exampleThree()
{
   printf("\nEntered exampleThree() \n");
   int  var[] = {10, 100, 200};
   int  i, *ptr;

   /* let us have array address in pointer */
   ptr = var;
	
   for ( i = 0; i < MAX; i++) 
   {
      printf("Address of var[%d] = %x\n", i, ptr );
      printf("Value of var[%d] = %d\n", i, *ptr );
      /* move to the next location */
      ptr++;
   }
   return 0;
}

/* Decrementing a Pointer */ 
int exampleFour()
{
   printf("\nEntered exampleFour() \n");
	int var[] = {10, 100, 200};
   int  i, *ptr;
   /* let us have array address in pointer */
   ptr = &var[MAX-1];
	
   for ( i = MAX; i > 0; i--) 
   {
      printf("Address of var[%d] = %x\n", i-1, ptr );
      printf("Value of var[%d] = %d\n", i-1, *ptr );
      /* move to the previous location */
      ptr--;
   }
   return 0;
}

/* Pointer Comparisons */ 
int exampleFive()
{
   printf("\nEntered exampleFive() \n");
	int  var[] = {10, 100, 200};
   int  i, *ptr;
   /* let us have address of the first element in pointer */
   ptr = var;
   i = 0;
	
   while ( ptr <= &var[MAX - 1] ) 
   {
      printf("Address of var[%d] = %x\n", i, ptr );
      printf("Value of var[%d] = %d\n", i, *ptr );

      /* point to the next location */
      ptr++;
      i++;
   }
   return 0;
}

int main() {
	exampleOne();
	exampleTwo();
	exampleThree();
	exampleFour(); 
	exampleFive(); 
}