#include <stdio.h>

void Quicksort(int *arr, int lower, int upper);
int partition(int *arr, int start, int stop);
void swap(int *p, int *q);

void QuickSort(int *arr, int lower, int upper)
{
    if (lower < upper) 
    {
        int p = partition(arr, lower, upper);//p is the correct(sorted location) of the pivot element--explained below
        QuickSort(arr, lower, p - 1);       //sorting the lesser pile--elements less than the pivot
        QuickSort(arr, p + 1, upper);       //sorting the greater pile--elements greater than the pivot
    }
}

// function to find the partition position
int partition(int *arr, int lower, int upper) 
{

int pivot = arr[upper]; //the last element of the array is the pivot
int i = lower - 1; //i points to just before the array, and further used to keep track of the position of the higher element

    //loop to traverse to the array and compare pivot with rest of elements
    for (int j = lower; j < upper; j++) //j is pointing to the first element of the array
    {
        if (arr[j] <= pivot)             //if a element is less than or equal to pivot 
        {                    
        i++;                           //the next element is the greater element now
        swap(&arr[i], &arr[j]);        // swap it with the greater element pointed by i
        }
    }


swap(&arr[i + 1], &arr[upper]); // swap the pivot element with the greater element at i
return (i + 1); //returning the partition index
}


//swap function
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
void main()  
{  
   //prog to user input array
    int k;
    int n;
    printf("Enter the Size of arr: ");  
    scanf("%d", &n);
    int arr[n];
    for(k=0; k<n; k++)  
        {  
            printf("Enter element %d : ",k + 1);
            scanf("%d", &arr[k]);  
        }  
    //printing the arr  
    printf("\nThe arr is: ");
    for(k=0; k<n; k++)  
        {  
            printf("%d ", arr[k]);  
        }
    //printing the sorted arr     
    printf("\nThe sorted arr is: ");
    QuickSort(arr, 0, n-1);
    for(k=0; k<n; k++)  
        {  
            printf("%d ", arr[k]);  
        }     
}