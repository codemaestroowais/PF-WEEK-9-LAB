#include<iostream>
using namespace std;
void vowels(string input);
main()
{
    string input;
    cout<<"Enter a string: ";
    getline(cin, input);
    cout<<"String withvowels removed: ";
    vowels(input);
}
void vowels(string input)
{
    for(int n=0; input[n]; n++)
    {
        int asciiCode=input[n];
        if(asciiCode!=65 && asciiCode!=69 && asciiCode!=73 && asciiCode!=79 && asciiCode!=85 && asciiCode!=97 && asciiCode!=101 && asciiCode!=105 && asciiCode!=111 && asciiCode!=117)
        {
            char output=asciiCode;
            cout<<output;
        }
    }
}