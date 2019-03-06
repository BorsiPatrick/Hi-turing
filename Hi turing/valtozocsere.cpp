#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"adja meg a es b valtozot \n";
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a="<<a<<" b="<<b;
    return 0;
}
