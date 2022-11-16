#include<stdio.h>
#include<stdlib.h>

struct treenode{
    int data;               //value of the node
    struct treenode* left;  //pointer to the left child
    struct treenode* right; //pointer to the right child
};

struct treenode* reversebst(int arr[], int start, int stop);
struct treenode* insertnode(int d);
void prefixPrint(struct treenode* root);
void sortarray(int arr, int n);

struct treenode* root; //initializing a root pointer which points to nothing


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


void prefixPrint(struct treenode* temp)
{
   if(temp == NULL)
   {
    return; 
   }  
   printf("%d", temp->data);
   prefixPrint(temp->left);
   prefixPrint(temp->right);
  
}
void sortarray(int arr, int n)
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
    return arr[];
}

struct treenode* insertnode(int d)
{ 
    //CREATING A NODE
    
    struct treenode* temp ; //creating a temporary node which holds the data d
    struct treenode* parent;
    temp = (struct treenode*)malloc(sizeof(struct treenode)); //allocating mem for temp
                                                              //it points to this certain address now, basically points to the node

    temp->data = d;                
    temp->left = NULL;              
    temp->right = NULL;
    return temp;
    }
    

int main()
{
    int arr[] = {2, 5, 3, 7, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sarr[] = sortarray(arr, n); 
    struct treenode* root = reversebst(arr, 0, 4);
    prefixPrint(root);
    return 0;
}