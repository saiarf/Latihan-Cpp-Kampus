#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int main(){
	char A;
	int angka1, angka2;
	float angka3;
	char nama[20];
	printf("Masukan Nama Anda : ");
	scanf("%s", &nama);
	printf("Masukan 2 angka secara berturut-turut dengan jarak spasi:");
	scanf("%d %d", &angka1, &angka2);
	printf("\n TERIMA KASIH %s\n", strupr(nama));
	angka3 = sin(angka1);
	printf("Nilai sinus dari %d adalah %4.2f\n", angka1, angka3);
	printf("Nilai cos dari %d adalah %4.2f\n", angka2, cos(angka2));
	puts("Tekan sembarang tombol untuk melanjutkan");

	system("PAUSE");
}