#include<stdio.h>
typedef struct node 
    {
       int data ;
       struct node *next ;
    } NODE ;
    
    /* Declare head of the list as a Global Variable */
    NODE  *head ;
    NODE  *scanPtr ;
    
    int CreateList()
    {
    
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
    	printf("1.CreateList\n");
		printf("2.AddNode\n");
		printf("3.DeleteNode\n");
		printf("4.DisplayList\n");
		printf("5.DeleteList\n");
		printf("6.SearchList\n");
		printf("7.Exit\n");
		printf(" enter the choice:");
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
             {  case 1 :
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
                   break ;
                }
             }
        }
    }
