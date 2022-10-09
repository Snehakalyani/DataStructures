#include <stdio.h>
#include<stdlib.h>

int main(int *p, int *q)
{
    p =10;
    q = 5;
    swap(&p, &q);

}

void swap(int temp, int *p, int *q)
{
    temp = *p;
    *p = *q;
    *q = temp; 
    
}