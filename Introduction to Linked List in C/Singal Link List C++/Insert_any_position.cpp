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





void insert_at_any_position (Node * &head , int index , int value)  
{
    Node * newnode = new Node (value) ;

    Node * temp = head ; 


    for (int i=1 ; i<index ; i++) 
    {
        temp = temp->next ; 
    }


    newnode->next = temp->next ; 

    temp->next = newnode ; 

}




void insert_at_any_position_print (Node * &head) 
{
    Node * temp = head ; 

    while (temp != NULL) 
    {
        cout << temp->value << endl ;
        temp = temp->next;
    }
}




int main()
{
    Node * head = new Node (10) ; 
    Node * a = new Node (20) ; 
    Node * b = new Node (30) ; 



    head->next = a ; 
    a->next = b ; 



    insert_at_any_position (head , 2 , 300) ; 
    insert_at_any_position (head , 2 , 250) ; 
    insert_at_any_position_print (head) ; 

    return 0 ; 


}