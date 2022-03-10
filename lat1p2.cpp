//Latihan 1 Part 2 Memunculkan integer

#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 52;
	float b;
	b = a/3;
	printf("Nilai a/3 adalah %f\n", b);

	b=(float) a/2;
	printf("Nilai b = (float) a/3 adalah %f\n", b);
	system("PAUSE");
	return EXIT_SUCCESS;
}
