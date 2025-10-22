#include<stdio.h>
#include<stdlib.h>






struct Node
{
    int value ; 
    struct Node * next ; 
} ; 







//Insert Tail 
void insert_tail (struct Node ** head , int value)  
{
    struct Node * newnode = (struct Node* ) malloc (sizeof(struct Node)) ; 

    newnode->value = value ;  
    newnode->next = NULL ; 

    if(*head == NULL) 
    {
        *head = newnode ; 
        return ; 
    }


    struct Node * temp = *head ; 
    while (temp->next != NULL)
    {
        temp = temp->next ; 
        break; 
    }

    temp->next = newnode ; 

} 







//Insert Head
void insert_head (struct Node** head , int value) 
{
    struct Node * newnode = (struct Node*) malloc(sizeof(struct Node)) ; 

    newnode->value = value ; 
    newnode->next = *head ; 
    *head = newnode ; 

}







// print
void insert_head_print (struct Node * head) 
{
    struct Node * temp = head ; 
    while(temp != NULL) 
    {
        printf("%d " , temp->value ) ; 
        temp = temp->next ; 
    }
    printf("\n") ; 
}







// Main function 
int main()
{
    struct Node * head = NULL ; 
    int n , value ; 
    printf("enter the element : ") ;
    scanf("%d" , &n) ; 

    for (int i=0 ; i<n ; i++) 
    {
        printf("Node %d : " , i+1) ; 
        scanf("%d" , &value) ; 
        insert_tail (&head , value) ; 
    }

    printf("The head : ") ; 
    struct Node * temp = head ; 
    while (temp != NULL) 
    {
        printf("%d " , temp->value) ; 
        temp = temp->next ; 
    }
    printf("\n") ;







    int m ; 
    printf("Insert at head : " ) ; 
    scanf("%d" , &m ) ; 

    for(int i=0 ; i<m ; i++) 
    {
        printf("Node %d: " , i+1) ; 
        scanf("%d" , &value) ; 
        insert_head(&head , value) ; 
    }


    printf("After the insert at head : " ) ; 
    temp = head ; 
    while (temp != NULL) 
    {
        printf("%d " , temp->value) ; 
        temp = temp->next ; 
    }
    printf("\n") ; 


    return 0 ; 

}