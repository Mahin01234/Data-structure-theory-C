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




// Function + Pointer
void insert_at_head (Node * &head , int value) 
{
    Node * newnode = new Node (value) ; 
    newnode->next = head ; 
    head = newnode ; 
}




void print_link_list (Node * head) 
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
    Node *  a = new Node (20) ; 
    Node * b = new Node (30) ; 
    Node * c = new Node (40) ;  



    head->next = a ; 
    a->next = b ; 
    b->next = c ; 




    //function 
    insert_at_head(head , 1200) ; 
    
    print_link_list(head)  ; 
}