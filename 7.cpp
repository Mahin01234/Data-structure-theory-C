#include<bits/stdc++.h>
using namespace std ; 

int main() 
{
    int arr[] = {3, 6, 9, 12, 15, 18, 21} ;  

    int n = sizeof(arr) /  sizeof (arr[0] ) ; 
    int value ; 
    bool found = false ; 


    cout << "Enter the number : " ;  
    cin >> value ; 



    for (int i=0 ; i<n ; i++) 
    {
        if(arr[i] == value ) 
        {
            found = true ; 
            break; 
        }
    }


 
    if (found) 
    {
        cout << "YES , Found" << endl ; 
    }
    else 
    {
        cout << "NO , Not Found" << endl ; 
    }


    return 0 ; 


}






// Given an array: [3, 6, 9, 12, 15, 18, 21] 
// Take an input number from the user. 
// Using Linear Search, check if the number exists. 
// If yes, print "Yes, Found". 
// If no, print "No, Not Found".