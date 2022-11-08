//given a heap, insert an element in it

#include<stdio.h>

insertelement();
//func to insert element
//n = size of array
//value = element to be inserted
int insertelement(int array[], int n, int value)
{
    n = n + 1;          //adding another index for the new value
    array[n] = value;   //insering the new value to the last index
    int i = n;          //i = size of array
    
while(i > 1)            //loop stops when it reaches the root
    {   
        int parent = i/2;                   //parent = |index of child/ 2|
        if(array[parent]< array[i])         //if parent < i
        {
            swap(parent, i);                //swap indices of parent and i, 
            i = parent;                     //so that i is the parent now
        }
    } 
    return;
}