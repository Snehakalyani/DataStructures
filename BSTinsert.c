#include<stdio.h>

struct treenode{
    int data;               //value of the node
    struct treenode* left;  //pointer to the left child
    struct treenode* right; //pointer to the right child
};

struct treenode* root = NULL; //initializing a root pointer which points to nothing

void insertnode()
{ 
    //CREATING A NODE
    int d;
    struct treenode* temp, parent; //creating a temporary node which holds the data d
    temp = (struct treenode*)malloc(sizeof (struct treenode)); //allocating mem for temp
                                                               //it points to this certain address now

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
            parent = current      //parent gets updated as current is updated
            if(temp-> data > parent -> data)  //if given data greater than parent data
            {
                current ->current->right;     //goes to right child node
            }
            else
            {
                current ->current->left;      //goes to left child node
            }
            //current points to null now
            //found the parent node where the new node is to be inserted
            //should find where to insert
            //left or right
            if(temp->data > parent->data)
            {
                parent->right = temp;
            }
            else
            {
                parent->left = temp;
            }

            
        }

    }
    
}