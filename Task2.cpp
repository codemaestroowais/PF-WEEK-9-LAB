#include<iostream>
using namespace std;
void reverseString (string word);
main()
{
    string string;
    cout<<"Enter a string: ";
    getline(cin, string);
    cout<<"Reserved string: ";
    reverseString(string);
}
void reverseString(string string)
{
    for(int wn=string.length(); wn>=0; wn--)
    {
        cout<<string[wn];
    }
}