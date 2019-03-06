/*
"<<" operator egy bit-el tolja el az int erteket, amig ez !=0, meg lehet tolni, tehat nem mertuk fel a teljes int hosszat
mikor 0-lesz, vegigertunk
*/
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
