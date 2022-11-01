#include<stdio.h>
#include<stdlib.h>

void SelectionSort();
int Findindexofmax();


void SelectionSort(int *arr, int n)
{
    int i, temp, imaxel;
   
    for(i = n; i> 0; i--)
    {
        imaxel = Findindexofmax(arr, i, n);
        temp = arr[imaxel];
        arr[imaxel] = arr[i-1];
        arr[i-1] = temp;

    }
}
int Findindexofmax(int *arr, int i, int n)
{   
    int imaxel;
    if(n < 1)
        {
            return -1;
        }
    imaxel = 0;
    for(int j = 0; j<i; j ++)
        {
            if(arr[j]>arr[imaxel])
            {
                imaxel = j;
            }
        }
    return imaxel;
}
    	
 void main()  
{  
    int arr[20]; 
    int i;
    int n;
    printf("Enter the Size of array: ");  
    scanf("%d", &n);
    for(i=0; i<n; i++)  
        {  
            printf("Enter element %d : ",i + 1);
            scanf("%d", &arr[i]);  
        }  
    printf("\nThe array is: ");  
    for(i=0; i<n; i++)  
        {  
            printf("%d ", arr[i]);  
        } 
    printf("\nThe sorted array is: ");
    SelectionSort(arr, n);
    for(i=0; i<n; i++)  
        {  
            printf("%d ", arr[i]);  
        } 
    
}  


    
    

