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
