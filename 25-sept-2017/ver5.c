#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node 
    {
       int data ;
       struct node *next ;
    } NODE ;
    
    /* Declare head of the list as a Global Variable */
    NODE  *head=NULL;
    NODE  *scanPtr ;
    
    int CreateList()
    {
    	NODE *temp;
    	int val=0;
    	head=(NODE*)malloc(sizeof(NODE));
    	if(head!=NULL)
			    head=temp;
    	else
    		  scanPtr->next=temp;  
    	scanPtr=temp;           
		  printf("Enter the value:");
    	scanf("%d",&val);
    	temp->data=val;
    	temp->next=NULL;		
	}
	int DisplayList()
	{
	NODE *temp=head;
    	if(head==NULL)
    		printf("List is empty");
    	else	
    				temp=temp->next;
				temp=data;
    	return 0;
    }  
    int AddNode()
    {
    struct node *new_node,*current;
    newnode=(struct node *)malloc(sizeof(struct node));
     printf("Enter the data : ");
     scanf("%d",&newnode->data);
      newnode->next=NULL;
   if(head==NULL)
   {
   head=newnode;
   current=newnode;
   }
   else
   {
   newnode->next=head;
   head=newnode;
   }
}
    int DeleteNode()
    {
    	
	  }
    
    int DeleteList()
    {
    	
	  }
    int SearchList()
    { 
     struct node *temp;
      temp = head;
      printf("enter the element to be searched\n");
      scanf("%d",&num);
      while(temp!=NULL)
      {
       if(temp->data == num)
       return(1);
       printf("element found\n");
       temp = temp->next;
       }
	  }
	  int DisplayMenu()
    {
    	int choice;
    	printf("1.Create List\n");
		  printf("2.Add Node\n");
		  printf("3.Delete Node\n");
		  printf("4.Display List\n");
		  printf("5.Delete List\n");
		  printf("6.Search List\n");
      printf("7.Exit\n");
		  scanf("%d",&choice);
      return choice;
	  }
    
    int main()
    {
        int flag ;
        int choice ;
        flag = 1 ;
        
        while (flag ==1)
        {
             choice = DisplayMenu() ;
             switch(choice)
             {  
              case 1 :
                { 
                printf("create List\n")
                     CreateList() ;
                     break ;
                }
                case 2:
                {
                     AddNode();
                     break ;
                }
                case 3:
                {
                     DeleteNode();
                     break ;
                }
                case 4:
                {
                    DisplayList() ;
                    break ;
                }
                case 5:
                {
                     DeleteList() ; /* travese through the list and remove each element by element */
                     break ;
                }
                case 6:
                {
                    SearchList();
                    break ;
                }
                case 7:
                {
                    flag = 0 ;
                    break ;
                }
                default:
                {
                   printf("invalid option\n");
                   break ;
                }
             }
        }
    }
