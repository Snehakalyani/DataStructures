#include<stdio.h>
#include<stdlib.h>

void SelectionSort();
int Findindexofmax();

void  main()  
{  
    int arr[20]; 
    int i;
    int n;
    printf("Enter the Size of array\n");  
    scanf("%d", &n);
    for(i=0; i<n; i++)  
    {  
	    printf("Enter element %d : ",i + 1);
        scanf("%d", &arr[i]);  
    }  
    printf("\nThe array is: ");  
    for(i=0; i<n; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("The sorted array is");
    SelectionSort(arr, n);
    printf("%d", arr[i]);
}
void SelectionSort(int *arr, int n)
{
    int i, temp, imaxel;
   
    for(i = n; i> 0; i--)
    {
        imaxel = Findindexofmax(arr, i);
        temp = arr[imaxel];
        arr[imaxel] = arr[i-1];
        arr[i-1] = temp;

    }
}
int Findindexofmax(int *arr, int i)
{   int n;
    int imaxel;
    if(n < 1)
    {
        return -1;
    }
    imaxel = 0;
    for(i = 1; i<n; i ++)
    {
        if(arr[i]> arr[imaxel])
        {
            imaxel = i;
        }
    }
    return imaxel;
}
    	
   


    
    

