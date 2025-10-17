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








void Delete_at_head_node (Node * &head , Node * &tail , int value) 
{
    Node * newnode = new Node (value) ;


    if (head == NULL) 
    {
        head = newnode ; 
        tail = newnode ;  
        return ; 
    }


    tail->next = newnode ; 
    tail = newnode ; 
}







void Delete_at_head_print (Node * &head) 
{
    Node * temp = head ; 

    if (head == NULL) 
    {
        return ; 
    }

    while (temp != NULL)
    {
        cout << temp->value << endl ; 
        temp = temp->next ; 
    }
    
    cout << endl ; 
}








void Delete_any_position (Node * &head , int index) 
{
    Node * temp = head ;

    for (int i=1 ; i<index ; i++) 
    {
        temp = temp->next ; 
    }

    Node * delete_node = temp->next ; 
    temp->next = temp->next->next ; 
    
    delete delete_node ; 
}









int main()
{
    Node * head = NULL ; 
    Node * tail = NULL ;  


    while (true) 
    {
        int val ; 
        cin >> val ; 


        if (val == -1) 
        {
            break; 
        }


        Delete_at_head_node (head , tail , val) ; 
    }
    
    Delete_any_position (head , 2)  ; 
    Delete_at_head_print (head) ; 


    return 0 ; 
}