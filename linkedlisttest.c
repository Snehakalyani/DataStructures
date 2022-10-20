

#include<stdio.h>
#include<stdlib.h>
typedef struct nodeType
    {
        int value; //data
        struct nodeType *next; //address(pointer to the next node)
    }*node;
    
void MakeList(int n);
void PrintList();

void MakeList(int n)
{
    int value;
    node head = NULL;          //head is the first node
    node *current;
    for(int i = 1; i <= n; i ++)
    {
        
        if (head == NULL)
        {
            head = (node)malloc(sizeof(node)); //allocating memory for the first node
        }
            printf("Enter Data of node %d", i); //user input value of node i
            scanf("%d", &value);
            head->value = value ; //putting the value in the value field of node
            head->next = current; // the next node becomes the head now
       
    }
}
void PrintList()
{
    node head;
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
