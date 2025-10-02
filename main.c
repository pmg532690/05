#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    printf("Input an integar:");
    scanf("%d", &x);
    
    if ( x > 0 )
       printf("절댓값은 %i 입니다.\n", x);
       
    else 
       printf("절댓값은 %d 입니다.\n", -x);
       
  system("PAUSE");	
  return 0;
}
