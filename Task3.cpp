#include<iostream>
using namespace std;
main()
{
    string string;
    cout<<"Enter a String: ";
    getline(cin, string);
    cout<<"Shifted String: ";

    for(int n=0; string[n]!='\0'; n++)
    {
        if(string[n]=='Z')
        {
            cout<<'A';
        }
        if(string[n]=='z')
        {
            cout<<'a';
        }
        if(string[n]!='Z' && string[n]!='z')
        {
        int asciiCode=string[n];
        asciiCode=asciiCode+1;
        char character=asciiCode;
        cout<<character;
        }
    }
}