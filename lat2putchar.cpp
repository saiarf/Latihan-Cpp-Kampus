#include <stdio.h>
#include <conio.h>

int main(){
	char A;
	int nilai1 = 20;
	float nilai2 = 2000.0;

	printf("Angka %d dapat ditampilkan dalam format %3d \n", nilai1, nilai1);
	printf("Angka %f dapat ditampilkan dalam format %8.3f", nilai2, nilai2);
	printf(" dan %-8.3f\n", nilai2 );
	puts("Tekan sembarang tombol untuk melanjutkan");
	getch();

}
