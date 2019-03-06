#include <iostream>
using namespace std;



int main()
{
    int a=1,hossz=0;
    do
    {
        hossz++;
    }while(a<<=1);
    cout<<hossz<<"-hosszu a bit";
    return 0;
}
