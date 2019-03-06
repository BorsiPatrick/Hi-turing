#include <iostream>
#include <math.h>

using namespace std;

double tavolsag(double PR[], double PRv[], int n)
{
	double osszeg = 0.0;

	for (int i = 0; i < n; i++)
	{
		ossz += (PRv[i]-PR[i])*(PRv[i]-PR[i]);
	}
	return sqrt(ossz);
}
void ki(double v[], int db)
{
	for (int i = 0; i < db; i++)
	{
		cout<<v[i]<<" ";
	}
}

int main(void)
{
	double L[4][4] =
	{
		{0.0, 0.0, 1.0 / 3.0, 0.0},
		{1.0, 1.0 / 2.0, 1.0 / 3.0, 1.0},
		{0.0, 1.0 / 2.0, 0.0, 0.0},
		{0.0, 0.0, 1.0 / 3.0, 0.0}
	};

	double PR[4] = {0.0, 0.0, 0.0, 0.0};
	double PRv[4] = {1.0/4.0,1.0/4.0,1.0/4.0,1.0/4.0};

	int i,j;
	while(true)
	{
		for (int i = 0; i<4; i++)
		{
			PR[i] = 0.0;
			for (int j = 0; j<4; j++)
				PR[i] += (L[i][j]*PRv[j]);
        }
		if(tavolsag(PR, PRv, 4)<0.0001)
            break;
		for(int i = 0; i<4; i++)
            PRv[i] = PR[i];	}
	ki(PR,4);
	return 0;
}
