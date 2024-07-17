#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;  
    struct node *next;
};
struct node *head = NULL;

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        temp->prev = temp;
        return;
    }
    else
    {
         while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
    temp->next = head;
    head->prev = temp;
    return;
    }
}
void insertFirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        temp->prev = head;
        return;
    }
    else
    {
    // while (ptr->next != head)
    // {
    //     ptr = ptr->next;
    // }
    //ptr->next = temp;
    temp->next = head;
    temp->prev = head->prev;
    head=temp;
   
    }
    return;
}
void deleteEnd()
{
    struct node *ptr = head;
    struct node *prev;
    if (head == NULL)
    {
        printf("List Is Allready Empty.....\n");
    }
    else if (ptr->next == head)
    {
        head = NULL;
        free(ptr);
      
    }
    else
    {
    while (ptr->next != head)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = head;
    free(ptr);
}
    return;
}
void deleteFirst()
{
    struct node *ptr = head;
    struct node *temp = head;
    if (head == NULL)
    {
        printf("List Is Already Empty....\n");
    }
    else if (ptr->next == head)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
    while (ptr->next != head)
   
        ptr = ptr->next;
    
    ptr->next = head->next;
    head->next-> prev=ptr;
    free(temp);
    return;
    }
}

void insertMid(int val, int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    struct node *p;

    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = temp;
    temp->prev = p;
    temp->next = ptr;
    ptr->prev = temp;
    return;
}
void midDelete(int pos)
{
    struct node *ptr = head;
    struct node *p;

    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    ptr->next->prev = p;
    free(ptr);
    return;
}
int display()
{
    struct node *ptr = head;
    if (ptr == NULL)
    {
        printf("list is empty");
    }

    while (ptr->next != head)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d ", ptr->data);
    printf("\n");
}

int main()
{
    // insertEnd(10);
    // insertEnd(20);
    // insertEnd(30);
    // display();
    // deleteEnd();
    // display();

    insertFirst(40);
    insertFirst(50);
    display();
    // deleteFirst();
    // display();

//     insertMid(60, 20);
//     insertMid(70, 10);
//     display();
//     midDelete(20);
//     midDelete(10);
//     display();
}
