//wap print (index position) the position of the largest number of n numbers or elements using array
#include<stdio.h>
void main()
{
    int x,i,n,arr[20],large=0;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the elements ...\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[large])
        {
            large = i;

        }
    }
    printf("the largest number is %d\n",arr[large]);
    printf("the position is %d",large+1);

}