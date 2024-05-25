#include <stdio.h>
#include <stdlib.h>

int main()
{
   int D,Q,R;

   printf("Enter The Dividend, Quotient And Remainder (D <= 4000, Q < 100, R < 20): ");
   scanf("%d %d %d",&D,&Q,&R);

   if(D<=4000 && Q<100 && R<20){
    int divisor=(D-R)/Q;
       printf("The divisor is: %d\n", divisor);
    } else {
       printf("Invalid input. Please make sure D <= 4000, Q < 100, and R < 20.\n");
    }
    return 0;
}
