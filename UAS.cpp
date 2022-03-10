//Program Menggunakan Array untuk melakukan Shorting/Searching

#include <string>
#include <stdio.h>
#include <conio.h>
#define maks 20

int main(int argc, char const *argv[])
{
	struct tanggal{
		int tanggal, bulan, tahun;
	};
	struct data_mahasiswa{
		char nama[30];
		struct tanggal tgl_lahir;
	};
	struct data_mahasiswa dataku[maks];
	char tombol;
	int i, jumlah = 0;

	puts("\n\tDATA MAHASISWA : \n");
	do{
		printf("Nama : ");
		gets(dataku[jumlah].nama);
		printf("Tanggal Lahir (tgl-bulan-tahun) : ");
		scanf("%d-%d-%d", &dataku[jumlah].tgl_lahir.tanggal,
			&dataku[jumlah].tgl_lahir.bulan,
			&dataku[jumlah].tgl_lahir.tahun);

		//hapus sisa data dalam penampung keyboard
		fflush(stdin);
			jumlah++;
			printf("\nMasih ada data lagi [Y/T] ? ");
			tombol = toupper(getch());
			while(!(tombol == 'T' || tombol == 'Y'))
				tombol == toupper(getch());
			printf("%c\n\n", tombol);
	}

		while(tombol == 'Y');
		printf("\nDATA MAHASISWA\n");
		printf("NAMA                TANGGAL LAHIR\n");

		for(i = 0; i < jumlah; i++)
			printf("\n%-21s %d-%d-%d", dataku[i].nama,
					dataku[i].tgl_lahir.tanggal,
					dataku[i].tgl_lahir.bulan,
					dataku[i].tgl_lahir.tahun);

	printf("\n\n");
	system("PAUSE");
	return 0;
}
