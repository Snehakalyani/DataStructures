#include<stdio.h>
#include<stdlib.h>

struct treenode{
    int data;               //value of the node
    struct treenode* left;  //pointer to the left child
    struct treenode* right; //pointer to the right child
};

struct treenode* reversebst(int arr[], int start, int stop);
struct treenode* insertnode(int arr[]);
void prefixPrint(struct treenode* root);
void sortarray(int *arr);

struct treenode* root = NULL; //initializing a root pointer which points to nothing


struct treenode* reversebst(int arr[], int start, int stop)
{
    if(start>stop)
    {
        return NULL;
    }
    int mid;
    mid = (start + stop)/2;
    root = insertnode(arr[mid]);
    root->left = reversebst(arr, mid + 1, stop); //
    root->right = reversebst(arr, start, mid - 1);
    return root;
} 


void prefixPrint(struct treenode* root)
{
   if(root == NULL)
   {
    return; 
   }  
   printf("%d", root->data);
   prefixPrint(root->left);
   prefixPrint(root->right);
  
}
void sortarray(int *arr)
{   
    int i, boop, j;
    for(i=1; i<=5; i++) //i = 1, cuz we are comparing the second element to the prev element
    {
      boop = arr[i];    // a temp variable which contains the element to be compared with the prev element
      j = i - 1;        // j is the index of the previous element

      while(j >= 0 && arr[j]> boop) //loop continues till all the elements till index 0 is compared
                                    //loop proceeds if prev element is greater than the element which is compared
      {
        arr[j + 1] = arr[j];        //swaps the lower value to the lower index
        j = j - 1;                  // reduces the index of to be compared in the next iteration
      }
      arr[j + 1] = boop;            //placing the value of boop(the compared value) at its right position, after the loop terminates
                                    
    }
}

struct treenode* insertnode(int arr[])
{ 
    //CREATING A NODE
    int d;
    struct treenode* temp ; //creating a temporary node which holds the data d
    struct treenode* parent;
    temp = (struct treenode*)malloc(sizeof(struct treenode)); //allocating mem for temp
                                                              //it points to this certain address now, basically points to the node

    temp->data = d;                
    temp->left = NULL;              
    temp->right = NULL;
    parent = root;     //first parent of the tree is the root

    if(root == NULL)   //the root points to nothing right now
    {
        root = temp;   //as the root is empty, the tree is empty, so we just give insert temp into root
    }                  
    //now if the root is not empty, a tree exists
    //so we should travserse and find the right location to insert the node we created i.e temp node
    else
    {
        struct treenode *current; //pointer to traverse the tree
        current = root;           //current points to the root now
        while(current)
        {
            parent = current;     //parent gets updated as current is updated
            if(temp-> data > parent -> data)  //if given data greater than parent data
            {
                current = current->left;     //goes to left child node
            }
            else
            {
                current = current->right;      //goes to right child node
            }
            //current points to null now
            //found the parent node where the new node is to be inserted
            //should find where to insert
            //left or right
            if(temp->data > parent->data)
            {
                parent->left = temp;
            }
            else
            {
                parent->right = temp;
            }

            
        }

    }
    
}
int main()
{
    int arr[] = {2, 5, 3, 7, 6};
    sortarray(arr); 
    struct treenode* root = reversebst(arr, 0, 4);
    prefixPrint(root);
    return 0;
}