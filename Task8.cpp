#include<iostream>
using namespace std;
void arraysize(int n1, int n2, int arr1[], int arr2[]);
main()
{

    int n1;
    cout<<"Enter the number of elements for the first array (must be 2): ";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter "<<n1<<" elements for the first array, one per line: "<<endl;
    for(int i=0; i<n1; i++)
    {
        cin>>arr1[i];
    }
    int n2;
    cout<<"Enter the number of elements for the second array, one per line: ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter "<<n2<<" elements for the second array, one per line: "<<endl;
    for(int i=0; i<n2; i++)
    {
        cin>>arr2[i];
    }
    cout<<"Resulting array:";
    arraysize(n1, n2, arr1, arr2);
}
void arraysize(int n1, int n2, int arr1[], int arr2[])
{
    cout<<"["<<arr1[0]<<", ";
    for(int i=0; i<n2; i++)
    {
        cout<<arr2[i]<<", ";
    }
    cout<<arr1[1]<<"]";
}