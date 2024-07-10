#include<stdio.h>
#define n 5
int a[n] , f =-1 , r =-1;

int first_insert(int data)
{
    if(r >= n-1)
    {
        printf("Queue Is Full...");
    }
    else if(f < 0)
    {
        f = r = 0;
        a[r] = data;
    }
    else
    {
        r++;
        a[r] = data;
    }
}
int first_delete()
{
    if (f == r)
    {
        printf("Queue Is Empty...\n");
    }
    else if (f < 0)
    {
        f = r = -1;
    }
    else
    {
        f++;
    }
}
int display()
{
    for (int i = f; i <= r; i++)
    {
        printf("%d ,",a[i]);
    }   
}

int main()
{
   int i , j;

   do
   {
        printf("\nPress 1 For Insert Queue\n");
        printf("Press 2 For Delete Queue\n");
        printf("Press 3 For Display Queue\n");
        printf("Enter Your Choice : ");
        scanf("%d",&i);

        switch (i)
        {
        case 1 :
            printf("\nEnter Value To Insert.");
            scanf("%d",&j);
            first_insert(j);
            break;
        
        case 2 :
            first_delete();
            break;

        case 3 :
            display();
            break;

        

        default:
            printf("Enter Valid Choice...\n");
            break;
        }
   }
   while (i != 0);
}













