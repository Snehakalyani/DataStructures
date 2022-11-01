#include<stdio.h>
#include<stdlib.h>
typedef struct nodeType
    {
        int value; //data
        struct nodeType *next; //address(pointer to the next node)
    }*node;
    
void MakeList(int n);
void PrintList();
void reverselist();

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

void reverselist()
{
    //Intitialising 3 pointers
//prev, current, and next respectively
node head;
int *prev;
int *next;
node *current;
prev = NULL;
next = NULL;
current = head; //current pointer is at the first element

//iterating thorugh the linked list
//steps to reverse the loop

while(current != NULL) //stops the loop when the last element( or node) is reached. i.e the current pointer is null
{
    next = current-> next; //the next pointer goes to the second element
    current->next = prev;  // the link between 1st and 2nd element is reversed and now it points towards null
    prev = current;        // prev pointers jumps to the first element from null
    current = next;        // the second element becomes the current element
}

//loop continues till the entire linked list is reversed
head = prev;

}
