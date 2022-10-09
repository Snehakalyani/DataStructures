#include<stdio.h>
#include<stdlib.h>

int *blah(int val)
{
    int x;
    int *pointer = &x;
    x = val*val;
    return *pointer;

}
int main()
{
    int *b;
    *b = blah(5);
    printf("%d", *b);
    return 0;
}
   