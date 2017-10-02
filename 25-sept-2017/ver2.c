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
    	if(head==NULL)
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
	  }
    int AddNode()
    {
    	
	  }
    int DeleteNode()
    {
    	
	  }
    
    int DeleteList()
    {
    	
	  }
    int SearchList()
    {
    	
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
