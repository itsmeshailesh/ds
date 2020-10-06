#include<stdio.h>

#include<stdlib.h>

struct node

{

    int info;

    struct node *link;

}*TOP=NULL;

void push()

{

    struct node *new;

    int item;

    printf("\nEnter element to push : ");

    scanf("%d",&item);

    new = (struct node *)malloc(sizeof(struct node));

    if(new==NULL)

    {

        printf("\nOverFlow");

        return;

    }

    new->info=item;

    new->link=TOP;

    TOP=new;

}

void pop()

{

    struct node *temp;

    if(TOP==NULL)

    {

        printf("\nUnderflow");

        return;

    }

    temp=TOP;

    TOP=TOP->link;

    printf("\n%d Popped",temp->info);

    free(temp);

}

void traverse()

{

    struct node *ptr;

    if(TOP==NULL)

    {

        printf("\nStack is Empty");

        return;

    }

    printf("\n");

    ptr=TOP;

     while(ptr!=NULL)

    {

        printf("%d ",ptr->info);

        ptr=ptr->link;

    }

}

int main()

{

    int choice;

    while(1)

    {

        printf("\n\nMENU");

        printf("\n1. Push");

        printf("\n2. Pop");

        printf("\n3. Traverse");

        printf("\n4. Exit");

        printf("\nEnter your choice : ");

        scanf("%d",&choice);

        switch(choice)

        {

            case 1 :    push();

                        break;

            case 2 :    pop();

                        break;

            case 3 :    traverse();

                        break;

            case 4 :    exit(0);

            default :   printf("\nInvalid Input!!!");

        }

    }

}

