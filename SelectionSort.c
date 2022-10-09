//bucket numbers (indices): 0, 1, 2, ...99
n = 100;
void selectionSort(int *a, int n)
{
    int i, imax, t;

for(i =n; i>1; i--)
{
    imax = findIndexOfMax(a, i);
    t = a[imax];
    a[imax] = a[i-1];
    a[i-1] = t;
}
}
int findindexOfMax(int i, int *a)
{
    int imax;
    //error case
    if(n<1)
    {
        return -1;
        }
imax = 0;
for(i =1; i <n; i++)
{
    if(a[i]> a[imax])
    {
        imax = i;
    }
}
return imax;
}

#include<stdio.h>
#include<stdlib.h>

void SelectionSort();
void Findindexofmax();

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
    	
}
   


    
    

