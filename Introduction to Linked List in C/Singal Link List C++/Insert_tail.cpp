#include<bits/stdc++.h>
using namespace std ; 




class Node
{
    public : 
    int value ; 
    Node * next ; 


    Node (int value) 
    {
        this->value = value ; 
        this->next = NULL ; 
    }
} ; 



void insert_a_tail_at_new_node (Node * &head , int value) 
{
    Node * newnode = new Node (value) ; 
    
    if (head == NULL) 
    {
        head  = newnode ; 
        return ; 
    }
    
    Node * temp = head ; 


    while (temp->next != NULL) 
    {
        temp = temp->next ; 
    }


    temp->next = newnode ;    
}




void insert_a_tail_at_new_node_print (Node * head)  
{
    Node * temp = head ; 

    while (temp != NULL)
    {
        cout << temp->value << endl ; 

        temp = temp->next ; 
    }


} 


int main()


{
    Node * head = new Node (100) ; 
    Node * A = new Node (200) ; 
    Node * B = new Node (300) ; 
    Node * C = new Node (400) ; 



    head->next = A ; 
    A->next = B ; 
    B->next = C ; 



    insert_a_tail_at_new_node(head , 120) ; 
    insert_a_tail_at_new_node(head , 5) ; 
    insert_a_tail_at_new_node_print (head) ; 

    return 0 ; 


}