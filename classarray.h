#include <iostream>
#include "stools.h"

using namespace std;

class classarray
{
    private:
        int n;
        int arr[99];
    public:
        void enterarray(void);
        void disparray(void);
        friend int sortflaggeras(int arr1[], int size);
};

void classarray::enterarray(void)
{
    int temp=0, i;
    cout<<"\n Enter the number of elements.\n";
    cin>>n;
    cout<<"\n Enter the elements of the array: \n";
    for(i=0;i<n;i++) //loop to enter elements of the array.
    {
        cin>>arr[i]; //inputting the elements.
    }
    cout<<"\n The entered array is: \n";
    for(i=0;i<n;i++)//showing the entered array.
    {
        cout<<" "<<arr[i];
    }

    int flag = sortflaggeras(arr, n); //checking if the array is unsorted.
    while(flag!=0) //as long as the array is unsorted.
    {
        for(i=0;i<n-1;i++)//go through the entire array.
        {
            if(arr[i+1]<arr[i])//if two consecutive elements are out of order.
            {
                temp = arr[i];//swap the two elemets using a temporary variable;
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                temp=0;
            }
        }
        flag = sortflaggeras(arr, n);//check if the array is still unsorted.

    }
}

void classarray::disparray(void)
{
    int i;
    cout<<"\n The sorted array is: \n";
    for(i=0;i<n;i++)//showing the sorted array.
    {
        cout<<" "<<arr[i];
    }
}