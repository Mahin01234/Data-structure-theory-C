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






void Input_at_tail (Node * &head , Node * &tail , int value) 
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






void Input_a_linked_list (Node * &head) 
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
    Node * head = NULL ; 
    Node * tail = NULL ; 



    cout << "Enter the value : " ; 
    // int val ; 
    while (true)
    {
        int val ; 
        cin >> val ; 


        if (val == -1) 
        {
            break;
        }


        Input_at_tail (head , tail , val) ; 
    }


    cout << "Input a linked list of element : " << endl ;  
    Input_a_linked_list (head) ; 


    return 0 ; 

}





// Output : 
// Enter the value : 10 20 30 40 -1
// Input a linked list of element : 
// 10
// 20
// 30
// 40
