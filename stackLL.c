#include <stdio.h>
#include <stdlib.h>

struct stacknode
{
    int val;
    struct stacknode* next;
};

typedef struct stacknode* stack;

struct stacknode* top = NULL;


void push(int x)
{
    stack temp;
    temp = (stack) malloc(sizeof(struct stacknode));
    if (temp == NULL)     {printf("stack overflow");}
    temp->val = x;
    temp->next = top;
    top = temp;
}



void printstack()
{
   if (top == NULL)     {printf("stack underflow");}
   else
    {
        struct stacknode* temp = top;
        printf("The stack:");
        while(temp!= NULL)
        {
            printf("\n%d", temp->val);
            temp = temp->next;
        }
            
    }
}
int main() 
{
    int x, i, n;
    printf("Enter number of elements in stack: ");
    scanf("%d", &n);
    for(i = 1; i<=n; i++)
    {
        printf("Enter the element to be pushed: ");
        scanf("%d", &x);
        push(x);
    }
    printstack();
    return 0;
}