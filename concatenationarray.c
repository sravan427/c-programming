/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    
}
#include<stdio.h>
int main()
{
    int n;
    printf("enter n value:\n");
    scanf("%d",&n);
    int b=n;
    printf("enter: ");
    int nums[n],ans[2*n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&nums[i]);
    }
    for(int i=0;i<n;i++){
     ans[i]=nums[i];
     ans[b+i]=nums[i];
     }
     for(int i=0;i<2*n;i++)
    {
       printf("%d ",ans[i]);
    }
    return 0;
}