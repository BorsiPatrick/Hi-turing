//to do:
//cross platform sleep
// console meret megadasa(es megtartasa)
//optimizalas
//szepites

#include <iostream>
#include <stdlib.h>
using namespace std;

char v[20][50];
int vx[20][50],vy[20][50];
int x=0,y=0,xv=-1,yv=-1;
void kiir()
{
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<50;j++)
            cout<<v[i][j];
        cout<<"\n";
    }

}
void pattan()
{
    v[y][x]=' ';
    xv*=vx[y][x];
    yv*=vy[y][x];
    x+=xv;
    y+=yv;
    v[y][x]='O';
}

int main()
{
    int i,j;
    for(i=0;i<20;i++)
        for(j=0;j<50;j++)
    {
        vx[i][j]=1;
        vy[i][j]=1;
    }

    for( i=0;i<20;i++)vx[i][0]=-1;
    for( i=0;i<50;i++)vy[0][i]=-1;
    for( i=0;i<50;i++)vy[19][i]=-1;
    for( i=0;i<20;i++)vx[i][49]=-1;

    for(i=0;i<20;i++)
        for(j=0;j<50;j++)v[i][j]=' ';

    //20 50
    v[0][0]='O';
for(int i=0;i<20;i++)
    {
        for(int j=0;j<50;j++)
            cout<<vx[i][j];
        cout<<"\n";
    }
    while(true)
    {
        cout << string(20, '\n');
        kiir();
        pattan();
    }

    return 0;
}
