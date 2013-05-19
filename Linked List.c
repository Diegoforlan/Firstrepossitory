#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct node{
       int data;
       struct node* next;
       }*head=NULL;

void insert_node();
void insert_sorted();
void display();

main()
{

      int x=1;
      do
      {
      printf("\n\nPress 1 for insert\nPress 2 for insert_sorted\nPress 3 for Display\nPress 4 to exit\nEntry=");
      scanf("%d",&x);
          if(x==1)
          insert_node();
          if(x==2)
          insert_sorted();
          if(x==3)
          display();
          if(x==4)
          printf("\n\nThankyou Bye!");
      }
      while(x!=0);
      getch();
      }



//----------------------------------------------------------------------//
void insert_node()
{
     int item;
     printf("Enter the number you wish to insert=");
     scanf("%d", &item);

     if(head==NULL)
     {
                  head=(struct node*)malloc(sizeof(struct node));
                  head->data=item;
                  head->next=NULL;
     }
     struct node* ptr;
     ptr=head;
     while(ptr->next!=NULL)
     {
                           ptr=ptr->next;
     }
     ptr->next=(struct node*)malloc(sizeof(struct node));
     ptr->next->data=item;
     ptr->next->next=NULL;
}


//----------------------------------------------------------------------//
void insert_sorted()
{
     struct node *ptr1, *ptr2;
     int item;
     printf("Enter the number you wish to insert=");
     scanf("%d", &item);
     if(head->data > item)
     {
                   ptr1=head;
                   head=(struct node*)malloc(sizeof(struct node));
                  head->data=item;
                  head->next=ptr1;
     }
     else
     {
         ptr1=head;
     while(ptr1->next!=NULL)
     {
                           if(ptr1->next->data > item)
                           break;
                           ptr1=ptr1->next;
     }
     ptr2=ptr1->next;
     ptr1->next=(struct node*)malloc(sizeof(struct node));
     ptr1->next->data=item;
     ptr1->next->next=ptr2;
     }
}


//----------------------------------------------------------------------//

void display()
{
     struct node* ptr2;
     ptr2=head;
     if(ptr2==NULL)
     {
                   printf("Linked List empty");
     }
     while(ptr2!=NULL)
     {
                    ptr2=ptr2->next;
                    printf("\n%d",ptr2->data);
     }
     system("pause");
}
