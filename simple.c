#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}

void deleteEnd()
{
    struct node *ptr =head;
    struct node *prev;

    if (head == NULL)
    {
        printf("List Is Allready Empty.....\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while (ptr->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = NULL;
    free(ptr);
    return;
}

void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List Is Empty....\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
void insertFirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        temp->next = NULL;
        head = temp;
        return;
    }

    temp->next = ptr;
    head = temp;
}
void deleteFirst()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List is already empty\n");
        return;
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }

    head = ptr->next;
    free(ptr);
}
void insertMid(int val, int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        temp->next = NULL;
        head = temp;
        return;
    }

    int count = 1;
    while (ptr->next != NULL && count < pos)
    {
        ptr = ptr->next;
        count++;
    }

    if (count < pos)
    {
        printf("Invalid position\n");
        free(temp);
        return;
    }

    temp->next = ptr->next;
    ptr->next = temp;
}
void midDelete(int pos)
{
    struct node *ptr = head;
    struct node *prev = NULL;

    int count = 1;
    while (ptr != NULL && count < pos)
    {
        prev = ptr;
        ptr = ptr->next;
        count++;
    }

    if (ptr == NULL)
    {
        printf("Invalid position\n");
        return;
    }

    if (prev == NULL)
    {
        head = ptr->next;
    }
    else
    {
        prev->next = ptr->next;
    }

    free(ptr);
}




int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    insertEnd(60);
    deleteEnd();
    deleteEnd();
    display();
    display();
    insertFirst(10);
    deleteFirst();
    midDelete(10);
    insertMid(10,1);

    
}