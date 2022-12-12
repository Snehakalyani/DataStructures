#include<stdio.h>
#include<stdlib.h>

struct treenode{
    int data;                 //value of the node
    struct treenode* left;    //pointer to the left child
    struct treenode* right;   //pointer to the right child
};

struct treenode* root = NULL; //initializing a root pointer which points to nothing

// Function to create a new node with the given data
struct treenode* createNode(int data)
{
   struct treenode* temp = (struct treenode*)malloc(sizeof(struct treenode)); //allocating mem for temp
                                                              //it points to this certain address now, basically points to the node

    temp->data = data;                
    temp->left = NULL;              
    temp->right = NULL;
    return temp;
}
void insertnode(struct treenode* root, int data)
{
    if (data < root->data) // if data is less than the current node's data
    {
        if (root->left == NULL) // if the left subtree is empty
        {
            root->left = createNode(data); // create a new node and insert the data
        }
        else // if the left subtree is not empty
        {
            insertnode(root->left, data); // recursively insert the data in the left subtree
        }
    }
    else if (data > root->data) // if data is greater than the current node's data
    {
        if (root->right == NULL) // if the right subtree is empty
        {
            root->right = createNode(data); // create a new node and insert the data
        }
        else // if the right subtree is not empty
        {
            insertnode(root->right, data); // recursively insert the data in the right subtree
        }
    }
}

// Function to perform in-order traversal of the BST
void inorder(struct treenode *root)
{
    if (root == NULL) return; // if the tree is empty, return
    inorder(root->left); // traverse the left subtree
    printf("%d ", root->data); // visit the root node
    inorder(root->right); // traverse the right subtree
}


int main()
{
    int n, i, data;
    // create the root node
   struct treenode *root = createNode(10);

    // prompt the user to insert data into the BST
    printf("Enter the number of elements you want to insert: ");
    scanf("%d", &n);
    for(i = 1; i<=n; i++)
    {
        printf("Enter data:");
        scanf("%d", &data);
        insertnode(root, data);
    }
    // traverse the BST in-order
    printf("In-order traversal of the BST: ");
    inorder(root);
    printf("\n");
    return 0;
}




