//Fungsi Rekursif

#include <stdio.h>
#include <conio.h>
#include <iostream>

 validasi(int x){
	if(x >= 100){
		scanf("%d", &x);
		validasi(x);
	}
	return x;
}

int main(int argc, char const *argv[])
{
	int y = 125;
	printf("\nMasukan angka kurang dari 100 : \n");
	validasi(y);
	printf("\nTerima Kasih\n");

	system("PAUSE");
	return 0;
}
