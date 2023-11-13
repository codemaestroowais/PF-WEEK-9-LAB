#include<iostream>
using namespace std;
int findLargestNumber(int n, int arr[]);
main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" numbers, one per line:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The largest number entered is: "<<findLargestNumber(n, arr);
}
int findLargestNumber(int n, int arr[])
{
    int maxNumber=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>maxNumber)
        {
            maxNumber=arr[i];
        }
    }
    return maxNumber;
}