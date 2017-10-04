#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node 
    {
       struct node *left ;
       struct node *right ;
    } NODE ;
    
    /* Declare head of the list as a Global Variable */
    NODE  *head ;
    NODE  *scanPtr ;
    int CreateList()
    {
    	int data;
    	int count;
    	NODE *temp;
    	temp=(NODE*)malloc(sizeof(NODE));
    	temp->left = NULL;
    temp->right = NULL;
    printf("\n Enter value : ");
    scanf("%d", &data);
    temp->n = data;
    count++;
}		  
	int DisplayListForward()
    {
    	int temp1;
    temp1 = head;
 
    if (temp1 == NULL)
    {
        printf("List empty to display \n");
        return;
    }
    printf("\n Linked list elements from begining : ");
 
    while (temp1->right!= NULL)
    {
        printf(" %d ", temp1->n);
        temp1 = temp1->right;
    }
    printf(" %d ", temp1->n);
}	
	}
	int DisplayListReverse()
	{
	int temp1;
    if (temp1!= NULL)
    {
        i = temp1->n;
        temp1 = temp1->right;
        DisplayReverse(i);
        printf(" %d ", i);
    }	
	}
    int AddNode()
    {
    int data;
    int count;
    temp =(struct node *)malloc(1*sizeof(struct node));
    temp->left = NULL;
    temp->right = NULL;
    printf("\n Enter value to node : ");
    scanf("%d", &data);
    temp->n = data;
    count++;
	}
    int DeleteNode()
    {
    int i = 1, pos;
    printf("\n Enter position to be deleted : ");
    scanf("%d", &pos);
    temp = head;
    if (head == NULL)
    {
        printf("\n Empty list no elements to delete");
        return;
    }
    else
    {
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        if (i == 1)
        {
            if (temp->next == NULL)
            {
                printf("Node deleted from list");
                free(temp);
                temp = head = NULL;
                return;
            }
        }	
	}
}
    int DeleteList()
    {
    	
	}
    int SearchList()
    {
     {
    int data;
    int count;
    temp =(struct node *)malloc(1*sizeof(struct node));
    temp->left = NULL;
    temp->right = NULL;
    printf("\n Enter value to node : ");
    scanf("%d", &data);
    temp->n = data;
    count++;
   }

int DisplayForward
{
int temp2
temp2 = head;

    if (temp2 == NULL)
    {
        printf("List empty to display \n");
        return;
    }
    printf("\n Linked list elements from begining : ");

    while (temp2->right != NULL)
    {
        printf(" %d ", temp2->n);
        temp2 = temp2->right;
    }
    printf(" %d ", temp2->n);
}

int DisplayReverse
{
  int temp2;
    if (temp2 != NULL)
    {
        i = temp2->n;
        temp2 = temp2->right;
        DisplayReverse(i);
        printf(" %d ", i);
    }
}


int DeteleList
struct node *temp;

    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->right;
        free(temp);
    }

int SearchList
{
    int data, count = 0;
    int temp1= head;

    if (temp1 == NULL)
    {
        printf("\n Error : List empty to search for data");
        return;
    }
    printf("\n Enter value to search : ");
    scanf("%d", &data);
    while (temp1!= NULL)
    {
        if (temp1->n == data)
        {
            printf("\n Data found in %d position",count + 1);
            return;
        }
        else
             temp1= temp1->right;
            count++;
    }
    printf("\n Error : %d not found in list", data);
}	
	}
	int DisplayMenu()
    {
    	int choice;
    	printf("1.CreateList\n");
		printf("2.AddNode\n");
		printf("3.DeleteNode\n");
		printf("4.DisplayListForward\n");
		printf("5.DisplayListReverse\n");
		printf("6.DeleteList\n");
		printf("7.SearchList\n");
		printf("8.Exit\n");
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
                    DisplayForward() ;
                    break ;
                }
                case 5:
                {
                    DisplayForward() ;
                    break ;
                }
                case 6:
                {
                     DeleteList() ; /* travese through the list and remove each element by element */
                     break ;
                }
                case 7:
                {
                    SearchList();
                    break ;
                }
                default:
                {
                   break ;
                }
             }
        }
    }
    

