//given an array, create a heap
#include<stdio.h>
int main()
{
    int arr[5] = {3, 10, 45, 12, 5};
    printf("%d", arr[5]);
    void createheap();
    printf("%d", arr[5]);
    return 0;

}


void createheap(int arr[], int n);
void heapify(int arr[], int n, int i);
void swap(int *a, int *b);

//swap function
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void createheap(int arr[], int n)
{
    for(int i = n/2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
}
 void heapify(int arr[], int n, int i)
 {
    int left = 2*i;
    int right = 2*i + 1;
    int parent = i;

    if(left<= n && left> parent)
    {
        i = left;
    }
        if(right<= n && right> parent)
    {
        i = right;
    }

    if(parent!= i)
    {
        swap(arr[parent], arr[i]);
        heapify(arr, n, parent);
    }
 }