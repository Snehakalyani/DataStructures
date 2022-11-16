#include<stdio.h>
#include<stdlib.h>

void QuickSort();
int partition();
void swap();

void QuickSort(int *arr, int lower, int upper)
{
    
    int p = partition(arr, 0, n-1);  //p is the correct(sorted location) of the pivot element--explained below
    QuickSort(arr, lower, p);              //sorting the lesser pile--elements less than the pivot
    QuickSort(arr, p + 1, upper);  
    if(lower >= upper) return;        //sorting the greater pile--elements greater than the pivot
}

int partition(int *arr, int lower, int upper)
{
    int pivot,i,j; //pivot is a random element whose correct position we are gonna find
    int n;
    lower = 0;     //first position of the array
    upper = n-1;   //last positon of the array
    i = lower;     //i  is now the index of the first element
    j = upper;     //j is now the index of the last element
    pivot = arr[lower]; //pivot = first element of array

    while(i < j)
    {
        while(arr[i]<= pivot) //if ith element is less than pivot
        {
        i = i ++;             //increment i, it compares the next element
        }
        while(arr[j]> pivot) //if jth element is greater than pivot
        {
            j = j--;         //decrement j, it compares the next element
        }
        if(i<j)
        {
            
            
            swap(&arr[i], &arr[j]);
            //swapping the position of ith and jth element
            // when the ith element is greater than the jth element 
            //and i is less than j
            

        }

    }
        //swapping the position of pivot and jth element
        // when the ith element is greater than the jth element 
        //and i is greater than j
      swap(pivot, &arr[j]);

        return j;

    
}
void swap(int *p, int *q)
{
   int temp = *p;
    *p = *q;
    *q = temp; 
    
}

void main()  
{  
   //prog to user input array 
    int k;
    int n;
    printf("Enter the Size of array: ");  
    scanf("%d", &n);
    int arr[n];
    for(k=0; k<n; k++)  
        {  
            printf("Enter element %d : ",k + 1);
            scanf("%d", &arr[k]);  
        }  
    //printing the array  
    printf("\nThe array is: ");
    for(k=0; k<n; k++)  
        {  
            printf("%d ", arr[k]);  
        }
    //printing the sorted array     
    printf("\nThe sorted array is: ");
    QuickSort(arr, 0, n-1);
    for(k=0; k<n; k++)  
        {  
            printf("%d ", arr[k]);  
        }     
}