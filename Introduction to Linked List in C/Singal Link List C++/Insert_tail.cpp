// 1.   ===========  Optimized Insert tail  =============
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

void insert_tail (Node * &head , Node * &tail , int value) 
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

void insert_tail_print (Node * &head)  
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
    Node * a = new Node (20) ; 
    Node * tail = new Node (23) ; 

    head->next = a ; 
    a->next = tail ; 

    insert_tail (head , tail , 3) ;
    insert_tail_print (head) ;  
}
// Output : 
// 10
// 20
// 23
// 33


// 2. ================= Normal code ====================
#include<bits/stdc++.h>
using namespace std ; 

class Node 
{
    public: 
    int value ; 
    Node * next ; 
    Node (int value) 
    {
        this->value = value ; 
        this->next = NULL ; 
    }
} ; 

void insert_tail (Node *&head , int value) 
{
    Node * newnode = new Node (value) ; 
    Node * temp = head ; 
    while (temp->next != NULL) 
    {
        temp = temp->next ; 
    }
    temp->next = newnode ; 
}

void insert_tail_print (Node * &head) 
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
    Node * a = new Node (20) ; 

    head->next = a ;  
    a->next = NULL ;

    insert_tail (head , 22) ;
    insert_tail_print(head) ; 

    return 0 ; 
}
// Output : 
// 10
// 20
// 22