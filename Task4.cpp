#include<iostream>
using namespace std;
void printReverseArray(int arr[], int n);
main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    
    if (n<=0)
    cout<<"Invalid input. Number of elements should be greater than 0. ";
       int arr[n];
       cout<<"Enter "<<n<<" numbers, one per line: "<<endl;
       for (int i=0; i<n; i++)
       {
            cin>>arr[i];
       }
       cout<<"Numbers in reverse order: ";
       printReverseArray(arr,n);

}
void printReverseArray(int arr[], int n)
{
    for(int f=n-1; f>=0; f--)
    {
        cout<<arr[f]<<" ";
    }
    cout<<endl;
}