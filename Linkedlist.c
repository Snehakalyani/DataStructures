#include<stdio.h>
#include<stdlib.h>
struct nodeType
    {
    int value; //data
    struct nodeType *next; //address(pointer to the next node)
    };
    
void MakeList(int n);
void PrintList();

void MakeList(int n)
{
int i;
int value;
for(i = 1; i < n + 1; i ++)
{
    struct nodeType *head = NULL; //head is the first node
    head = (struct nodeType*)malloc(sizeof(struct nodeType*)); //allocating memory for the first node
    printf("Enter Data of node %d", i); //user input value of node i
    scanf("%d", &value);
    head->value = value ; //putting the value in the value field of node
    head->next = head; // the next node becomes the head now
}
}
void PrintList()
{
    struct nodeType *head;
    while(head != NULL)
    {
    printf("Data= %d", head->value);
    head->next;
    }
}

int main()
{
    int n;
    printf("Enter Size of Linked list");
    scanf("%d", &n);
    MakeList(n);
    printf("Data in the list");
    PrintList();
    return 0;
    
}
