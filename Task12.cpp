#include<iostream>
using namespace std;
bool arrayCalculation(int n, int arr[]);
main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of the array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    if(arrayCalculation(n, arr))
    {
        cout<<"The array is special";
    }
    else
    {
        cout<<"The array is not special";
    }
}
bool arrayCalculation(int n, int arr[])
{
    for(int i=0; i<n; i++)
    {
        if(i%2==0 && arr[i]%2!=0)
        {
            return false;
        }
        if(i%2!=0 && arr[i]%2==0)
        {
            return false;
        }
    }
    return true;
}