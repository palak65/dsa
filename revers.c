#include<stdio.h>    

int main()
{
    int a[10] , i ,j , n;

    printf("Enter Limit Of Array : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter Value a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        if (i == 0)
        {
            j = a[i];
            a[i] = a[n - 1];
            a[n - 1] = j;
        }
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }   
}