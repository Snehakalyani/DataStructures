#include <stdio.h>

int main() 
{
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);
    basicFizzBuzz(x);
    
    return 0;
}
void basicFizzBuzz(int x)
{
    if(x%33==0|| x%39 == 0|| x%55 == 0 ||x%65==0)
    {
        printf("fizzbuzz");
    }
    else if(x%3 == 0 || x%5==0)
    {
        printf("fizz");
    } 
    else if(x%13==0 || x%11==0)
    {
        printf("buzz");
    }

    else
    {
        printf("%d", x);
    }
    
}