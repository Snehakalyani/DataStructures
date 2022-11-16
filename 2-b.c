#include<stdio.h>
#include<stdlib.h>
struct NodeAddress
{
    int val; //data
    struct NodeAddress *next; 
    struct NodeAddress *next2;
};
struct NodeAddress *head = NULL;

void arrayToLLWithNext2(int *a, int n)
{
    struct NodeAddress *newnode;
    struct NodeAddress *current;
    struct NodeAddress *prev1;
    struct NodeAddress *prev2;
    head = (struct NodeAddress *)malloc(sizeof(struct NodeAddress));
    head->val = a[0];
    prev1= (struct NodeAddress *)malloc(sizeof(struct NodeAddress));
    head->next= prev1;
    head->next2 = NULL;
    prev1->val= a[1];
    prev1->next= NULL;
    prev1->next2= NULL;
    prev2=head;

    int i;
    for(i = 2; i< n; i++)
    {
        newnode = (struct NodeAddress *)malloc(sizeof(struct NodeAddress));
        newnode->val = a[i];
        newnode->next = NULL;
        newnode->next2 = NULL;
        prev1->next=newnode;
        prev2->next2=newnode;
        prev2= prev1;
        prev1=newnode;
    }
}

void reverseLLWithNext2()
{
    struct NodeAddress *p;
    struct NodeAddress *q;
    int i, j, len, temp, k;
    len = length();
    i = 0;
    j = len - 1;
    p = q = head; //root points to the first node

    while(i < j)
    {
        k = 0;

        while(k < j)
        {
            q = q->next;
            k++;
        }
        temp = p->val;
        p->val = q->val;
        q->val =temp;
        i++;
        j--;
        p = p->next;
        q = head;
    }
}

int length()
{
    int count = 0;
    struct NodeAddress* blah;
    blah = head;
    while(blah!=NULL)
    {
        count++;
        blah = blah->next;
    }
    return count;
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
        current = head;         //head is the current node
        while(current != NULL)  //loop stops when it reaches the end of the list i.e no more nodes
        {
            printf("%d ", current->val);
            current = current->next;//current updates and points to the next node
        }
        
    }
    
}
void main()  
{  
   //prog to user input array 
    int k;
    int n;
    printf("Enter the Size of array: ");  
    scanf("%d", &n);
    int a[n];
    for(k=0; k<n; k++)  
        {  
            printf("Enter element %d : ",k + 1);
            scanf("%d", &a[k]);  
        }  
    //printing the array  
    printf("\nThe array is: ");
    for(k=0; k<n; k++)  
        {  
            printf("%d ", a[k]);  
        }

    arrayToLLWithNext2(a, n);
    printf("\nData in the list: "); 
    PrintList();    //prints the elements of the list
    reverseLLWithNext2();
    printf("\nReversed List: ");
    PrintList();
    
}