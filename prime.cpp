#include<iostream>
using namespace std;
int main()
{
int i,j,k=0;
cout<<"Enter Number to check prime : ";
cin>>j;
for ( i = 1; i <= j; i++)
{
    if (j%i==0)
    {
        k++;
    }
    //AR
}
if (k==2)
{
    cout<<"The Number "<<j<<" is prime number "<<endl;
}
else
cout<<"The Number "<<j<<" is not prime number ";
}