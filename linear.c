#include<stdio.h>
#include<stdlib.h>
#define n 10
int a[n]={10,2,3,45,675};

int find_element(int x)
{ 
    for(int i=0;i<=n-1;i++)
    {
        if(a[i]==x)
        {
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int i,j,k=45,l;
   
    j=find_element(k);
  if (j > 0)
        {
            printf("Your Searching Elements Is Found On ==> %d <== Position \n", j);
          
        }
        else
        {
            printf("Your Searching Elements Is Not Found.\n");
        }

       
}



















