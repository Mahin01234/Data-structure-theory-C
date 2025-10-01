// *************************


#include <stdio.h>
int main()
{
    int array[100] ; 
    int data , n , i ; 



    printf("Enter the number : ");
    scanf("%d", &n);



    printf("Enter the %d integer : ");



    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }




    printf("enter the data : ");
    scanf("%d", &data);





    for (i = 0; i < n; i++)
    {
        if (array[i] == data)   
        {
            printf("location : %d\n ", i+1); 
            printf ("INDEX : %d" , i ) ; 
            break;
        }
    }





    if (i == n) 
    {
        printf("No location") ;
    }




    return 0;
}
