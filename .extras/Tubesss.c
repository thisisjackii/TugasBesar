#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define PANJANG 256

int Conversion, Arithmatic, Quiz, cnt, i, bin[32]; char tempunit, inisial, longunit, massaunit, timeunit; float angka; 

typedef struct {
	int orderNum;
} theMenu;

void header(){					// ====> HEADER KALKULATOR ILMIAH! <==== //
	printf	("\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf  ("\t\t  _____________________  \n");
	printf  ("\t\t |  _________________  | \n");
	printf  ("\t\t | |   AGAM & JACK   | | \n");
	printf  ("\t\t | |_________________| |  $$$$$$$$\\  $$$$$$\\  $$\\   $$\\ $$$$$$$$\\ $$\\   $$\\ $$\\   $$\\ $$$$$$$$\\ $$\\   $$\\  $$$$$$\\  $$\\   $$\\  $$$$$$\\  \n");
	printf  ("\t\t |  ___ ___ ___   ___  |  \\__$$  __|$$  __$$\\ $$ | $$  |\\__$$  __|$$ |  $$ |$$$\\  $$ |\\__$$  __|$$ |  $$ |$$  __$$\\ $$$\\  $$ |$$  __$$\\ \n");
	printf  ("\t\t | | 7 | 8 | 9 | | + | |     $$ |   $$ /  $$ |$$ |$$  /    $$ |   $$ |  $$ |$$$$\\ $$ |   $$ |   $$ |  $$ |$$ /  $$ |$$$$\\ $$ |$$ /  \\__|\n");
	printf  ("\t\t | |___|___|___| |___| |     $$ |   $$$$$$$$ |$$$$$  /     $$ |   $$ |  $$ |$$ $$\\$$ |   $$ |   $$ |  $$ |$$$$$$$$ |$$ $$\\$$ |$$ |$$$$\\ \n");
	printf  ("\t\t | | 4 | 5 | 6 | | - | |     $$ |   $$  __$$ |$$  $$<      $$ |   $$ |  $$ |$$ \\$$$$ |   $$ |   $$ |  $$ |$$  __$$ |$$ \\$$$$ |$$ |\\_$$ |\n");
	printf  ("\t\t | |___|___|___| |___| |     $$ |   $$ |  $$ |$$ |\\$$\\     $$ |   $$ |  $$ |$$ |\\$$$ |   $$ |   $$ |  $$ |$$ |  $$ |$$ |\\$$$ |$$ |  $$ |\n");
	printf  ("\t\t | | 1 | 2 | 3 | | x | |     $$ |   $$ |  $$ |$$ | \\$$\\    $$ |   \\$$$$$$  |$$ | \\$$ |   $$ |   \\$$$$$$  |$$ |  $$ |$$ | \\$$ |\\$$$$$$  |\n");
	printf  ("\t\t | |___|___|___| |___| |     \\__|   \\__|  \\__|\\__|  \\__|   \\__|    \\______/ \\__|  \\__|   \\__|    \\______/ \\__|  \\__|\\__|  \\__| \\______/ \n");
	printf  ("\t\t | | . | 0 | = | | / | | \n");
	printf  ("\t\t | |___|___|___| |___| | \n");
	printf  ("\t\t |_____________________| \n\n");
	printf	("\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
}

void temprConv(float *tempra, float* firstRes, float* secondRes, char *tempraUnit, char* firstResUnit, char* secondResUnit){
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

//void systemConv(int *inputangka, int* firstRes, int* secondRes, int* thirdRes, char *inisialisasi, char* firstResInitial, char* secondResInitial, char* thirdResInitial){
//	switch(*inisialisasi){
//		case 'd': case 'D':
//			cnt=0;     
//    		while(inputangka>0)
//    		{
//        		bin[cnt] = *inputangka%2;
//        		*inputangka = *inputangka/2;
//        		cnt++;
//    		}
//    		for(i=(cnt-1); i>=0; i--)
//        		*firstRes = bin[i]; *firstResInitial = 'B'; //printf
//			*secondRes = *inputangka + 273.15; *secondResInitial = 'O';
//			*thirdRes = *inputangka + 273.13; *thirdResInitial = 'H';
//			break;
//		case 'b': case 'B':
//			*firstRes = *inputangka - 273.15; *firstResInitial = 'C';
//			*secondRes = (*inputangka * 1.8) + 32; *secondResInitial = 'F';
//			break;
//		case 'o': case 'O':
//			*firstRes = (*inputangka * 1.8) + 32; *firstResInitial = 'F';
//			*secondRes = *inputangka + 273.15; *secondResInitial = 'K';
//			break; 
//		case 'h': case 'H':
//		*firstRes = (*inputangka * 1.8) + 32; *firstResInitial = 'F';
//		*secondRes = *inputangka + 273.15; *secondResInitial = 'K';
//		break;
//		default:
//			break;
//	}
//}

void numSys(int *input, int* conv1, int* conv2, int* conv3, char* numType){
	switch(*numType){
		case 'D':
			
		case 'B':
			
		case 'O':
			
		case 'H':
			
		default: break;
	}
}

void longConv(float *inputangka, float* firstRes, float* secondRes, float* thirdRes, float* fourRes, float* fivRes, float* sixRes, char *LongUnit, char* firstResUnit, char* secondResUnit, char* thirdResUnit, char* fourResUnit, char* fivResUnit, char* sixResUnit){
	switch(*LongUnit){
		case 'c': case 'C':
			*firstRes = *inputangka / 100; *firstResUnit = 'X';
			*secondRes = *inputangka / 100000; *secondResUnit = 'K';
			*thirdRes = *inputangka * 10; *thirdResUnit = 'm';
			*fourRes = *inputangka / 1000; *fourResUnit = 'D';
			*fivRes = *inputangka / 10000; *fivResUnit = 'H';
			*sixRes = *inputangka / 10; *sixResUnit = 'd';
			break;
		case 'x': case 'X': //X adalah meter
			*firstRes = *inputangka * 100; *firstResUnit = 'C';
			*secondRes = *inputangka / 1000; *secondResUnit = 'K';
			*thirdRes = *inputangka * 1000; *thirdResUnit = 'm';
			*fourRes = *inputangka / 10; *fourResUnit = 'D';			
			*fivRes = *inputangka / 100; *fivResUnit = 'H';
			*sixRes = *inputangka * 10; *sixResUnit = 'd';
			break;
		case 'k': case 'K':
			*firstRes = *inputangka * 100000; *firstResUnit = 'C';
			*secondRes = *inputangka * 1000; *secondResUnit = 'X';
			*thirdRes = *inputangka * 1000000; *thirdResUnit = 'm';
			*fourRes = *inputangka * 100; *fourResUnit = 'D';			
			*fivRes = *inputangka * 10; *fivResUnit = 'H';
			*sixRes = *inputangka * 10000; *sixResUnit = 'd';
			break; 
		case 'm': case 'M':
			*firstRes = *inputangka / 10; *firstResUnit = 'C';
			*secondRes = *inputangka / 1000; *secondResUnit = 'X';
			*thirdRes = *inputangka / 1000000; *thirdResUnit = 'K';
			*fourRes = *inputangka / 10000; *fourResUnit = 'D';			
			*fivRes = *inputangka / 100000; *fivResUnit = 'H';
			*sixRes = *inputangka / 100; *sixResUnit = 'd';
			break; 
		case 'D':
			*firstRes = *inputangka * 1000; *firstResUnit = 'C';
			*secondRes = *inputangka * 10; *secondResUnit = 'X';
			*thirdRes = *inputangka / 100; *thirdResUnit = 'K';
			*fourRes = *inputangka * 10000; *fourResUnit = 'm';			
			*fivRes = *inputangka / 10; *fivResUnit = 'H';
			*sixRes = *inputangka * 100; *sixResUnit = 'd';
			break; 
		case 'd':
			*firstRes = *inputangka * 10; *firstResUnit = 'C';
			*secondRes = *inputangka / 10; *secondResUnit = 'X';
			*thirdRes = *inputangka / 10000; *thirdResUnit = 'K';
			*fourRes = *inputangka * 100; *fourResUnit = 'm';			
			*fivRes = *inputangka / 1000; *fivResUnit = 'H';
			*sixRes = *inputangka / 100; *sixResUnit = 'D';
			break; 
		case 'h': case 'H':
			*firstRes = *inputangka * 10000; *firstResUnit = 'C';
			*secondRes = *inputangka * 100; *secondResUnit = 'X';
			*thirdRes = *inputangka / 10; *thirdResUnit = 'K';
			*fourRes = *inputangka * 10; *fourResUnit = 'D';			
			*fivRes = *inputangka * 100000; *fivResUnit = 'm';
			*sixRes = *inputangka * 1000; *sixResUnit = 'd';
			break; 
		default:
			break;
	}
}

void massaConv(float *inputangka, float* firstRes, float* secondRes, float* thirdRes, float* fourRes, char *MassaUnit, char* firstResUnit, char* secondResUnit, char* thirdResUnit, char* fourResUnit){
	switch(*MassaUnit){
		case 'k': case 'K':
			*firstRes = *inputangka * 1000; *firstResUnit = 'g';
			*secondRes = *inputangka * 1000000; *secondResUnit = 'm';
			*thirdRes = *inputangka * 1000000000; *thirdResUnit = 'n';
			*fourRes = *inputangka * 35.274; *fourResUnit = 'o';
			break;
		case 'g': case 'G':
			*firstRes = *inputangka / 1000; *firstResUnit = 'k';
			*secondRes = *inputangka * 1000; *secondResUnit = 'm';
			*thirdRes = *inputangka * 1000000; *thirdResUnit = 'n';
			*fourRes = *inputangka / 28.35; *fourResUnit = 'o';
			break;
		case 'm': case 'M':
			*firstRes = *inputangka / 1000000; *firstResUnit = 'k';
			*secondRes = *inputangka / 1000; *secondResUnit = 'g';
			*thirdRes = *inputangka * 1000; *thirdResUnit = 'n';
			*fourRes = *inputangka / 28350; *fourResUnit = 'o';
			break; 
		case 'n': case 'N':
			*firstRes = *inputangka / 1000000000; *firstResUnit = 'k';
			*secondRes = *inputangka / 1000000; *secondResUnit = 'g';
			*thirdRes = *inputangka / 1000; *thirdResUnit = 'm';
			*fourRes = *inputangka / 2.8350000000; *fourResUnit = 'o';
			break; 
		case 'o': case 'O':
			*firstRes = *inputangka / 35.274; *firstResUnit = 'k';
			*secondRes = *inputangka * 28.35; *secondResUnit = 'g';
			*thirdRes = *inputangka * 28350; *thirdResUnit = 'm';
			*fourRes = *inputangka * 2.8350000000; *fourResUnit = 'n';
			break; 
		default:
			break;
	}
}

void timeConv(float *inputangka, float* firstRes, float* secondRes, float* thirdRes, float* fourRes, char *WaktuUnit, char* firstResUnit, char* secondResUnit, char* thirdResUnit, char* fourResUnit){
	switch(*WaktuUnit){
		case 'd': case 'D':
			*firstRes = *inputangka * 1000000; *firstResUnit = 'K';
			*secondRes = *inputangka * 1000; *secondResUnit = 'L';
			*thirdRes = *inputangka / 60; *thirdResUnit = 'M';
			*fourRes = *inputangka / 3600; *fourResUnit = 'J';
			break;
		case 'k': case 'K':
			*firstRes = *inputangka / 1000000; *firstResUnit = 'D';
			*secondRes = *inputangka / 1000; *secondResUnit = 'L';
			*thirdRes = *inputangka / 60000000; *thirdResUnit = 'M';
			*fourRes = *inputangka / 3.6000000000; *fourResUnit = 'J';
			break;
		case 'l': case 'L':
			*firstRes = *inputangka / 1000; *firstResUnit = 'D';
			*secondRes = *inputangka * 1000; *secondResUnit = 'K';
			*thirdRes = *inputangka / 60000; *thirdResUnit = 'M';
			*fourRes = *inputangka / 3.6000000; *fourResUnit = 'J';
			break; 
		case 'm': case 'M':
			*firstRes = *inputangka * 60; *firstResUnit = 'D';
			*secondRes = *inputangka * 60000000; *secondResUnit = 'K';
			*thirdRes = *inputangka * 60000; *thirdResUnit = 'L';
			*fourRes = *inputangka / 60; *fourResUnit = 'J';
			break; 
		case 'j': case 'J':
			*firstRes = *inputangka * 3600; *firstResUnit = 'D';
			*secondRes = *inputangka * 3.6000000000; *secondResUnit = 'K';
			*thirdRes = *inputangka * 60; *thirdResUnit = 'M';
			*fourRes = *inputangka * 3.6000000; *fourResUnit = 'L';
			break; 
		default:
			break;
	}
}


void Pilih_Suhu(float *tempra, char *tempraUnit){
	printf	("\n\t\t\t\t<<<<<<<<<<<<<<<  Anda memilih opsi konversi suhu  >>>>>>>>>>>>>>>"); 
	puts	("\n\n\t\t\t\t\t|================== KONVERSI SUHU ==================|");
    printf	("\t\t\t\t\t Masukkan besaran suhu beserta satuannya (F, C, K) >> "); scanf("%f %c", tempra, tempraUnit);
	float tempraA, tempraB; char tempraUnitA, tempraUnitB;
	temprConv(tempra, &tempraA, &tempraB, tempraUnit, &tempraUnitA, &tempraUnitB);
	printf("\n\t\t\t\t\t\t%.3f %c\n\t\t\t\t\t\t%.3f %c", tempraA, tempraUnitA, tempraB, tempraUnitB);
}

//void Pilih_SistemBilangan(int *inputangka, char *inisialisasi){
//	printf	("\n\t\t\t\t<<<<<<<<<<<<<<<  Anda memilih opsi konversi sistem bilangan  >>>>>>>>>>>>>>>"); 
//	puts	("\n\n\t\t\t\t\t|================== KONVERSI SISTEM BILANGAN ==================|");
//    printf	("\t\t\t\t\t Masukkan angkanya dan inisialisasinya (D, B, O, H) >> "); scanf("%d %c", inputangka, inisialisasi);
//	int angka1, angka2, angka3; char inisialA, inisialB, inisialC;
//	systemConv(inputangka, &angka1, &angka2, &angka3, inisialisasi, &inisialA, &inisialB, &inisialC);
//	printf("\n\t\t\t\t\t\t%d %c\n\t\t\t\t\t\t%d %c\n\t\t\t\t\t\t%d %c", angka1, inisialA, angka2, inisialB, angka3, inisialC);
//}

void Pilih_Panjang(float *inputangka, char *LongUnit){
	printf	("\n\t\t\t\t<<<<<<<<<<<<<<<  Anda memilih opsi konversi panjang  >>>>>>>>>>>>>>>"); 
	puts	("\n\n\t\t\t\t\t|================== KONVERSI PANJANG ==================|");
    printf	("\t\t\t\t\t Masukkan panjang beserta satuannya (K, H, D, X, d, C, m) >> "); scanf("%f %c", inputangka, LongUnit);
	float LongA, LongB, LongC, LongD, LongE, LongF; char LongUnitA, LongUnitB, LongUnitC, LongUnitD, LongUnitE, LongUnitF;
	longConv(inputangka, &LongA, &LongB, &LongC, &LongD, &LongE, &LongF, LongUnit, &LongUnitA, &LongUnitB, &LongUnitC, &LongUnitD, &LongUnitE, &LongUnitF);
	printf("\n\t\t\t\t\t\t%.3f %c\n\t\t\t\t\t\t%.3f %c\n\t\t\t\t\t\t%.3f %c\n\t\t\t\t\t\t%.3f %c\n\t\t\t\t\t\t%.3f %c\n\t\t\t\t\t\t%.3f %c", LongA, LongUnitA, LongB, LongUnitB, LongC, LongUnitC, LongD, LongUnitD, LongE, LongUnitE, LongF, LongUnitF);
}

void Pilih_Massa(float *inputangka, char *MassaUnit){
	printf	("\n\t\t\t\t<<<<<<<<<<<<<<<  Anda memilih opsi konversi massa  >>>>>>>>>>>>>>>"); 
	puts	("\n\n\t\t\t\t\t|================== KONVERSI MASSA ==================|");
    printf	("\t\t\t\t\t Masukkan massa beserta satuannya (K, G, M, N, O) >> "); scanf("%f %c", inputangka, MassaUnit);
	float MassaA, MassaB, MassaC, MassaD; char MassaUnitA, MassaUnitB, MassaUnitC, MassaUnitD;
	massaConv(inputangka, &MassaA, &MassaB, &MassaC, &MassaD, MassaUnit, &MassaUnitA, &MassaUnitB, &MassaUnitC, &MassaUnitD);
	printf("\n\t\t\t\t\t\t%.3f %c\n\t\t\t\t\t\t%.3f %c\n\t\t\t\t\t\t%.3f %c\n\t\t\t\t\t\t%.3f %c", MassaA, MassaUnitA, MassaB, MassaUnitB, MassaC, MassaUnitC, MassaD, MassaUnitD);
}

void Pilih_Waktu(float *inputangka, char *WaktuUnit){
	printf	("\n\t\t\t\t<<<<<<<<<<<<<<<  Anda memilih opsi konversi waktu  >>>>>>>>>>>>>>>"); 
	puts	("\n\n\t\t\t\t\t|================== KONVERSI WAKTU ==================|");
    printf	("\t\t\t\t\t Masukkan waktu beserta satuannya (D, K, L, M, J) >> "); scanf("%f %c", inputangka, WaktuUnit);
	float WaktuA, WaktuB, WaktuC, WaktuD; char WaktuUnitA, WaktuUnitB, WaktuUnitC, WaktuUnitD;
	timeConv(inputangka, &WaktuA, &WaktuB, &WaktuC, &WaktuD , WaktuUnit, &WaktuUnitA, &WaktuUnitB, &WaktuUnitC, &WaktuUnitD);
	printf("\n\t\t\t\t\t\t%.3f %c\n\t\t\t\t\t\t%.3f %c\n\t\t\t\t\t\t%.3f %c\n\t\t\t\t\t\t%.3f %c", WaktuA, WaktuUnitA, WaktuB, WaktuUnitB, WaktuC, WaktuUnitC, WaktuD, WaktuUnitD);
}

void konversi(int *pilKonv){
	system ("cls");
	header();
	printf	("\n\t\t\t\t\t\t     <<<<<<<<<<<<<<<<<<<   Anda memilih opsi 1  >>>>>>>>>>>>>>>>>>>"); 
	puts	("\n\n\t\t\t\t\t\t   +================== PILIH KONFIGURASI KONVERSI ==================+");
	puts	("\t\t\t\t\t\t   |                   1. KONVERSI SUHU                             |");
	puts	("\t\t\t\t\t\t   |                   2. KONVERSI SISTEM BILANGAN                  |");
	puts	("\t\t\t\t\t\t   |                   3. KONVERSI PANJANG                          |");
	puts	("\t\t\t\t\t\t   |                   4. KONVERSI MASSA                   	    |");
	puts	("\t\t\t\t\t\t   |                   5. KONVERSI WAKTU                	    |");
    puts	("\t\t\t\t\t\t   +================================================================+");
    printf	("\t\t\t\t\t\t\t\t Pilih menu yang ingin Anda konversikan >> "); scanf("%d", pilKonv);
    switch(*pilKonv){
		case 1:
			Pilih_Suhu(&angka, &tempunit);
			break;
//		case 2:
//			Pilih_SistemBilangan(&angka, &inisial);
//			break;
		case 3:
			Pilih_Panjang(&angka, &longunit);
			break;
		case 4:
			Pilih_Massa(&angka, &massaunit);
			break;
		case 5:
			Pilih_Waktu(&angka, &timeunit);
			break;
		default:
			printf("Wrong input."); break;
	}
}

void aritmatika(int *pilAritm){
	system ("cls");
	header();
	printf("\n\t\t\t\t\t\t\t   <<<<<<<<<<<<<<<  Anda memilih opsi 2  >>>>>>>>>>>>>>>"); 
	puts	("\n\n\t\t\t\t\t\t   |================== PILIH KONFIGURASI ARITMATIKA ====================|");
	puts	("\t\t\t\t\t\t   |                          1. PENJUMLAHAN                            |");
	puts	("\t\t\t\t\t\t   |                          2. PENGURANGAN                            |");
	puts	("\t\t\t\t\t\t   |                          3. PERKALIAN                              |");
	puts	("\t\t\t\t\t\t   |                          4. PEMBAGIAN                  	        |");
    puts	("\t\t\t\t\t\t   +====================================================================+");
    printf	("\t\t\t\t\t\t\t\t   --> Pilih menu yang ingin anda hitung >> "); scanf("%d", pilAritm);
}

void materi(){ 
	system ("cls");
	header();
	FILE *f_teks;
	char string[PANJANG];
	char namafile[65];
	
	printf("\n\t\t\t\t\t<<<<<<<<<<<<<<<  Anda memilih opsi 3  >>>>>>>>>>>>>>>");
	puts	("\n\n\t\t\t\t|============== PILIH MATERI YANG INGIN ANDA PELAJARI ===================|");
	puts	("\t\t\t\t|          	=> SATUAN SUHU     --> Ketikan: suhu.txt                       |");
	puts	("\t\t\t\t|          	=> SISTEM BILANGAN --> Ketikan: sistembilangan.txt             |");
	puts	("\t\t\t\t|          	=> SATUAN PANJANG  --> Ketikan: panjang.txt                    |");
	puts	("\t\t\t\t|         	=> SATUAN MASSA    --> Ketikan: massa.txt             		   |");
	puts	("\t\t\t\t|          	=> SATUAN WAKTU    --> Ketikan: waktu.txt             		   |");
    puts	("\t\t\t\t+============================================================================+");
	printf("Nama file yang Anda pilih : ");
	scanf("%s", &namafile);
	system ("cls");

	if ((f_teks=fopen(namafile, "rt")) == NULL)
	{
		printf("File tak dapat dibuka!\r\n");
		exit(1);
	}

	while ((fgets(string, PANJANG, f_teks)) != NULL)
	{
		printf("%s\r", string);
	}
	fclose(f_teks); 
}

void Pilih_Menu(int *PilKonf){
	int columns = strtol(getenv("COLUMNS"), NULL, 10);
//	int fwidth = strlen("Hello") + (columns - strlen("Hello")) / 2;
//	printf("%*s\n", fwidth, "Hello");
	puts	("\n\n\t\t\t\t\t\t   +======================  PILIH KONFIGURASI  ======================+");
	puts	("\t\t\t\t\t\t   |                     1. KONFIGURASI KONVERSI                     |");
	puts	("\t\t\t\t\t\t   |                    2. KONFIGURASI ARITMATIKA                    |");
	puts	("\t\t\t\t\t\t   |                  3. MATERI KONFIGURASI KONVERSI                 |");
	puts	("\t\t\t\t\t\t   |                           4. QUIZ YUK!                          |");
    puts	("\t\t\t\t\t\t   +=================================================================+");
    printf	("\t\t\t\t\t\t\t\t  ---> Pilih menu yang Anda inginkan >> "); scanf("%d", PilKonf);
	switch(*PilKonf)
	{
		case 1:
			konversi(&Conversion);
			break;
		case 2:
			aritmatika(&Arithmatic);
			break;
		case 3: 
			materi();
			break;
		default:
			printf("Wrong input."); break;
	}
}

int main(){
	int numChoosed; char prompt;
	
	do{
		system("cls");
		header();
		Pilih_Menu(&numChoosed);
		printf("\nThe program is done. Would you like to retry? (y/n)");
		prompt = getch();
		while(!(prompt=='N'||prompt=='n'||prompt=='Y'||prompt=='y')){
			printf("\nWrong input!");
			prompt = getch();
		}
	}while(prompt=='Y'||prompt=='y');
	return 0;
}
