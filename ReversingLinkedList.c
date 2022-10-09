#include<stdio.h>
#include<stdlib.h>

//Intitialising 3 pointers
//prev, current, and next respectively

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