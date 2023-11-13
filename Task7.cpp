#include<iostream>
using namespace std;
double resistanceCalculation(int n, double arr[]);
main()
{
    int n;
    cout<<"Enter the number of resistors in the series circuit: ";
    cin>>n;
    double arr[n];
    cout<<"Enter the resistance values (in ohms) of the "<<n<<" resistors, one per line: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The total resistance of the series circuit is "<<resistanceCalculation(n, arr)<<" ohms.";
}
double resistanceCalculation(int n, double arr[])
{
    double sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}