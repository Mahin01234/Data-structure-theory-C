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







void Linked_list_reverse (Node * &head , Node * &tail , int value) 
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







void Linked_list_reverse_print (Node * temp)  
{
    if (temp == NULL) 
    {
        return ; 
    }
    
    
    //Straight (সোজা)
    //cout << i << endl ;


    Linked_list_reverse_print (temp->next) ; 


    //reverse 
   cout << temp->value << endl ; 

}








int main()
{
    Node * head = NULL ; 
    Node * tail = NULL ; 


    cout << "Linked list reverse the element : " ; 
    while (true) 
    {

        int val ; 
        cin >> val ; 


        if (val == -1) 
        {
            break;
        }



        Linked_list_reverse (head , tail , val) ; 
    }


    cout << "print the linked list reverse the element : " << endl ; 
    Linked_list_reverse_print (head) ; 


}













// #include<bits/stdc++.h>
// using namespace std ; 



// void recursion (int i , int n) 
// {

//     if (i > n ) 
//     {
//         return ; 
//     }


//     //Straight (সোজা)
//     //cout << i << endl ;


//     recursion (i + 1 , n) ;


//     //reverse 
//     cout << i << endl ; 


// }




// int main()
// {

//     int n = 5 ; 
    
//     recursion (1 , n) ; 

//     return 0 ; 
// }