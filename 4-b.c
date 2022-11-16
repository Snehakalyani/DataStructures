//given a max heap
//here arr is maxheap
#include<stdio.h>
void createheap(int arr[], int n);
void maxheapify(int arr[], int n, int i);
void swap(int *a, int *b);
int returnSmallestnNum(int *arr ,int n);

void createheap(int arr[], int n)
{
    int i;
    for(i = n/2 - 1; i>=0; i--)
    {
        maxheapify(arr, n, i);
    }
}

void maxheapify(int arr[], int n, int i)
 {
    int left = 2*i + 1;
    int right = 2*i + 2;
    int parent = i;

    if(left<= n && arr[left]> arr[parent])
    {
        parent = left;
    }
        if(right<= n && arr[right]> arr[parent])
    {
        parent = right;
    }

    if(parent!= i)
    {
        swap(&arr[parent], &arr[i]);
        maxheapify(arr, n, parent);
    }
 }

//swap function
void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

int returnSmallestnNum(int *arr ,int n)
{
    int smallestnum = arr[n/2];
    for(int i = (n/2) + 1; i<=n; i++)
    {
        if(arr[i]<smallestnum)
        {
            smallestnum = arr[i];
        }
    return smallestnum;    
    }
    
}

int main()
{
    int arr[6] = {3, 2, 10, 45, 12, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", arr[6]);
    createheap(arr, n);
    int blah = returnSmallestnNum(arr , n);
    printf("The smallest number is, %d", blah );
    return 0;
}
