#include<bits/stdc++.h>
using namespace std ; 
int main()
{
    int arr[] = {10,20,30,40,50} ; 
    int value ; 
    int position = -1 ; 
    


    cout << "Enter the num : " ; 
    cin >> value ; 




    for (int i=0 ; i<5 ; i++) 
    {
        if (value == arr[i] ) 
        {
            position = i  ; 
            break; 
        }
    }




    if (position == -1) 
    {
        cout << "Not found" << endl ; 
    }
    else 
    {
        cout << "index : " << position << endl ; 
    }


    return 0 ; 
}



// question 
// একটি অ্যারে দেওয়া আছে:
// [10, 20, 30, 40, 50]
// তুমি একটি সংখ্যা ইনপুট নেবে।
// Linear Search ব্যবহার করে চেক করবে সংখ্যাটি অ্যারেতে আছে কিনা।

// যদি থাকে, তবে তার index প্রিন্ট করবে।

// যদি না থাকে, তবে "Not Found" প্রিন্ট করবে।