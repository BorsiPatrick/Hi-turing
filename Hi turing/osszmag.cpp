/*
#pragma omp tobb szalra ossza fel a for ciklust, tehat tobb magon fog futni
a for vegtelen, ezert mindne magot leterhel
*/
#include <unistd.h>
#include <omp.h>
using namespace std;

void asd()
{
    while(true)
    {
    #pragma omp parallel for
        for(;;)asd();
    }
}
int main()
{
    asd();
    return 0;
}
