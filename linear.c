#include<stdio.h>
#include<stdlib.h>
#define n 10
int a[n]={10,2,3,45,675};
int count=1;
int find_element()
{ 
    int x;
    for (int i=0;i<n;i++)
    {
        a[i]=(rand()%50+1);
    }
    for (int i=0;i<n;i++)
    {
       printf("%d\t", a[i]);
    }
  
    printf("\n select your elment:");
    scanf("%d",&x);
    for(int i=0;i<=n;i++)
    {
        if(a[i]==x)
        {
             printf("Your Searching Elements Is Found On ==> %d <== Position \n", x);
             break;
        }
        else {
           count++;
            }
            }
            printf("your searching data located %d num in the stack",count);
   
}

int main()
{
    int i,j,k,l;
   
    find_element();
}



















