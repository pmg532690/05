#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int answer = 59;
    int num;
    int trial = 0;
    
    do
    {
          printf("Guess a number :");
          scanf("%d",&num);
          
          if (num > answer)
             printf("high!\n");
          else if (num < answer)
               printf("low!\n");
          trial += 1;
    }

    while ( num != answer);
          printf("Congratulation! trials: %i\n", trial);
          
       
  system("PAUSE");	
  return 0;
}
