#include<stdio.h>

void advancedFizzBuzz(int *a, int m, int *b, int nb, int *f, int nf)
{
    int i,j,k;
    for(i = 0; i<m; i++)
    {
        for(j =0; j<nf; j++)
        {
            if(a[i]% f[j]==0)
            {
                printf("fizz");
                return;
            }
        }
        for(k=0;k<nb;k++)
        {
            if(a[i]% b[k]==0)
            {
                printf("/nbuzz");
                return;
            }
        }
    }
}
void main()  
{  
   //prog to user input array
    int k;
    int nf;
    printf("Enter the Size of array f: ");  
    scanf("%d", &nf);
    int f[nf];
    for(k=0; k<nf; k++)  
    {  
        printf("Enter element %d : ",k + 1);
        scanf("%d", &f[k]);  
    }  
    //printing the arr  
    printf("\nThe arr f is: ");
    for(k=0; k<nf; k++)  
        {  
            printf("%d ", f[k]);  
        }

            int nb;
    printf("\nEnter the Size of array b: ");  
    scanf("%d", &nb);
    int b[nb];
    for(k=0; k<nb; k++)  
        {  
            printf("Enter element %d : ",k + 1);
            scanf("%d", &b[k]);  
        }  
    //printing the arr  
    printf("\nThe arr b is: ");
    for(k=0; k<nb; k++)  
        {  
            printf("%d ", b[k]);  
        }

    int m;
    printf("\nEnter the Size of array a: ");  
    scanf("%d", &m);
    int a[m];
    for(k=0; k<m; k++)  
        {  
            printf("Enter element %d : ",k + 1);
            scanf("%d", &a[k]);  
        }  
    //printing the arr  
    printf("\nThe arr a is: ");
    for(k=0; k<m; k++)  
        {  
            printf("%d ", a[k]);  
        }
    advancedFizzBuzz(a,m,b,nb,f,nf);
   
}

