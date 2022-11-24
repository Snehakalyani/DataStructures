#include<stdio.h>
#include<stdlib.h>
 
struct NodeAddress
{
    int data;
    struct NodeAddress* next;
};
struct NodeAddress *head;
void MakeList(int n);
void PrintList();
struct NodeAddress *reverseLL(struct NodeAddress *head, int k);
 
/* Reverses the linked list in groups of size k and returns the
   pointer to the new head node. */
struct NodeAddress *reverseLL (struct NodeAddress *head, int k)
{
    if (!head)
        return NULL;
   
    struct NodeAddress* current = head;
    struct NodeAddress* next = NULL;
    struct NodeAddress* prev = NULL;
    int count = 0;
   
    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
     
    /* next is now a pointer to (k+1)th node
       Recursively call for the list starting from current.
       And make rest of the list as next of first node */
    if (next !=  NULL)
       head->next = reverseLL(next, k);
 
    /* prev is new head of the input list */
    return prev;
}

void MakeList(int n) //function to create a linked list
{
    struct NodeAddress *newnode, *current; //initializing two pointers
    int data, i;
    head = (struct NodeAddress *)malloc(sizeof(struct NodeAddress)); //allocating memory for the first node aka head
    
    if(head == NULL)
    {
        printf("No memory allocated");
    }
    else
    {
        printf("Enter Data of node 1: "); //user input data of node i
        scanf("%d", &data);
        head->data = data ; //putting the data in the data field of node
        head->next =  NULL; // the address field is null
        current = head; //current node is the head i.e current pointer points to the head 


    for(i = 2; i <= n; i ++) //for loop for creating n nodes for the linked list
    {
        newnode = (struct NodeAddress *)malloc(sizeof(struct NodeAddress)); //allocating memory for the a newnode node
        if(newnode == NULL)
        {
            printf("No memory allocated");
        }
        else
        {
    
            printf("Enter Data of node %d: ", i); //user input data of node i
            scanf("%d", &data);
            newnode->data = data; //putting the data in the data field of node
            newnode->next = NULL;   // the address field is null
            current->next = newnode; //the current pointer points to newnode now
            current = current->next;//updating the current from head to newnode, i.r current node is the newnode
    
        }
    }
    }
 
       
}

void PrintList()
{
    struct NodeAddress *current;
    if(head == NULL)//if head of the list is empty 
    {
            printf("list is empty"); 
    }
    else
    {
        current = head; //head is the current node
        while(current != NULL) //loop stops when it reaches the end of the list i.e no more nodes
        {
            printf("%d  ", current->data);
            current = current->next;//current updates and points to the next node
        }
        
    }
    
}


int main()
{
    int n,k;
    printf("Enter Size of Linked list: ");//promts the user to enter the size(nodes) of the list
    scanf("%d", &n);
    MakeList(n);
    printf("\n List: "); 
    PrintList();    //prints the elements of the list
    printf("Enter the chunk size:");
    scanf("%d", &k);
    reverseLL(head, k);
    printf("\n Chunk Reversed List: ");
    PrintList();
    return 0;
    
}