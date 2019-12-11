// C++ program to randonmly generate an array of n-elements (n < 100 and n is defined by the user) and
// sort the generated array in an ascending order using what I hope is an insertion-sort algorithm
// using OOP to encapsulate the data inside a class-object.
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <conio.h>
#include "stools2.h"


using namespace std;

class classarray
{
    private:
        int n;
        int arr[100];
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
    cout<<"\n Randomly generating the elements of the array: \n";
    srand (time(NULL));
    for(i=0;i<n;i++) //loop to enter elements of the array.
    {
        arr[i]=(rand()%1000)+1; //auto-inputting the elements.
        cout<<" "<<arr[i]<<"\n";
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

int main()
{
    classarray arr1;
    arr1.enterarray();
    arr1.disparray();
    getch();
    return 0;
}