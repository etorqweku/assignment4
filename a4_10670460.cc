#include <iostream>

using namespace std;

int gcd(int x1,int x2)
{

if(x2!=0)
    return gcd(x2,x1%x2);
else
    return x1;
}

int main()

{
    int x1,x2;
    cout << "Please enter two integers:" << endl;
    cin >>x1>>x2;

    cout <<"The GCD of "<<x1<<" and "<<x2<<" is "<<gcd(x1,x2);
    return 0;
}
