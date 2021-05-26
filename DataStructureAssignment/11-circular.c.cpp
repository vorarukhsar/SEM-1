#include<stdio.h>  
#include<conio.h>
#include<stdlib.h>  

/*Write a C Program to create Circular linked list. Perform insert and delete Operation. 
*/
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  
  
void insf();   
void insl();  
void delf();  
void dell();  
void display();  


void insf()  
{  
    struct node *ptr,*temp;   
    int item;   
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\n overflow");  
    }  
    else   
    {  
        printf("\nEnter  data:");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else   
        {     
            temp = head;  
            while(temp->next != head)  
                temp = temp->next;  
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }   
        printf("\nnode inserted");  
    }  
              
}  
void insl()  
{  
    struct node *ptr,*temp;   
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\n overflow");  
    }  
    else  
    {  
        printf("\nEnter Data: ");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head)  
            {  
                temp = temp -> next;  
            }  
            temp -> next = ptr;   
            ptr -> next = head;  
        }  
          
        printf("\nnode inserted");  
    }  
  
}  
  
void delf()  
{  
    struct node *ptr;   
    if(head == NULL)  
    {  
        printf("\n overflow");    
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nnode deleted\n");  
    }  
      
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        printf("\nnode deleted ");  
  
    }  
}  
void dell()  
{  
    struct node *ptr, *preptr;  
    if(head==NULL)  
    {  
        printf("\n underflow");  
    }  
    else if (head ->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nnode deleted");  
  
    }  
    else   
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
        free(ptr);  
        printf("\nnode deleted");  
  
    }  
}  
  
void display()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\n empty ");  
    }     
    else  
    {  
        printf("\n print data : ");  
          
        while(ptr -> next != head)  
        {  
          
            printf("%d\n", ptr -> data);  
            ptr = ptr -> next;  
        }  
        printf("%d\n", ptr -> data);  
    }  
              
}  
int main()  
{  
    int choice =0;  
    while(choice != 7)   
    {    
        printf("\n 1.insert first");  
        printf("\n 2.insert last");  
        printf("\n 3.delete first");  
        printf("\n 4.delete last");
        printf("\n 5.display");
        printf("\n 6.Exit");
        printf("\nEnter your choice: ");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:insf();      
            break;  
            case 2:insl();  
            break;  
            case 3:delf();                     
            break;  
            case 4:dell();                     
            break;  
            case 5:display();         
            break;  
            case 6:exit(0);  
            break;  
            default:  
            printf("enter valid choice..");  
        }  
    }  
}  
