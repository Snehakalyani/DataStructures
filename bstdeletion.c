//deleting a node with no children

//in order to delete the last node of a bst, we have to traverse till its parent
//(code for traversal in bst insertion)
//then check if the node to be deleted is its right or left child

//let current be the pointer traversing the list
//current should traverse and point the node to be deleted

if(current == parent->right) //if the node to be deleted is the right child of the parent node
{
    parent ->right = NULL;   //make the parent's right child null
                             //i.e disconnect the link bw parent and the right child 
    
}
else
{
    parent ->left = NULL;   //same thing is the node is a left child
}
free(current);

//deleting a node having a single child

//4 cases
//right to the parent, has a right child
//right to the parent, has a left child
//left to the parent, has a left child
//left to the parent, has a right child

//1
if(current == parent->right)
{
    if(current->right != NULL)
    {
        parent->right = current-> right;
    }
}
current->right =NULL;
free(current);

//2
if(current == parent->right)
{
    if(current->left != NULL)
    {
        parent->right = current-> left;
    }
}
current->left =NULL;
free(current);

//3
if(current == parent->left)
{
    if(current->left != NULL)
    {
        parent->left = current-> left;
    }
}
current->left =NULL;
free(current);

//4
if(current == parent->left)
{
    if(current->right != NULL)
    {
        parent->left = current-> right;
    }
}
current->right =NULL;
free(current);

//deleting a node with 2 children

//we cannot simple delete the node, we have to know what to replace it with
//2 ways to do this replacement
//either we can replace the node with the highest node in the left child sub-tree
//or we can replace the node with the least node in the right child sub-tree

//taking the 2nd option here
//replacing the node with the least node in the right child sub-tree

//CASE 1: the right sub-tree has only node
//therefore the min node of right sub-tree is the right node itself

if(current->left != NULL && current->left != NULL) //conditon for a node having 2 children
{
    struct node* t; //pointer to traverse through the sub-tree
    t = current->right;
    if(t->right == NULL && t->left == NULL) //checking Case 1 condition
    {
        current->data = t->data;
        current->right =NULL;
        free(t);
    }
    if(t->right == NULL && t->left = NULL)
    {
        current->data = t->data;
        current->right = t->right;
        t->right = NULL;
        free(t);
    
    }
}
