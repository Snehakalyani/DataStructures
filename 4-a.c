#include<stdio.h>
void createheap(int arr[], int n);
void maxheapify(int arr[], int n, int i);
void swap(int *a, int *b);
void printmaxheap(int arr[], int n);
void heapsort(int arr[], int n);

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

 void heapsort(int arr[], int n)
{
    createheap(arr, n);
    for(int i = n; i>1; i --)
    {
        swap(&arr[n], &arr[i]);
        maxheapify(arr, i -1, 1);
    }
}

 //swap function
void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

void printmaxheap(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ",arr[i]);
}

int main()
{
    int arr[5] = {3, 10, 45, 12, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", arr[5]);
    createheap(arr, n);
    printf("Heap is: ");
    printmaxheap(arr, n);
    heapsort(arr, n);
    printf("\nThird largest element is, %d", arr[2]);
    printf("\nThe smallest element is, %d", arr[n]);

    return 0;
}
