#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter a word: ";
    cin>>word;
    for(int n=0; word[n]!='\0'; n++)
    {
        cout<<word[n]<<" found at position "<<n<<endl;
    }
}