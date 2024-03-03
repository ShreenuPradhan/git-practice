#include<stdio.h>
int main()
{
    int a[]={45,12,33,87,2};
    int temp, n=sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];a[j]=a[j+1];a[j+1]=temp;
            }
            
        }
        
    }
    printf("The array after sorting is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    

    return 0;
}