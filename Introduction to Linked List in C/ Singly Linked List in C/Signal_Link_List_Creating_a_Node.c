#include <stdio.h>





// Node structure
struct Node
{
    int value;
    struct Node* next;
};





int main()
{
    // static তিনটা নোড বানালাম
    struct Node a, b, c;



    // data assign
    a.value = 10;
    b.value = 20;
    c.value = 300;




    // connection
    a.next = &b;
    b.next = &c;
    c.next = NULL;




    // print values using traversal
    struct Node* temp = &a;  // head = a
    while (temp != NULL)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }




    return 0;
}
