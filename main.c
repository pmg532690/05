#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    printf("Input an integar:");
    scanf("%d", &x);
    
    if ( x > 0 )
       printf("������ %i �Դϴ�.\n", x);
       
    else 
       printf("������ %d �Դϴ�.\n", -x);
       
  system("PAUSE");	
  return 0;
}
