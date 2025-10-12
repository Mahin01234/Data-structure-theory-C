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







void insert_at_tail (Node * &head , int value) 
{
    Node * newnode = new Node (value)  ; 


    if(!head)
    {
        head = newnode ;
        return ; 
    }


    Node * temp = head ; 

    
    while(temp->next) 
    {
        temp = temp->next ; 
       // temp->next = newnode ;
       
    }

    temp->next = newnode ;  
}







void insert_at_tail_print (Node * head) 
{
   


    while (head)   
    {
        cout << head->value << " " ; 
        head = head->next ; 
    }
    cout << endl ; 

}






int insert_at_tail_size_of_list (Node * head) 
{
    int count = 0 ; 
    Node * temp = head ; 

    while (head)
    {
        count++ ; 

        head = head->next ;  

    }
    return count ; 
    
}










int main()
{
    Node * head = NULL ; 

    int val;
    while (cin >> val) 
    { 
        insert_at_tail(head, val);
    }



    insert_at_tail_print (head) ; 

    cout << insert_at_tail_size_of_list(head) << endl ; 


    return 0 ; 


}