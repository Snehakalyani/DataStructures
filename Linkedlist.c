#include<stdio.h>
#include<stdlib.h>
 
struct nodeType
    {
    int value; //data
    
    struct nodeType *next; //address

    };
    
void MakeList(int n);
void PrintList();
int main()
{
    int n;
    printf("Enter the number of nodes");
    scanf("%d\n", &n);
    MakeList(n);
    printf("Data in the list");
    PrintList();
    return 0;
    
}

//Creating a list of n nodes

void MakeList(int n)
{
   
    int i;
    int value;
    struct nodeType *head; //defining the head of the first node
    
head = (struct nodeType*)malloc(sizeof(struct nodeType*)); //allocating memory for the head of the node

if(head == NULL)
{
    printf("No memory allocated");
    exit(0);
}
printf("Enter Data of node 1: "); //user input value of node 1
scanf("%d\n", &value);

head->value = value ; //putting the value in the value field of node
head->next = NULL; // address field -->Null

while(n>0)
{
    head->next = (struct nodeType*)malloc(sizeof(struct nodeType*));
    head = head->next;
    if (head == NULL)
    {
        printf("No memory allocated");
        exit(0);
    }
    printf("Enter Data of node %d", i);
    scanf("%d\n", &value);
    head-> value = value;
    head->next = NULL;
}
void PrintList();
{
    if(head == NULL)
    {
        printf("There is no list");
        exit(0);
    }
    while(head != NULL)
    {
        printf("Data =%d\n", head->value);
        head->next;
    }

}

}