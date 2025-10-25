#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int value ;
    struct Node * next ;
};

void insert_tail (struct Node ** head , struct Node ** tail , int value)
{
    struct Node * newnode = (struct Node *) malloc (sizeof (struct Node ) ) ;
    newnode->value = value ;
    newnode->next = NULL ;
    if (* head == NULL)
    {
        * head = newnode ;
        *tail = newnode ;
        return ;
    }
    (*tail)->next = newnode ;
    *tail = newnode ;
}

void insert_tail_print (struct Node * head)
{
    struct Node * temp = head ;
    while (temp != NULL)
    {
        printf("%d " , temp->value) ;
        temp = temp->next ;
    }
}

int main()
{
    struct Node * head = NULL ;
    struct Node * tail = NULL ;
    int n , m , value ;

    printf("enter the element : ") ;
    scanf("%d" , &n) ;

    for(int i=0 ; i<n ; i++)
    {
        printf("Node is %d : " , i + 1) ;
        scanf("%d" , &value) ;
        insert_tail (&head , &tail , value) ;
    }

    printf("the tail is : ") ;
    insert_tail_print (head) ;


    printf("\n") ;
    printf("enter the new element : ") ;
    scanf("%d" , &m) ;

    for(int i=0 ; i<m ; i++)
    {
        printf("Node is %d : " , i + 1) ;
        scanf("%d" , &value) ;
        insert_tail (&head , &tail , value) ;
    }

    printf("the new element tail is : " ) ;
    insert_tail_print (head) ;

    return 0 ;
}
