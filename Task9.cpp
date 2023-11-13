#include<iostream>
using namespace std;
void payement(float q, float d, float n, float p, float total, float totalAmount);
main()
{
    float q;
    cout<<"Enter quarters: ";
    cin>>q;
    float d;
    cout<<"Enter dimes: ";
    cin>>d;
    float n;
    cout<<"Enter nickels: ";
    cin>>n;
    float p;
    cout<<"Enter pennies: ";
    cin>>p;
    float totalAmount;
    cout<<"Enter the total amount due: $";
    cin>>totalAmount;
    float total=(q*0.25)+(d*0.10)+(n*0.05)+(p*0.01);
    cout<<"Can you pay the amount? ";
    payement(q ,d ,n ,p ,total, totalAmount);
}
void payement(float q, float d, float n, float p, float total, float totalAmount)
{
    if(total>=totalAmount)
    {
        cout<<"Yes";
    }
    if(total<totalAmount)
    {
        cout<<"No";
    }
}