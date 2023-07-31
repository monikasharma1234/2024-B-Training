/* name monika 
 linkdlis operations
 */
#include <stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
 struct node *head=NULL;
  void create(struct node *ptr)
  { int value;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data:\n");
    scanf("%d",&value);
      temp->data=value;
      temp->next=NULL;
      if(head==NULL)
      {
          head=temp;
      }
      else
      {
          while(ptr->next!=NULL)
          {
              ptr=ptr->next;
          }
          ptr->next=temp;
      }
  }
  void display(struct node *ptr)
  {
     while(ptr->next!=NULL)
     {
         printf("data\t%d\n",ptr->data);
         ptr=ptr->next;
     }
       printf("data\t%d\n",ptr->data);
  }
    void insert(struct node *ptr)
    {  int n,value,i=1;
       struct node *temp;
       temp=(struct node*)malloc(sizeof(struct node));
       printf("enter the position:\n");
       scanf("%d",&n);
       printf("enter the value for insertion:\n");
       scanf("%d",&value);
       temp->data=value;
       while(i!=(n-1))
     {
         ptr=ptr->next;
         i++;
     }
       temp->next=ptr->next;
       ptr->next=temp;
    }
   void deletion(struct node *ptr)
   {  
     int n,i=1;
     printf("enter position:\n");
     scanf("%d",&n);
     while(i!=n-1)
     {
         ptr=ptr->next;
         i++;
     } 
      ptr->next=ptr->next->next;
   }
int main()
{ int n;
 printf("enter no of nodes u want to make");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
     create(head);
 }
    
 display(head);
 insert(head);
 display(head);
 deletion(head);
 display(head);
    return 0;
}






/* name - monika sharma 
roll no- 2000290120097
insertion and deletion in linked list
*/

#include <stdio.h>
#include <stdlib.h>
struct list
{
 int data;
 struct list *next;
    
};
struct list *head=NULL;
void create(struct list *ptr)
{
 struct list *temp;
 int value;
 temp=(struct list*)malloc(sizeof(struct list));
 printf("enter node data\n");
 scanf("%d",&value);
 temp->data=value;
 temp->next=NULL;
 ptr=head;
 if(head==NULL)
 {
     head=temp;
 }
 else
 {
 while(ptr->next!=NULL)
 {
     ptr=ptr->next;
 }
    ptr->next=temp;
}
    
}
 void display(struct list *ptr)
 {
     while(ptr->next!=NULL)
     { 
        
         printf("data=%d\n",ptr->data);
                  ptr=ptr->next;

     }
     printf("data=%d",ptr->data);
     }
    void insert()
    { int p,i=1,data;
    struct list *ptr=head;
    struct list *temp;
    temp=(struct list*)malloc(sizeof(struct list));
    printf("\nenter position for insertion\n");
        scanf("%d",&p);
        while(i!=p-1)
        {  if(ptr->next==NULL)
        {
            printf("error\n");
        } 
        else{
            ptr=ptr->next;
            i++;}
        }
        printf("\nenter data:\n");
        scanf("%d",&data);
        temp->data=data;
        temp->next=ptr->next;
        ptr->next=temp;
        
    }
      
     
      void delete()
 {  int i=1,p;
     struct list *temp;
     struct list *ptr=head;
     printf("\nenter position for deletion:\n");
     scanf("%d",&p);
     while(i!=p-1)
     {
         ptr=ptr->next;
       i++;  
     }
      ptr->next=ptr->next->next;
      
 }
     
int main()
{ int i,n,p;
 
    printf("enter num of nodes:");
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        create(head);
    }
   display(head);
   insert(p);
   display(head);
   delete();
   display(head);
    return 0;
}



/******************************************************************************
monika sharma
2000290120097
reverse a linked list
*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct node
{   int data;
   struct node *next;
};
struct list
{ int info;
struct list *nextt;
};
struct list *Head=NULL,*last=NULL;
   struct node *head=NULL;
   void create()
   { int p;
       struct node *temp,*ptr;
    ptr=head;
    printf("please enter the data:\n");
    scanf("%d",&p);
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=p;
    temp->next=NULL;
       if(head==NULL)
       {
           head=temp;
       }
       else
       {
           while(ptr->next!=NULL)
           {
               ptr=ptr->next;
           }
           ptr->next=temp;
       }
   }
   void reverse()
   {   struct list *temp,*Ptr;
   Ptr=Head;
       struct node *ptr=head;
       while(ptr!=NULL)
       {
           if(Head==NULL)
           {temp=(struct list*)malloc(sizeof(struct list));
           temp->nextt=NULL;
               temp->info=ptr->data;
               Head=temp;
               Ptr=temp;
            
           }
           else
           {temp=(struct list*)malloc(sizeof(struct list));
               temp->info=ptr->data;
               temp->nextt=Ptr;
               Ptr=temp;
           }
           last=Ptr;
           ptr=ptr->next;
       }
       
   }
   void display()
   {
       struct list *Ptr=last;
   while(Ptr!=NULL)
       {
           printf("data=\t%d\n",Ptr->info);
          Ptr=Ptr->nextt;
       }
   }
int main()
{
 int n=5;
 for(int i=0;i<n;i++)
 {
     create();
 }
 printf("reverse of linked list\n");
  reverse();
  display();
    return 0;
}






/*name -monika Sharma
 doubly linklist*/

#include <stdio.h>
#include <stdlib.h>
 struct node
 {
     struct node *pre;
     int data;
     struct node *next;
 };
  struct node *head=NULL;
  void create()
  { int info;
   struct node *ptr=head;
    struct node *temp;
  printf("enter data:\n");
    scanf("%d",&info);

  temp=(struct node*)malloc(sizeof(struct node));

  temp->pre=NULL;
  temp->next=NULL;
  temp->data=info;
  
      if(head==NULL)
      {
          head=temp;
      }
      else
      {
          while(ptr->next!=NULL)
          {
            ptr=ptr->next;
          }
          
          temp->pre=ptr;
        ptr->next=temp;

      }
  }
  void insertion()
  {  int info,p,c=1;
      struct node *temp,*ptr=head;
      printf("enter data:\n");
      scanf("%d",&info);
      printf("enter position:\n");
      scanf("%d",&p);
      temp=(struct node*)malloc(sizeof(struct node));
      temp->data=info;
      while(c!=p-1)
      {
         ptr=ptr->next;
    

         c++;
      }
               

      temp->next=ptr->next;
      temp->pre=ptr;
      ptr->next=temp;
                      

      
      
  }
   void display()
   {  struct node *ptr=head;
       while(ptr!=NULL)
       {

          printf("%d %d %d\n",ptr->pre,ptr->data,ptr->next);
           ptr=ptr->next;
       }
         

   }
   
int main()
{  int n=5;
 for(int i=0;i<n;i++)
 {
    create();
 }
 display();
 insertion();
 display();
    return 0;
}




