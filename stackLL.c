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

 int pop(struct stacknode* temp)
{
    if  (top == NULL)   {printf("stack underflow");}
    else
    {
        struct stacknode* temp =  top;
        int x = top->val;
        top = top->next;
        free(temp);
        return x;
    }
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
    struct stacknode* head = NULL;
    int x, i, n;
    printf("Enter number of elements in stack: ");
    scanf("%d", &n);
    for(i = 1; i<=n; i++)
    {
        printf("Enter the element to be pushed: ");
        scanf("%d", &x);
        push(x);
    }
    pop(head);
    printstack();
    return 0;
}