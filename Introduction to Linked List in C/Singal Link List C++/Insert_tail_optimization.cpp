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






void insert_a_new_node_at_tail (Node * &head , Node * &tail , int value) 
{
    // newnode ready  
    Node * newnode = new Node (value) ; 

    // যদি link list টা ফাকা থাকে 
    if (head == NULL) 
    {
        head = newnode ; 
        tail = newnode ; 

        return ; 
    }
 
    
    tail->next = newnode ;  
    //tail = tail->next ;
    // or 
    tail = newnode ; 
}
 






void insert_a_new_node_at_tail_print (Node * &head) 
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
     

    Node * head = new Node (10) ; 
    Node * A = new Node (20) ; 
    Node * B = new Node (30) ; 
    Node * tail = new Node (40) ; 
    
    



    head->next = A ; 
    A->next = B ; 
    B->next = tail ; 




    insert_a_new_node_at_tail(head , tail , 65) ; 
    insert_a_new_node_at_tail(head , tail , 55505) ;
    insert_a_new_node_at_tail_print (head) ; 



    cout << "The tail is : " << tail->value << endl ; 
    return 0 ; 

}