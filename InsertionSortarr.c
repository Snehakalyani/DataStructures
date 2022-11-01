#include<stdio.h>
#include<stdlib.h>

void InsertionSort();

void InsertionSort(int *arr, int n)
{   
    int i, boop, j;
    for(i=1; i<=n; i++) //i = 1, cuz we are comparing the second element to the prev element
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
    InsertionSort(arr, n);
    for(k=0; k<n; k++)  
        {  
            printf("%d ", arr[k]);  
        }     
}