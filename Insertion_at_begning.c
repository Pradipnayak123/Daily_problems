#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL; 
void creation()
{
    struct node  *newnode, *temp;
    int i, n;
    printf("How Many Nodes You Want");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data:");
        scanf("%d", &newnode->data);

        newnode->next = NULL;
        if (head == NULL)
        {

            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void Instatbig()
{
    struct node  *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter New Data");
    scanf("%d", &newnode->data);
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}
void display()
{
    struct node *temp = head;

    printf("\nLinked List:\n");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    creation();
    Instatbig();
    display();

    return 0;
}