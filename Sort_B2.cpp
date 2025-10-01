#include<bits/stdc++.h>
using namespace std ; 
int main() 
{
    int n , q ; 
    cin >> n >> q ; 



    int a[n] ; 
    cout << "Enter the num : " ;
    for (int i=0 ; i<n ; i++) 
    {
        cin >> a[i] ; 
    } 



    sort (a , a+n) ; 


    for (int i=0 ; i<q ; i++) 
    {


        int value ; 
        cout << "Enter the value : " ; 
        cin >> value ; 

        
        int flag = 0 ; 



        int L = 0 ; 
        int R = n - 1 ; 



        while (L <= R)
        {
            // 1st step 
            int Mid = (L + R) / 2 ; 

            if (a[Mid] == value) 
            {
                flag = 1 ; 
                break;
            }     

            // 2nd step

            
            else if (a[Mid] > value) 
            {
                R = Mid - 1 ; 
            } 

            //3rd step

            else 
            {
                L = Mid + 1 ; 
            }  
        }



        if (flag == 1) 
        {
            cout << "found" << endl ; 
        }
        else 
        {
            cout << "not found" << endl ; 
        }

    }



    return 0 ; 
}
