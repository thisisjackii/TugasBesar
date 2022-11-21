#include "ADT.h"

// int main ()
// {
// 	clearScreen();
// 	welcomePage();
// 	return 0;
// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Conversion, Arithmatic, tempr; char tempunit;

typedef struct {
	int orderNum;
} theMenu;

void temprConv(int *tempra, int* firstRes, int* secondRes, char *tempraUnit, char* firstResUnit, char* secondResUnit){
	switch(*tempraUnit){
		case 'f': case 'F':
			*firstRes = (*tempra - 32) / 1.8; *firstResUnit = 'C';
			*secondRes = *tempra + 273.15; *secondResUnit = 'K';
			break;
		case 'k': case 'K':
			*firstRes = *tempra - 273.15; *firstResUnit = 'C';
			*secondRes = (*tempra * 1.8) + 32; *secondResUnit = 'F';
			break;
		case 'c': case 'C':
			*firstRes = (*tempra * 1.8) + 32; *firstResUnit = 'F';
			*secondRes = *tempra + 273.15; *secondResUnit = 'K';
			break; 
		default:
			break;
	}
}

void Pilih_Suhu(int *tempra, char *tempraUnit){
	printf	("\n\t\t\t\t<<<<<<<<<<<<<<<  Anda memilih opsi konversi suhu  >>>>>>>>>>>>>>>"); 
	puts	("\n\n\t\t\t\t\t|================== KONVERSI SUHU ==================|");
    printf	("\t\t\t\t\t Masukkan besaran suhu beserta satuannya (F, C, K) >> "); scanf("%d %c", tempra, tempraUnit);
	int tempraA, tempraB; char tempraUnitA, tempraUnitB;
	temprConv(tempra, &tempraA, &tempraB, tempraUnit, &tempraUnitA, &tempraUnitB);
	printf("\n\t\t\t\t\t\t%d %c\n\t\t\t\t\t\t%d %c", tempraA, tempraUnitA, tempraB, tempraUnitB);
}

void konversi(int *pilKonv){
	printf	("\n\t\t\t\t\t<<<<<<<<<<<<<<<  Anda memilih opsi 1  >>>>>>>>>>>>>>>"); 
	puts	("\n\n\t\t\t\t|================== PILIH KONFIGURASI KONVERSI ==================|");
	puts	("\t\t\t\t|                   1. KONVERSI SUHU                             |");
	puts	("\t\t\t\t|                   2. KONVERSI SISTEM BILANGAN                  |");
	puts	("\t\t\t\t|                   3. KONVERSI PANJANG                          |");
	puts	("\t\t\t\t|                   4. KONVERSI MASSA                   	 |");
	puts	("\t\t\t\t|                   5. KONVERSI WAKTU                	         |");
    puts	("\t\t\t\t+================================================================+");
    printf	("\t\t\t\t\t\tPilih menu yang ingin anda Konversikan >> "); scanf("%d", pilKonv);
    switch(*pilKonv){
		case 1:
			Pilih_Suhu(&tempr, &tempunit);
			break;
		default:
			printf("Wrong input."); break;
	}
}

void aritmatika(int *pilAritm){
	printf("\n\t\t\t\t\t<<<<<<<<<<<<<<<  Anda memilih opsi 2  >>>>>>>>>>>>>>>"); 
	puts	("\n\n\t\t\t\t|================== PILIH KONFIGURASI ARITMATIKA ====================|");
	puts	("\t\t\t\t|                   1. PENJUMLAHAN                    		     |");
	puts	("\t\t\t\t|                   2. PENGURANGAN                   		     |");
	puts	("\t\t\t\t|                   3. PERKALIAN                     		     |");
	puts	("\t\t\t\t|                   4. PEMBAGIAN                  		     |");
    puts	("\t\t\t\t+====================================================================+");
    printf	("\t\t\t\t\t\tPilih menu yang ingin anda hitung >> "); scanf("%d", pilAritm);
}

void Pilih_Menu(int *PilKonf){
	int columns = strtol(getenv("COLUMNS"), NULL, 10);
	int fwidth = strlen("Hello") + (columns - strlen("Hello")) / 2;
	printf("%*s\n", fwidth, "Hello");
	puts	("\n\t\t\t\t|===================== PILIH KONFIGURASI =======================|");
	puts	("\t\t\t\t|                    1. KONFIGURASI KONVERSI                    |");
	puts	("\t\t\t\t|                   2. KONFIGURASI ARITMATIKA                   |");
    puts	("\t\t\t\t+===============================================================+");
    printf	("\t\t\t\t\t\tPilih menu yang ingin anda Kalkulasikan >> "); scanf("%d", PilKonf);
	switch(*PilKonf)
	{
		case 1:
			konversi(&Conversion);
			break;
		case 2:
			aritmatika(&Arithmatic);
			break;
		default:
			printf("Wrong input."); break;
	}
}

int main(){
	int numChoosed;
	Pilih_Menu(&numChoosed);
}
