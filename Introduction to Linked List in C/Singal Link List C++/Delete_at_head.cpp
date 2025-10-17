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








void Delete_at_head (Node * &head ) 
{
    Node * delete_node = head ;

    head = head->next ; 

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
    
    Delete_at_head (head) ; 
    Delete_at_head_print (head) ; 


    return 0 ; 
}