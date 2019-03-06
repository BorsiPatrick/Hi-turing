/*
vegtelen ciklus, rekurzivan hivja meg magat vegtelenszer >> 100%ban terhel 1 magot
*/
#include <unistd.h>
using namespace std;

void asd()
{
    while(true)
    {
        for(;;)asd();
    }
}
int main()
{
    asd();
    return 0;
}
