#include<iostream>
using namespace std;
void jazzifiedChords(int n, string arr[]);
main()
{
    int n;
    cout<<"Enter the number of chords: ";
    cin>>n;
    string arr[n];
    cout<<"Enter "<<n<<" chords, one per line:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    jazzifiedChords(n, arr);
    
}
void jazzifiedChords(int n, string arr[])
{
    for(int i=0; i<n; i++)
    {
        if(arr[i].empty() || arr[i].back()!='7')
        {
            arr[i] += "7";
        }
    }
     cout<<"Jazzified chords: [";
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i];
        if(i<n-1)
        {
           cout<<", "<<" ";
        }
    }
    cout<<"]";
}