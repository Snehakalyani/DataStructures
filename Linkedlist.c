#include<stdio.h>
#include<stdlib.h>
 struct nodeType
    {
        int value; //data
        struct nodeType *next; //address(pointer to the next node)
    }*head;
    
void MakeList(int n);
void PrintList();

void MakeList(int n) //function to create a linked list
{
    
struct nodeType *newnode, *current; //initializing two pointers
int value, i;
head = (struct nodeType *)malloc(sizeof(struct nodeType)); //allocating memory for the first node aka head
   
    if(head == NULL)
        {
            printf("No memory allocated");
        }
else
    {
    
    printf("Enter Data of node 1: "); //user input value of node i
    scanf("%d", &value);
    head->value = value ; //putting the value in the value field of node
    head->next =  NULL; // the address field is null
    current = head; //current node is the head i.e current pointer points to the head 


    for(i = 2; i <= n; i ++) //for loop for creating n nodes for the linked list
        {
            newnode = (struct nodeType *)malloc(sizeof(struct nodeType)); //allocating memory for the a newnode node
            if(newnode == NULL)
                {
                    printf("No memory allocated");
                    
                }
            else
            {
    
                printf("Enter Data of node %d: ", i); //user input value of node i
                scanf("%d", &value);
                newnode->value = value; //putting the value in the value field of node
                newnode->next = NULL;   // the address field is null
                current->next = newnode; //the current pointer points to newnode now
                current = current->next;//updating the current from head to newnode, i.r current node is the newnode
    
            }
        }
    }
 
       
}

void PrintList()
{
    struct nodeType *current;
    if(head == NULL)//if head of the list is empty 
        {
            printf("list is empty"); 
        }
    else
        {
            current = head; //head is the current node
            while(current != NULL) //loop stops when it reaches the end of the list i.e no more nodes
                {
                    printf("Data = %d\n", current->value);
                    current = current->next;//current updates and points to the next node
                }
        
        }
    
}

int main()
{
    int n;
    printf("Enter Size of Linked list: ");//promts the user to enter the size(nodes) of the list
    scanf("%d", &n);
    MakeList(n);
    printf("\n Data in the list: \n"); 
    PrintList();    //prints the elements of the list
    return 0;
    
}