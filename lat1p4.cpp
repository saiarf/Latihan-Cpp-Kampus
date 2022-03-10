#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <iostream>

int main(int argc, char const *argv[])
{
	printf("===========================================\n");
	printf("=                LATIHAN 1.B              =\n");
	printf("=       ALGORITMA DAN PEMROGRAMAN II      =\n");
	printf("         OLEH: MUHAMAD SAIFUL ARIF        =\n");
	printf("=            FAKULTAS TEKNIK              =\n");
	printf("= UNIVERSITAS MUHAMMADIYAH PROF. DR HAMKA =\n");
	printf("===========================================\n");
	
	int panjang, lebar;
	float luas;
	printf("\n");
	printf("===========================================\n");
	printf("PROGRAM PENCARI LUAS PERSEGI PANJANG\n");
	printf("===========================================\n");
	printf("Masukan Panjang : ");
	scanf("%d", &panjang);
	printf("Masukan Lebar : ");
	scanf("%d", &lebar);
	luas = panjang*lebar;
	printf("==========================================\n");
	printf("Luasnya adalah : %7.2f\n", luas);
	printf("==========================================\n");
	system("PAUSE");
	return EXIT_SUCCESS;
}
