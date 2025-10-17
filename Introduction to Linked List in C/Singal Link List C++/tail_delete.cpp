#include <bits/stdc++.h>
using namespace std;




class Node
{

    public:

    int value ;
    Node * next ;


    Node(int value)
    {
        this->value = value ;
        this->next = NULL ;
    } 

} ;













void tail_deleted_Node (Node * &head, Node * &tail, int value)
{
    Node * newnode = new Node(value) ; 


    if (head == NULL)
    {

        head = newnode ;
        tail = newnode ;
        return ;
    }



    tail->next = newnode ;
    tail = newnode ; 

}









void tail_deleted_node_Print (Node * head)
{
    Node * temp = head ; 


    while (temp != NULL)
    {
        cout << temp->value << " " ;
        temp = temp->next ;
    }


    cout << endl ;

}










void Delete_At_Head (Node * &head)
{

    if (head == NULL) 
    {
        return ;
    }


    Node * delete_node = head ;
    head = head->next ;
    delete delete_node ;


}












void Delete_At_Tail (Node * &head)
{

    if (head == NULL) 
    {
        return ;
    }



    
    if (head->next == NULL)
    {
        delete head ;
        head = NULL ;
        return ; 

    }




    Node *temp = head;
    
    while (temp->next->next != NULL)
    {
        temp = temp->next ;
    }



    delete temp->next ;
    temp->next = NULL ; 
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



        tail_deleted_Node (head, tail, val) ;


    }




    cout << "Before deletion : " ;
    tail_deleted_node_Print (head) ;



    Delete_At_Tail (head) ;



    cout << "After deleting tail : " ; 


    tail_deleted_node_Print (head) ;


    
    return 0;
}