#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int panjang, lebar;
	float luas;
	printf("\n");
	printf("====================================\n");
	printf("PROGRAM PENCARI LUAS PERSEGI PANJANG\n");
	printf("====================================\n");
	printf("Masukan Panjang : ");
	scanf("%d", &panjang);
	printf("Masukan Lebar : ");
	scanf("%d", &lebar);
	luas = panjang*lebar;
	printf("====================================\n");
	printf("Luasnya adalah : %7.2f\n", luas);
	printf("====================================\n");
	getch();
	return 0;
}
