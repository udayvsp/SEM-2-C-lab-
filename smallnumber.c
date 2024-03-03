//wap print (index position) the position of the smallest number of n numbers or elements using array

#include<stdio.h>
void main()
{
    int x,i,n,arr[20],small=0;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the elements ...\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<arr[small])
        {
            small = i;

        }
    }
    printf("the smallest number is %d\n",arr[small]);
    printf("the position is %d",small+1);

}
