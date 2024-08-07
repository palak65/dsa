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
   
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    ptr->prev=ptr;
    temp->next = head;
    head->prev=temp;
    head=temp;
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

    while (ptr->next != head)
   {
        ptr = ptr->next;
    
   
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

    int ch, i, j, x, y;

    do
    {
        printf("\nPress 1 for Insert End.\n");
        printf("Press 2 for Delete End.\n");
        printf("Press 3 for Insert First.\n");
        printf("Press 4 for Delete First.\n");
        printf("Press 5 for Mid Insert.\n");
        printf("Press 6 for Mid Delete.\n");
        printf("Press 7 For Display.\n");
        printf("Press 0 Exit.\n");

        printf("Enter Your Choice :");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter Value For Insert End : ");
            scanf("%d", &i);
            insertEnd(i);
            break;

        case 2:
            deleteEnd();
            break;

        case 3:
            printf("Enter Value For Insert First : ");
            scanf("%d", &j);
            insertFirst(j);
            break;

        case 4:
            deleteFirst();
            break;

        case 5:
            printf("Enter Value For Mid Add : ");
            scanf("%d", &x);
            printf("Enter Position For Add : ");
            scanf("%d", &y);
            insertMid(x, y);
            break;

        case 6:
            printf("Enter Position For Delete : ");
            scanf("%d", &x);
            midDelete(x);
            break;

        case 7:
            display();
            break;

        case 0:
            break;

        default:
            printf("Please Enter Valid Choice......");
            break;
        }
    } while (ch != 0);
}