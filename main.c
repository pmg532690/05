#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x,y;
    
    char op;
    
    int result;
    
    printf("enter the calculation:");
    scanf("%i%c%i",&x, &op, &y);
    
    switch (op)
    {
           case '+':
                result = x + y;
                break;
           case '-':
                result = x - y;
                break;
           case '*':
                result = x * y;
                break;
           case '/':
                result = x / y;
                break;
    }
    printf(" = %i\n", result);
       
  system("PAUSE");	
  return 0;
}
