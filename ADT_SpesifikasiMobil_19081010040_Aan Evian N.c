#include <stdio.h>
#include <string.h>
//Program Abstract Data Type Spesifikasi Mobil
struct data_mobil{
	int tahun_pembuatan,kapasitas_mesin;
	char nama_mobil[10];
	char merk_mobil[10];
};
void add ();
void view();
void main (add,view){
	struct data_mobil spesifikasi;
	
	printf("Masukan Nama Mobil :");
	scanf("%s",&spesifikasi.nama_mobil);
	
	printf("Masukan Merk Mobil :");
	scanf("%s",&spesifikasi.merk_mobil);
	
	printf("Masukan Kapasitas Mesin :");
	scanf("%d",&spesifikasi.kapasitas_mesin);
	
	printf("Masukan Tahun Pembuatan :");
	scanf("%d",&spesifikasi.tahun_pembuatan);
	
	printf("\n");
	printf("===============================\n");
	printf("===PROGRAM SPESIFIKASI MOBIL===\n");
	printf("===============================\n");
	
	printf("Nama Mobil      :%s\n",spesifikasi.nama_mobil);
	printf("Merk Mobil      :%s\n",spesifikasi.merk_mobil);
	printf("Kapasitas Mesin :%d",spesifikasi.kapasitas_mesin);printf(" CC\n");
	printf("Tahun Pembuatan :%d\n",spesifikasi.tahun_pembuatan);
	
	printf("\n\n");
	printf("Created By : Aan Evian Nanda\n");
	printf("Npm :19081010040");
	return 0;
}
