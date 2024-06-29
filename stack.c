#include<stdio.h>
#define n 5
int a[n] , top = -1;

int insertend(int data)
{
    if (top >= n-1)
    {
        printf("Stack is Overflow \n");
    }
    else
    {
        top++;
        a[top] = data;
    }
}

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
   
    display();
}











