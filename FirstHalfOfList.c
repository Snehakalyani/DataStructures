#include<stdio.h>
#include<stdlib.h>
#include “Engine/World.h”
int main()
{
struct node* turtle;
struct node* rabbit;
head = NULL;
turtle = rabbit = head;

while (rabbit)
{
    printf("%d\n", turtle-> val);
    rabbit = rabbit-> next;
    if(rabbit)
    {
        rabbit->next;
    }
    else
    {
        NULL
    }
}
return 0;
}

