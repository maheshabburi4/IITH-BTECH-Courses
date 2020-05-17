#include <stdio.h>
int main(void) {
  int N,iniBal,X,finBal;//representing N,initial Balance,Numeric value from user,final Balance respectively
  char a;//for the operation storing
  scanf("%d",&N);
  if(N<1)//if N<1 this is an invalid input
    printf("Please enter a valid value for N.");
  else{
    scanf("%d",&iniBal);
    if(iniBal<0)//as initialBalance should not be less than 0
      printf("Please enter a valid value for initial Balance");
    else{
      finBal=iniBal;
      for(int j=0;j<N;j++){
        scanf("\n%c",&a);//taking the operation to be performed from user
        switch(a){
          case 'w':
            scanf("%d",&X);
            printf("WithdrawAmount\n");
            finBal=finBal-X;
            if(finBal>=0)
            	printf("Success\n");
            else{
                finBal=finBal+X;//we shouldn't change the final balance if it is an invalid input. So restoring to previous value
                printf("Error\n");
            }
            break;

          case 'a':
            scanf("%d",&X);
            printf("AddAmount\n");
            finBal=finBal+X;
            printf("Success\n");//as addition will not lead to any of the invalid output unless integer overflow
            break;

          case 'p':
            printf("GetBalance\n");
            printf("%d\n",finBal);
            break;

          default:
            printf("Error\n");//when other than the given operator is entered it shows Error
        }
      }
    }
  }
  return 0;
}