#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    int i,j, numsSize, nums[50];
    
    printf("Enter the size of array");
    scanf("%d", &numsSize);
    for(i = 0; i<numsSize; i++)
    {
        printf("Enter the element");
        scanf("%d", &nums[i]);
       
}

    for(i = 0; i< numsSize; i ++)
    {
        for(j= 0; j<numsSize - i -1; j++)
        {
        if(nums[i] == nums[j])
        
        {
           return true;
        }
        else if(nums[i] != nums[j])
        {
            
            return false;
        }  
        }
    }
}
   

   