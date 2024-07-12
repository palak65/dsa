#include<stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main()
{
    struct node a,b,c;

    a.data=100;
    a.ch='A';
    a.ptr=NULL;

    b.data=500;
    b.ch='B';
    b.ptr=NULL;

    c.data=400;
    c.ch='C';
    c.ptr=NULL;

    

    a.ptr=&b;
    b.ptr=&c;
   
    
    printf("B data:%d,char:%c\n",a.ptr->data,a.ptr->ch);
    printf("C data:%d,char:%c\n",b.ptr->data,b.ptr->ch);
   
}