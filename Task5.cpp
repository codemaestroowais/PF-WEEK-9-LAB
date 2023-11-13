#include<iostream>
using namespace std;
bool isAlreadyEntered (int arr[], int size, int nperline);
main()
{
    int size=0;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" numbers, one per line."<<endl;
    for(int i=0; i<n; i++)
    {
        int nperline;
        cin>>nperline;
        if(isAlreadyEntered(arr, size, nperline))
        {
            cout<<"Already Entered: "<<nperline<<endl;
        }
        else
        {
            arr[size]=nperline;
            size++;
        }
    }
    cout<<"Unique numbers entered: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
bool isAlreadyEntered (int arr[], int size, int nperline)
{
    for(int i=0; i<=size; i++)
    {
        if(arr[i]==nperline)
        {
            return true;
        }
    }
        return false;
}