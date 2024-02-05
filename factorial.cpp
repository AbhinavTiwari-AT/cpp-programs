#include<iostream>
using namespace std;
 
int factorial (int n)
{
    int fact=1,i;
    for(i=0;i<=n;i++)
    {
        fact =fact*i;
    }
    return fact;
}
int main()
{
    int num;
    cin>>num;
    cout<<"the factorial is"<<factorial(num);
    return 0;
}