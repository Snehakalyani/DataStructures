#include<stdio.h>
#include<stdlib.h>

struct queuenode
{
    int val;
    struct queuenode* next;
};

struct queuenode* front = NULL;
struct queuenode* rear = NULL;

void enqueue(int x);                    //function to insert element in the queue
void dequeue(struct queuenode* front);  //function to delete element from the queue

void enqueue(int x)
{
    struct queuenode* temp;
    temp = (struct queuenode*)malloc(sizeof(struct queuenode));
    temp->val = x;
    temp->next = NULL;
    if(front == NULL && rear == NULL)
    {
        front = rear = temp;
    }
    rear->next = temp;
    rear = temp;

}

void dequeue(struct queuenode* temp) 
{
    if (front == NULL) {
        printf("No queue byee");
        return;
    } else {
        temp = front;
        front = front -> next;
        free(temp);
    }
}

void printqueue()
{
   if (front == NULL)     {printf("no queue bye");}
   else
    {
        struct queuenode* temp = front;
        printf("The queue is:");
        while(temp!= NULL)
        {
            printf("\n%d", temp->val);
            temp = temp->next;
        }
            
    }
}

 
int main() 
{
    struct queuenode *head = NULL;
    int x, i, n;
    printf("Enter number of elements in queue: ");
    scanf("%d", &n);
    for(i = 1; i<=n; i++)
    {
        printf("Enter the element to be inserted in the queue: ");
        scanf("%d", &x);
        enqueue(x);
    }
    dequeue(head);
    printqueue();
    return 0;
}
