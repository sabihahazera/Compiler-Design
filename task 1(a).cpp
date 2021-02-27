
//convert the above sample program is given below that calculated the factorial of a given numbers into using loop and user defined function with return type


#include<iostream>
using namespace std;


int  Factorial(int n)
{
    int fact=1;

    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int n;

    cout<<"Enter a number to check factorial : ";
    cin>>n;
    cout<<"The factorial is "<<Factorial(n);


}
