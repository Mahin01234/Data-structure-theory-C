#include <bits/stdc++.h>
using namespace std;




class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};




// Insert at tail
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}




// Print linked list
void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}





// Sort linked list in descending order
void sort_descending(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val); // Swap values
            }
        }
    }
}




// Sort linked list in ascending order
void sort_ascending(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val); // Swap values
            }
        }
    }
}





int main()
{
    Node *head = NULL;
    Node *tail = NULL;



    cout << "Enter values : ";
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }





    // Sort descending
    sort_descending(head);
    cout << "Sorted descending: ";
    print_list(head);




    // Sort ascending
    sort_ascending(head);
    cout << "Sorted ascending: ";
    print_list(head);

    return 0;
}
