#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct node 
    {
       int data ;
       struct node *next ;
    } NODE ;
    NODE  *head=NULL ;
    NODE  *scanPtr ;
 DisplayMenu()
  {	
  int choice=0;
	printf("1. push an element");
  	printf("2. pop an element");
  	printf("3. display stack content");
  	 scanf("%d ",&choice);
	 return choice;
   }

void push()
{
	NODE *temp;
      int element;
         temp=(NODE*)malloc(sizeof(NODE));
     		
 		    printf("enter the value to be pushed\n");
     	  scanf("%d",&element);
     	  temp->data=element;
     	  scanPtr=head;
     	  head=temp;
     	  temp->next=scanPtr;
}

void pop()
{

 		
 		    if(head==NULL)
 		    {
 			      printf("\n the list is empty");
 		    }
 		else
		 {
		  NODE *temp=head;
     	  head=temp->next;
     	  free(temp);
     	  
}
}
void display()
{
	 if(head == NULL)
      printf("Stack is Empty\n");
   else
   {
       NODE *temp = head;
      while(temp->next != NULL)
	  {
	 printf("%d",temp->data);
	 temp = temp -> next;
      }
}
}





int main()
     {
         int flag ;
         int choice ;
         
         flag = 1 ;
         
         while (flag)
         {
              choice = DisplayMenu() ;
              switch(choice)
              {  
                 case 1 :
                 { 
                     push();
                      break ;
                 }
                 case 2:
                 {
                     pop();
                      break ;
                 }
                 case 3:
                 {
                 	   display();
                      break ;
                 }
                 
                 case 4:
                 {
                      flag=0;
                 	   break;
 				        }
                 default:
                 {
                     
                      break ;
                 }
              }
         }
     }
