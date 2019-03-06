/*

sleep() fugveny standby-ba rakja a programot,
mivel ez egy vegtelen ciklusban van meghivva, 
ezert a program vegig sleep-elni fog,ezert 0%-ban terheli a gepet

*/

#include <unistd.h>
#include <stdio.h>
using namespace std;

int main()
{
    for(;;)Sleep(1);
    return 0;
}
