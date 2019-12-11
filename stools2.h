
using namespace std;

template <typename placeholder1>


//Function to check if a given array is sorted or not in ascending order.
int sortflaggeras (placeholder1 arr[], int size)
{
    int val=0, j;
    for(j=0;j<size-1;j++)
    {
        if(arr[j+1]<arr[j])
            val = 1;
    }
    return val;
}

template <typename placeholder2>
//Function to check if a given integer array is sorted or not in descending order.
int sortflaggerdes(placeholder2 arr[], int size)
{
    int val=0, j;
    for(j=0;j<size-1;j++)
    {
        if(arr[j+1]>arr[j])
            val = 1;
    }
    return val;
}

//Function to round a given floating point number.
int roundfloat(float num)
{
    int lastdigitf(float num);
    int num2=num;
    float diff=num-num2;
    if(diff>=0 && diff<0.5)
        return num2;
    else if(diff<1 && diff>0.5)
        return num2+1;
    else if(diff==0.5)
    {
        if(lastdigitf(num)%2==0)
            return num2;
        else if(lastdigitf(num)%2!=0)
            return num2+1;
    }
}

//Function to check the last digit of a floating point number.
int lastdigitf(float num)
{
    int rem, num2;
    num2 = num;
    rem = num2 % 10;
    return rem;
}
