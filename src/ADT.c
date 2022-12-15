#include "ADT.h"

int score, numberOfQuestions; 

void header(){				// ====> HEADER KALKULATOR ILMIAH! <==== //
	system("cls");
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

void headerakhir(){				// ====> HEADER AKHIR KALKULATOR ILMIAH! <==== //
	system("cls");
	printf	("\n\n\n\n\n\n\n\n\n\n\n\n\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf  ("\t\t     _____________________  \n");
	printf  ("\t\t    |  _________________  | \n");
	printf  ("\t\t    | |   AGAM & JACK   | | \n");
	printf  ("\t\t    | |_________________| |  $$$$$$$$\\                  $$\\                               $$\\   $$\\                    $$\\ $$\\         \n");
	printf  ("\t\t    |  ___ ___ ___   ___  |  \\__$$  __|                 \\__|                              $$ | $$  |                   \\__|$$ |       \n");
	printf  ("\t\t    | | 7 | 8 | 9 | | + | |     $$ | $$$$$$\\   $$$$$$\\  $$\\ $$$$$$\\$$$$\\   $$$$$$\\        $$ |$$  / $$$$$$\\   $$$$$$$\\ $$\\ $$$$$$$\\     \n");
	printf  ("\t\t    | |___|___|___| |___| |     $$ |$$  __$$\\ $$  __$$\\ $$ |$$  _$$  _$$\\  \\____$$\\       $$$$$  /  \\____$$\\ $$  _____|$$ |$$  __$$\\     \n");
	printf  ("\t\t    | | 4 | 5 | 6 | | - | |     $$ |$$$$$$$$ |$$ |  \\__|$$ |$$ / $$ / $$ | $$$$$$$ |      $$  $$<   $$$$$$$ |\\$$$$$$\\  $$ |$$ |  $$ |  \n");
	printf  ("\t\t    | |___|___|___| |___| |     $$ |$$   ____|$$ |      $$ |$$ | $$ | $$ |$$  __$$ |      $$ |\\$$\\ $$  __$$ |\\\\____$$\\ $$ |$$ |  $$ |  \n");
	printf  ("\t\t    | | 1 | 2 | 3 | | x | |     $$ |\\$$$$$$$\\ $$ |      $$ |$$ | $$ | $$ |\\$$$$$$$ |      $$ | \\$$\\$$$$$$$  |$$$$$$$  |$$ |$$ |  $$ |  \n");
	printf  ("\t\t    | |___|___|___| |___| |     \\__| \\_______|\\__|      \\__|\\__| \\__| \\__| \\_______|      \\__|  \\__|\\_______|\\_______/ \\__|\\__|  \\__|   \n");
	printf  ("\t\t    | | . | 0 | = | | / | | \n");
	printf  ("\t\t    | |___|___|___| |___| | \n");
	printf  ("\t\t    |_____________________| \n\n");
	printf	("\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
}

void tampilanilai()
{
	printf	("\n\n\n\t\t\t\t\t\t        __| |____________________________________________| |__  \n");
	printf	("\t\t\t\t\t\t       (__   ____________________________________________   __) \n");
	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
	printf	("\t\t\t\t\t\t          | |           NILAI ANDA ADALAH: %d/%d          | |     \n", score, numberOfQuestions);
	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
	printf	("\t\t\t\t\t\t        __| |____________________________________________| |__  \n");
	printf	("\t\t\t\t\t\t       (__   ____________________________________________   __) \n");
	printf	("\t\t\t\t\t\t          | |                                            | |    \n"); 
}

void ketnilai()
{
	if (score >= 8 && score <= 10){
		printf	("\n\t\t\t\t\t\t\t---> Anda mendapatkan nilai yang sempurna! Selamat! <---");
	} else if(score >= 5 && score < 8){
		printf	("\n\t\t\t\t\t\t    ---> Nilai Anda kurang sempurna :(, Ayo coba lagi Quiznya! <---");
	} else {
		printf	("\n\t\t\t\t\t   ---> Nilai Anda tidak sempurna ;(, Jangan menyerah! Ayo coba lagi Quiznya! <---");
	}
}

void loadingBar(){
    system("color F0");
    char a = 177, b = 219;
	
	system ("cls");
	header();
    printf("\n\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t         Loading...\n\n");
    printf("\t\t\t\t\t\t\t\t\t");
  
    for (int i = 0; i < 26; i++)
        printf("%c", a);
  

    printf("\r");
    printf("\t\t\t\t\t\t\t\t\t");
  
    for (int i = 0; i < 26; i++) {
        printf("%c", b);
  
        Sleep(50);
    }
}

void riwayat()
{
	FILE *pf;
	int nilai, a, length = 256;
	char string[length];
	
	system ("cls");

	if ((pf=fopen("RIWAYAT.txt", "a+")) == NULL)
	{
		printf("\t\t\t\t\t\t --> File gagal dibuka!\n");
		exit(1);
	}
	printf("\n\n\t\t\t\t\t\t\t\t       --> Isi file Riwayat :\r\n\n");
	
	while(fgets(string, length, pf)){
		a++;
		
		printf("\t\t\t\t\t\t\t\t    ==> %d. %s\r", a, string);
	}
	fclose(pf); 
}

void hapusriwayat(){
	FILE *hapus;
	
	hapus = fopen("RIWAYAT.txt", "w");
	fclose(hapus);
}

//void menuChoice(int* choice){
//	puts	("\n\n\t\t\t\t\t\t    +==========================  PILIH MENU  =========================+");
//    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
//	puts	("\t\t\t\t\t\t    |                     1. KONFIGURASI KONVERSI                     |");
//    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
//	puts	("\t\t\t\t\t\t    |                    2. KONFIGURASI ARITMATIKA                    |");
//    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
//	puts	("\t\t\t\t\t\t    |                  3. MATERI KONFIGURASI KONVERSI                 |");
//    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
//	puts	("\t\t\t\t\t\t    |                           4. QUIZ YUK!                          |");
//    puts	("\t\t\t\t\t\t    +=================================================================+");
//    printf	("\t\t\t\t\t\t\t\t   ---> Pilih menu yang Anda inginkan >> "); scanf("%d", choice);
//}

void menuChoice(int* choice, char no1[30], char no2[30], char no3[30], char no4[30]){
	puts	("\n\n\t\t\t\t\t\t    +==========================  PILIH MENU  =========================+");
    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
	printf	("\t\t\t\t\t\t    |                     1. %s                     | \n", no1);
    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
	printf	("\t\t\t\t\t\t    |                    2. %s                    | \n", no2);
    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
	printf	("\t\t\t\t\t\t    |                  3. %s                 | \n", no3);
    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
	printf	("\t\t\t\t\t\t    |                           4. %s                          | \n", no4);
    puts	("\t\t\t\t\t\t    +=================================================================+");
    printf	("\t\t\t\t\t\t\t\t   ---> Pilih menu yang Anda inginkan >> "); scanf("%d", choice);
}

//void conversionsMenu(int *choice){
//	system ("cls");
//	header();
//	printf	("\n\t\t\t\t\t\t     <<<<<<<<<<<<<<<<<<<   Anda memilih opsi 1  >>>>>>>>>>>>>>>>>>>"); 
//	puts	("\n\n\t\t\t\t\t\t   +================== PILIH KONFIGURASI KONVERSI ==================+");
//    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
//	puts	("\t\t\t\t\t\t   |                   1. KONVERSI SUHU                             |");
//    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
//	puts	("\t\t\t\t\t\t   |                   2. KONVERSI SISTEM BILANGAN                  |");
//    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
//	puts	("\t\t\t\t\t\t   |                   3. KONVERSI METRIK                           |");
//    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
//	puts	("\t\t\t\t\t\t   |                   4. KONVERSI WAKTU                	    |");
//    puts	("\t\t\t\t\t\t   +================================================================+");
//    printf	("\t\t\t\t\t\t\t\t Pilih menu yang ingin Anda konversikan >> "); scanf("%d", choice);
//}

void conversionsMenu(int *choice, char no1[30], char no2[30], char no3[30], char no4[30]){
	system ("cls");
	header();
	printf	("\n\t\t\t\t\t\t     <<<<<<<<<<<<<<<<<<<   Anda memilih opsi 1  >>>>>>>>>>>>>>>>>>>"); 
	puts	("\n\n\t\t\t\t\t\t   +================== PILIH KONFIGURASI KONVERSI ==================+");
    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
	printf	("\t\t\t\t\t\t   |                   1. %s                             | \n", no1);
    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
	printf	("\t\t\t\t\t\t   |                   2. %s                  | \n", no2);
    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
	printf	("\t\t\t\t\t\t   |                   3. %s                           | \n", no3);
    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
	printf	("\t\t\t\t\t\t   |                   4. %s                	    | \n", no4);
    puts	("\t\t\t\t\t\t   +================================================================+");
    printf	("\t\t\t\t\t\t\t\t Pilih menu yang ingin Anda konversikan >> "); scanf("%d", choice);
}

void pilihSuhu(float tempra, char *tempraUnit, char tmpOutputUnit){
	system("cls");
	header();
	printf	("\n\t\t\t\t\t\t    <<<<<<<<<<<<<<<  Anda memilih opsi konversi suhu  >>>>>>>>>>>>>>>"); 
	puts	("\n\n\t\t\t\t\t\t\t  +================== KONVERSI SUHU ==================+");
	puts	("\t\t\t\t\t\t\t  | ===> Keterangan: F = Fahrenheit                   |");
	puts	("\t\t\t\t\t\t\t  |                  C = Celcius                      |");
	puts	("\t\t\t\t\t\t\t  |                  K = Kelvin                       |");	
	puts	("\t\t\t\t\t\t\t  | ===> Contoh Inputan : 70 C                        |");
	puts	("\t\t\t\t\t\t\t  +===================================================+");            														
    printf	("\t\t\t\t\t\t    --> Masukkan besaran suhu beserta satuannya (F, C, K) >> "); scanf("%f %c", &tempra, tempraUnit);
	float tempraA, tempraB; char outputUnit;

	switch(*tempraUnit){
		case 'F':
			tempraA = temprConv(tempra, *tempraUnit, 'C');
			tempraB = temprConv(tempra, *tempraUnit, 'K');
			break;
		case 'C':
			tempraA = temprConv(tempra, *tempraUnit, 'K');
			tempraB = temprConv(tempra, *tempraUnit, 'F');
			break;
		case 'K':
			tempraA = temprConv(tempra, *tempraUnit, 'F');
			tempraB = temprConv(tempra, *tempraUnit, 'C');
			break;
		default: break;
	}
	printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");
	printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", tempraA, tempraB);
}


int temprConv(float tempra, char tempraUnit, char tmpOutputUnit){
	switch(tempraUnit){
		case 'f': case 'F':
			return ((tmpOutputUnit=='C')? ((tempra - 32) / 1.8) : (tempra + 273.15));
			break;
		case 'c': case 'C':
			return ((tmpOutputUnit=='K')? (tempra + 273.15) : ((tempra * 1.8) + 32));
			break; 
		case 'k': case 'K':
			return ((tmpOutputUnit=='F')? ((tempra * 1.8) + 32) : (tempra - 273.15));
			break;
		default:
			break;
	}
}

void pilihSistemBilangan(int *inputangka, char *inisialisasi, char *ubahKe){
	int choice;
	system("cls");
	header();
	printf	("\n\t\t\t\t\t      <<<<<<<<<<<<<<<  Anda memilih opsi konversi sistem bilangan  >>>>>>>>>>>>>>>"); 
	puts	("\n\n\t\t\t\t\t\t\t  +============ KONVERSI SISTEM BILANGAN =============+");
	puts	("\t\t\t\t\t\t\t  | ===> Keterangan: D = Desimal                      |");
	puts	("\t\t\t\t\t\t\t  |                  B = Biner                        |");
	puts	("\t\t\t\t\t\t\t  |                  O = Oktal                        |");
	puts	("\t\t\t\t\t\t\t  |                  H = Heksadesimal                 |");		
	puts	("\t\t\t\t\t\t\t  | ===> Contoh Inputan : 30 D                        |");
	puts	("\t\t\t\t\t\t\t  +===================================================+");  
    printf	("\t\t\t\t\t\t      --> Masukkan angkanya dan inisialisasinya (D, B, O, H) >> ");
	scanf("%d %c", inputangka, inisialisasi);
    printf  ("\t\t\t\t\t\t      --> Input anda >> %d %c", *inputangka, *inisialisasi);
    printf  ("\n\t\t\t\t\t\t      --> Konversi ke-? (D, B, O, H) >> "); *ubahKe = getch();
    printf  ("\n\t\t\t\t\t\t      --> Konversi ke-? (D, B, O, H) >> %c", *ubahKe);

	numSys(inputangka, inisialisasi, ubahKe);
}

void numSys(int *input, char* convertFrom, char* convertTo){
	int bin[32], oct[32], divisor; char hex[32];
	switch(*convertFrom){
		case 'D':
			cnt=0;
			while(*input>0){
				switch(*convertTo){
					case 'H': case 'h':
						switch (*input % 16) {
					        case 10:
					            hex[cnt] = 'A';
					            break;
					        case 11:
					            hex[cnt] = 'B';
					            break;
					        case 12:
					            hex[cnt] = 'C';
					            break;
					        case 13:
					            hex[cnt] = 'D';
					            break;
					        case 14:
					            hex[cnt] = 'E';
					            break;
					        case 15:
					            hex[cnt] = 'F';
					            break;
					        default:
					            hex[cnt] = (*input % 16) + 0x30; break; 
					    }
						break;
					case 'O': case 'o':
						divisor = 8;
						oct[cnt] = *input%divisor;
						break;
					case 'B': case 'b':
						divisor = 2;
						bin[cnt] = *input%divisor;
						break;
					default:
						printf("\n\n\t\t\t\t\t\t\t\t\t     Wrong input.");
						break;
				}
				*input=*input/divisor;
				cnt++;
			}
			switch(*convertTo){
				case 'B': case 'b':
					printf("\n\n\t\t\t\t\t\t\t Binary value is: ");
		    		for(i=(cnt-1); i>=0;i--)
		        		printf("%d",bin[i]);
					break;
				case 'O': case 'o':
					printf("\n\n\t\t\t\t\t\t\t Octal value is: ");
		    		for(i=(cnt-1); i>=0;i--)
		        		printf("%d",oct[i]);
					break;
				case 'H': case 'h':
					printf("\n\n\t\t\t\t\t\t\t Hexadecimal value is: ");
				    for(i=(cnt-1); i>=0;i--)
				        printf("%d",hex[i]);
					break;
				default:
					printf("\n\n\t\t\t\t\t\t\t\t\t     Wrong input.");
					break;
			}   
			break;
		case 'B':
			
		case 'O':
			
		case 'H':
			
		default:
			break;
	}
}

void pilihMetrik(float *inputangka, char *LongUnit){
	system("cls");
	header();
	printf	("\n\t\t\t\t\t\t  <<<<<<<<<<<<<<<  Anda memilih opsi konversi metrik  >>>>>>>>>>>>>>>"); 
	puts	("\n\n\t\t\t\t\t\t\t  +================= KONVERSI METRIK =================+");
	puts	("\t\t\t\t\t\t\t  | ===> Keterangan: K = Kilo  (k-)                   |");
	puts	("\t\t\t\t\t\t\t  |                  H = Hekto (h-)                   |");
	puts	("\t\t\t\t\t\t\t  |                  D = Deka  (da-)                  |");
	puts	("\t\t\t\t\t\t\t  |                  X = (metrik)      (m/g/l)        |");	
	puts	("\t\t\t\t\t\t\t  |                  d = Desi  (d-)                   |");	
	puts	("\t\t\t\t\t\t\t  |                  C = Centi (c-)                   |");
	puts	("\t\t\t\t\t\t\t  |                  m = Mili  (m-)                   |");				
	puts	("\t\t\t\t\t\t\t  | ===> Contoh Inputan : 85 K                        |");
	puts	("\t\t\t\t\t\t\t  +===================================================+");  
    printf	("\t\t\t\t\t           --> Masukkan panjang beserta satuannya (K, H, D, X, d, C, m) >> "); scanf("%f %c", inputangka, LongUnit);
	float LongA, LongB, LongC, LongD, LongE, LongF; char LongUnitA, LongUnitB, LongUnitC, LongUnitD, LongUnitE, LongUnitF;
	metricConv(inputangka, &LongA, &LongB, &LongC, &LongD, &LongE, &LongF, LongUnit, &LongUnitA, &LongUnitB, &LongUnitC, &LongUnitD, &LongUnitE, &LongUnitF);
	printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");	
	printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", LongA, LongUnitA, LongB, LongUnitB, LongC, LongUnitC, LongD, LongUnitD, LongE, LongUnitE, LongF, LongUnitF);
}

void metricConv(float *inputangka, float* firstRes, float* secondRes, float* thirdRes, float* fourRes, float* fivRes, float* sixRes, char *LongUnit, char* firstResUnit, char* secondResUnit, char* thirdResUnit, char* fourResUnit, char* fivResUnit, char* sixResUnit){
	switch(*LongUnit){
		case 'c': case 'C':
			*firstRes = *inputangka / 100; *firstResUnit = 'X';
			*secondRes = *inputangka / 100000; *secondResUnit = 'K';
			*thirdRes = *inputangka * 10; *thirdResUnit = 'm';
			*fourRes = *inputangka / 1000; *fourResUnit = 'D';
			*fivRes = *inputangka / 10000; *fivResUnit = 'H';
			*sixRes = *inputangka / 10; *sixResUnit = 'd';
			break;
		case 'x': case 'X': 
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

void pilihWaktu(float *inputangka, char *WaktuUnit){
	header();
	printf	("\n\t\t\t\t\t\t    <<<<<<<<<<<<<<<  Anda memilih opsi konversi waktu  >>>>>>>>>>>>>>>"); 
	puts	("\n\n\t\t\t\t\t\t\t  +================== KONVERSI WAKTU =================+");
	puts	("\t\t\t\t\t\t\t  | ===> Keterangan: D = Detik       (d)              |");
	puts	("\t\t\t\t\t\t\t  |                  K = Mikrodetik  (mcd)            |");
	puts	("\t\t\t\t\t\t\t  |                  L = Milidetik   (ms)             |");
	puts	("\t\t\t\t\t\t\t  |                  M = Menit       (m)              |");	
	puts	("\t\t\t\t\t\t\t  |                  J = Jam         (J)              |");	
	puts	("\t\t\t\t\t\t\t  | ===> Contoh Inputan : 60 M                        |");
	puts	("\t\t\t\t\t\t\t  +===================================================+");
    printf	("\t\t\t\t\t              --> Masukkan waktu beserta satuannya (D, K, L, M, J) >> "); scanf("%f %c", inputangka, WaktuUnit);
	float WaktuA, WaktuB, WaktuC, WaktuD; char WaktuUnitA, WaktuUnitB, WaktuUnitC, WaktuUnitD;
	timeCalc(inputangka, &WaktuA, &WaktuB, &WaktuC, &WaktuD , WaktuUnit, &WaktuUnitA, &WaktuUnitB, &WaktuUnitC, &WaktuUnitD);
	printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");
	printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", WaktuA, WaktuUnitA, WaktuB, WaktuUnitB, WaktuC, WaktuUnitC, WaktuD, WaktuUnitD);
}

void timeCalc(float *inputangka, float* firstRes, float* secondRes, float* thirdRes, float* fourRes, char *WaktuUnit, char* firstResUnit, char* secondResUnit, char* thirdResUnit, char* fourResUnit){
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

//void arithmeticsMenu(int *choice){
//	system ("cls");
//	header();
//	puts	("\n\n\t\t\t\t\t\t   +==================== PILIH FITUR ARITMATIKA ======================+");
//    puts	("\t\t\t\t\t\t   |------------------------------------------------------------------|");
//	puts	("\t\t\t\t\t\t   |                          1. KALKULATOR                           |");
//    puts	("\t\t\t\t\t\t   |------------------------------------------------------------------|");
//	puts	("\t\t\t\t\t\t   |                       2. RIWAYAT KALKULATOR                      |");
//    puts	("\t\t\t\t\t\t   |------------------------------------------------------------------|");
//	puts	("\t\t\t\t\t\t   |                   3. MENGHAPUS RIWAYAT KALKULATOR                |");
//    puts	("\t\t\t\t\t\t   +==================================================================+");
//    printf	("\t\t\t\t\t\t\t\t     --> Pilih menu yang Anda inginkan >> "); scanf("%d", &*choice);
//}

void arithmeticsMenu(int *choice, char no1[30], char no2[30], char no3[30]){
	system ("cls");
	header();
	puts	("\n\n\t\t\t\t\t\t   +==================== PILIH FITUR ARITMATIKA ======================+");
    puts	("\t\t\t\t\t\t   |------------------------------------------------------------------|");
	printf	("\t\t\t\t\t\t   |                          1. %s                           | \n", no1);
    puts	("\t\t\t\t\t\t   |------------------------------------------------------------------|");
	printf	("\t\t\t\t\t\t   |                       2. %s                      | \n", no2);
    puts	("\t\t\t\t\t\t   |------------------------------------------------------------------|");
	printf	("\t\t\t\t\t\t   |                   3. %s                | \n", no3);
    puts	("\t\t\t\t\t\t   +==================================================================+");
    printf	("\t\t\t\t\t\t\t\t     --> Pilih menu yang Anda inginkan >> "); scanf("%d", &*choice);
}

void ketArith()
{
	printf	("\n\t\t\t\t\t\t\t   <<<<<<<<<<<<<<<  Anda memilih opsi 2  >>>>>>>>>>>>>>>");
	puts	("\n\n\t\t\t\t\t\t\t   +======== KETERANGAN KONFIGURASI ARITMATIKA ========+");    
	puts	("\t\t\t\t\t\t\t   | ===> Keterangan: + = Pertambahan                  |");
	puts	("\t\t\t\t\t\t\t   |                  - = Pengurangan                  |");
	puts	("\t\t\t\t\t\t\t   |                  * = Perkalian                    |");
	puts	("\t\t\t\t\t\t\t   |                  / = Pembagian                    |");		
	puts	("\t\t\t\t\t\t\t   | ===> Contoh Inputan : 25 + 70                     |");
	puts	("\t\t\t\t\t\t\t   +===================================================+"); 
}

float summation(float* num1, float* num2){
	return *num1 + *num2;
}

float subtraction(float* num1, float* num2){
	return *num1 - *num2;
}

float multiplication(float* num1, float* num2){
	return *num1 * *num2;
}

float division(float* num1, float* num2){
	return *num1 / *num2;
}

void arithOperator(float* firstNum, char* operSign, float* secondNum){
	FILE *pf;
	float res; char ch; 
	system ("cls");
	header();
	ketArith();
	printf("\n\t\t\t\t\t\t --> Masukkan ekspresi matematis: (pisahkan bilangan dan operasi dengan SPASI) ");
	scanf("%f %c %f", firstNum, operSign, secondNum); 
	printf("\n\t\t\t\t\t\t ==> Hasil dari perhitungan: %.1f %c %.1f =", *firstNum, *operSign, *secondNum);
	switch(*operSign){
		case '+':
			res = summation(firstNum, secondNum); break;
		case '-':
			res = subtraction(firstNum, secondNum); break;
		case '*':
			res = multiplication(firstNum, secondNum); break;
		case '/':
		case ':':
			res = division(firstNum, secondNum); break;
		default: break;
	}
	if ((pf=fopen("RIWAYAT.txt", "a+")) == NULL)
	{
		printf("\t\t\t\t\t --> File gagal dibuat!\n");
		exit(1);
	}

	printf  ("\n\t\t\t\t\t\t\t       ____________________________________________  \n");
	printf  ("\t\t\t\t\t\t\t      |  ________________________________________  | \n");
	printf  ("\t\t\t\t\t\t\t      | |%.1f                                    | | \n", res);
	printf  ("\t\t\t\t\t\t\t      | |________________________________________| | \n");
	printf  ("\t\t\t\t\t\t\t      |  _______  _______ _______ _______ _______  | \n");
	printf  ("\t\t\t\t\t\t\t      | |   C   ||   1   |   2   |   3   |   ^   | | \n");  
	printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");  
	printf  ("\t\t\t\t\t\t\t      | |  +/_  ||   4   |   5   |   6   |   .   | | \n"); 
	printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
	printf  ("\t\t\t\t\t\t\t      | |   %%   ||   7   |   8   |   9   |   0   | | \n");
	printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
	printf  ("\t\t\t\t\t\t\t      | |   +   ||   -   |   *   |   /   |   =   | | \n");
	printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
	printf  ("\t\t\t\t\t\t\t      |____________________________________________| \n");

	fprintf(pf,"%.1f %c %.1f = %.1f\n", *firstNum, *operSign, *secondNum, res);
	fclose(pf);
}

void lessons(){ 
	system ("cls");
	header();
	FILE *f_teks;
	char string[PANJANG];
	char namafile[65];
	
	printf("\n\t\t\t\t\t\t          <<<<<<<<<<<<<<<  Anda memilih opsi 3  >>>>>>>>>>>>>>>");
	puts	("\n\n\t\t\t\t\t     +=================== PILIH MATERI YANG INGIN ANDA PELAJARI ===================+");
	puts	("\t\t\t\t\t     |          	=> SATUAN SUHU     --> Ketikan: suhu.txt                   |");
	puts	("\t\t\t\t\t     |          	=> SISTEM BILANGAN --> Ketikan: sistembilangan.txt         |");
	puts	("\t\t\t\t\t     |          	=> SATUAN PANJANG  --> Ketikan: panjang.txt                |");
	puts	("\t\t\t\t\t     |         	        => SATUAN MASSA    --> Ketikan: massa.txt                  |");
	puts	("\t\t\t\t\t     |          	=> SATUAN WAKTU    --> Ketikan: waktu.txt                  |");
    puts	("\t\t\t\t\t     +=============================================================================+");
	printf("\t\t\t\t\t\t\t\t---> Nama file yang Anda pilih : ");
	scanf("%s", &namafile);
	loadingBar();
	system ("cls");

	if ((f_teks=fopen(namafile, "rt")) == NULL)
	{
		printf("\n\n\t\t\t\t\t\t\t   ---> Maaf Anda salah mengetikan nama file :(\r\n");
		exit(1);
	}

	while ((fgets(string, PANJANG, f_teks)) != NULL)
	{
		printf("%s\r", string);
	}
	fclose(f_teks); 
}

//void menuQuiz(int* choice){
//	system ("cls");
//	header();
//	puts	("\n\n\t\t\t\t\t\t   +=======================  PILIH LEVEL QUIZ  ======================+");
//    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
//	puts	("\t\t\t\t\t\t   |                           1. MUDAH                              |");
//    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
//	puts	("\t\t\t\t\t\t   |                           2. SEDANG                             |");
//    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
//	puts	("\t\t\t\t\t\t   |                           3. SULIT                              |");
//    puts	("\t\t\t\t\t\t   +=================================================================+");
//    printf	("\t\t\t\t\t\t\t\t---> Pilih level Quiz yang Anda inginkan >> "); scanf("%d", choice);
//}

void menuQuiz(int* choice, char no1[30], char no2[30], char no3[30]){
	system ("cls");
	header();
	puts	("\n\n\t\t\t\t\t\t   +=======================  PILIH LEVEL QUIZ  ======================+");
    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
	printf	("\t\t\t\t\t\t   |                           1. %s                              | \n", no1);
    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
	printf	("\t\t\t\t\t\t   |                           2. %s                             | \n", no2);
    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
	printf	("\t\t\t\t\t\t   |                           3. %s                              | \n", no3);
    puts	("\t\t\t\t\t\t   +=================================================================+");
    printf	("\t\t\t\t\t\t\t\t---> Pilih level Quiz yang Anda inginkan >> "); scanf("%d", choice);
}

void quizmudah(char jawab[30], char pil[30], char benar[30], char salah[30]) {
	char questions[][100] = {"1. Hasil perhitungan 80 + 42 yaitu:                            ",
							"2. Hasil dari 100 + 20 x 13 yaitu:                             ",
							"3. Total dari 1.444 + 112 - 20 :                               ",
							"4. Perhitungan dari 99 + 89 - 22:                              ",
							"5. Perhitungan 66 - 13 + 10 + 23:                              ",
							"6. Satuan Desimeter adalah:                                    ",
							"7. Satuan Miligram adalah:                                     ",
							"8. Sistem bilangan biner menggunakan dua simbol khusus, yaitu: ",
							"9. Rumus dari skala Celcius ke Kelvin adalah:                  ",
							"10. Cara menghitung miligram ke gram dengan :                  "};

	char options[][100] = {"A. 122", "B. 112", "C. 102", "D. 132",
							"A. 330", "B. 340", "C. 350", "D. 360",
							"A. 1.526", "B. 1.536", "C. 1.516", "D. 1.506",
							"A. 156", "B. 166", "C. 176", "D. 146",
							"A. 84", "B. 85", "C. 86", "D. 87",
							"A. dm", "B. dam", "C. dcm", "D. d",
							"A. g", "B. kg", "C. mg", "D. mcg",
							"A. 0 dan 1", "B. 1 dan 2", "C. 0 dan 2", "D. 0 dan -1",
							"A. -273", "B. +273", "C. -373", "D. +373",
							"A. membagi 100", "B. membagi 1000", "C. kali 100", "D. membagi 1000"};

	char answers[] = {'A', 'D', 'B', 'B', 'C', 'A', 'C', 'A', 'B', 'B'};
	numberOfQuestions = sizeof(questions)/sizeof(questions[0]);
	char guess[3];
	
	printf("QUIZ GAME\n");
	loadingBar();
	for(int i = 0; i < numberOfQuestions; i++) {
		int x=7;
		system("cls");
		while (x>0){
			system("cls");
			printf	("\n\t\t\t\t\t      (_______________________________  PERTANYAAN  ______________________________)    \n");
			printf	("\t\t\t\t\t     ( \\                 					                 / )  \n");
			printf	("\t\t\t\t\t    ( \\ )               					                ( / ) \n");
			printf	("\t\t\t\t\t   ( ) (  %s        ) ( ) \n", questions[i] ); 
			printf	("\t\t\t\t\t    ( / )               					                ( \\ ) \n");
			printf	("\t\t\t\t\t     ( /                 					                 \\ )  \n");
			printf	("\t\t\t\t\t      (___________________________________________________________________________)   \n\n");

			for(int j = (i * 4); j < (i * 4) + 4; j++){
				printf("\t\t\t\t\t\t\t\t\t         %s\n", options[j]);
			}
			printf( "\n\t\t\t\t\t\t\t\t       --> Waktu Anda %d detik lagi.", x);
			Sleep(1);
			x--;
		}
		system("cls");
		printf("\n\n\t\t\t\t\t\t\t\t\t*************************");
    	printf("\n\t\t\t\t\t\t\t\t\t--> %s: ", jawab);
    	guess[i] = getch();
    	printf("\n\t\t\t\t\t\t\t\t\t-------------------------");

		guess[i] = toupper(guess[i]);
		printf("\n\t\t\t\t\t\t\t\t\t--> %s: %c\n", pil, guess[i]);

		if(guess[i] == answers[i]){
    		printf("\t\t\t\t\t\t\t\t\t=>  %s", benar);
    		printf("\n\t\t\t\t\t\t\t\t\t*************************");
    		score++;
    	} else {
        	printf("\t\t\t\t\t\t\t\t\t=>  %s", salah);
        	printf("\n\t\t\t\t\t\t\t\t\t*************************");
    	}
		Sleep(1000);
	}
	loadingBar();
	system("cls");
	tampilanilai();
	ketnilai();
//	printf	("\n\n\n\t\t\t\t\t\t        __| |____________________________________________| |__  \n");
//	printf	("\t\t\t\t\t\t       (__   ____________________________________________   __) \n");
//	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
//	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
//	printf	("\t\t\t\t\t\t          | |           NILAI ANDA ADALAH: %d/%d          | |     \n", score, numberOfQuestions);
//	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
//	printf	("\t\t\t\t\t\t        __| |____________________________________________| |__  \n");
//	printf	("\t\t\t\t\t\t       (__   ____________________________________________   __) \n");
//	printf	("\t\t\t\t\t\t          | |                                            | |    \n"); 
	
	
//	if (score >= 8 && score <= 10){
//		printf	("\n\t\t\t\t\t\t\t---> Anda mendapatkan nilai yang sempurna! Selamat! <---");
//	} else if(score >= 5 && score < 8){
//		printf	("\n\t\t\t\t\t\t    ---> Nilai Anda kurang sempurna :(, Ayo coba lagi Quiznya! <---");
//	} else {
//		printf	("\n\t\t\t\t\t   ---> Nilai Anda tidak sempurna ;(, Jangan menyerah! Ayo coba lagi Quiznya! <---");
//	}
}

void quizsedang(char jawab[30], char pil[30], char benar[30], char salah[30]){
	char questions[][100] = {"1. 5 menit berapa detik? :                         ",
								 "2. 1 Mikrodetik berapa Milidetik? :                ",
								 "3. 1 gram didefinisikan sebagai:                   ",
								 "4. 1 Ons berapa gram? :                            ",
								 "5. Huruf F dalam Heksadesimal, bernilai:           ",
								 "6. Sistem Bilangan yang disebut berbasis 8, yaitu: ",
								 "7. 300K sama dengan berapa Celcius? :              ",
								 "8. 30 Celcius sama dengan berapa kelvin? :         ",
								 "9. 1 km berapa mm? :                               ",
								 "10. 0,1 dam berapa m?:                             "};

	char options[][100] = {"A. 600", "B. 300", "C. 1.800", "D. 150",
						   "A. 0,001", "B. 0,0001", "C. 0,00001", "D. 0,01",
						   "A. 1/100 kg", "B. 1/1000 kg", "C. 1/10 kg", "D. 1/10000 kg",
						   "A. 28 g", "B. 27,35", "C. 28,35", "D. 29",
						   "A. 15", "B. 14", "C. 13", "D. 12",
						   "A. Heksadesimal", "B. Oktal", "C. Dektal", "D. Sektal",
						   "A. 27", "B. 26,85", "C. 27,65", "D. 26,65",
						   "A. 303,15", "B. 304,15", "C. 302,15", "D. 301,15",
						   "A. 100000", "B. 1000000", "C. 10000000", "D. 1000",
						   "A. 1", "B. 10", "C. 100", "D. 1000"};

	char answers[] = {'B', 'A', 'B', 'C', 'A', 'B', 'B', 'A', 'B', 'A'};
	numberOfQuestions = sizeof(questions)/sizeof(questions[0]);
	char guess[3];

	printf("QUIZ GAME\n");
	loadingBar();

	for(int i = 0; i < numberOfQuestions; i++) {

		int x=10;
		system("cls");
		while (x>0){
			system("cls");
			printf	("\n\t\t\t\t\t      (_______________________________  PERTANYAAN  ______________________________)    \n");
			printf	("\t\t\t\t\t     ( \\                 					                 / )  \n");
			printf	("\t\t\t\t\t    ( \\ )               					                ( / ) \n");
			printf	("\t\t\t\t\t   ( ) (  %s                    ) ( ) \n", questions[i] ); 
			printf	("\t\t\t\t\t    ( / )               					                ( \\ ) \n");
			printf	("\t\t\t\t\t     ( /                 					                 \\ )  \n");
			printf	("\t\t\t\t\t      (___________________________________________________________________________)   \n\n");

			for(int j = (i * 4); j < (i * 4) + 4; j++){
				printf("\t\t\t\t\t\t\t\t\t         %s\n", options[j]);
			}
			printf( "\n\t\t\t\t\t\t\t\t       --> Waktu Anda %d detik lagi.", x);
			Sleep(1000);
			x--;
		}
		system("cls");
		printf("\n\n\t\t\t\t\t\t\t\t\t*************************");
    	printf("\n\t\t\t\t\t\t\t\t\t--> %s: ", jawab);
    	guess[i] = getch();
    	printf("\n\t\t\t\t\t\t\t\t\t-------------------------");

		guess[i] = toupper(guess[i]);
		printf("\n\t\t\t\t\t\t\t\t\t--> %s: %c\n", pil, guess[i]);

		if(guess[i] == answers[i]){
    		printf("\t\t\t\t\t\t\t\t\t=>  %s", benar);
    		printf("\n\t\t\t\t\t\t\t\t\t*************************");
    		score++;
    	} else {
        	printf("\t\t\t\t\t\t\t\t\t=>  %s", salah);
        	printf("\n\t\t\t\t\t\t\t\t\t*************************");
    	}
		Sleep(1000);
	}
	loadingBar();
	system("cls");
	tampilanilai();
	ketnilai();
//	printf	("\n\n\n\t\t\t\t\t\t        __| |____________________________________________| |__  \n");
//	printf	("\t\t\t\t\t\t       (__   ____________________________________________   __) \n");
//	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
//	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
//	printf	("\t\t\t\t\t\t          | |           NILAI ANDA ADALAH: %d/%d          | |     \n", score, numberOfQuestions);
//	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
//	printf	("\t\t\t\t\t\t        __| |____________________________________________| |__  \n");
//	printf	("\t\t\t\t\t\t       (__   ____________________________________________   __) \n");
//	printf	("\t\t\t\t\t\t          | |                                            | |    \n"); 
	
	
//	if (score >= 8 && score <= 10){
//		printf	("\n\t\t\t\t\t\t\t---> Anda mendapatkan nilai yang sempurna! Selamat! <---");
//	} else if(score >= 5 && score < 8){
//		printf	("\n\t\t\t\t\t\t    ---> Nilai Anda kurang sempurna :(, Ayo coba lagi Quiznya! <---");
//	} else {
//		printf	("\n\t\t\t\t\t   ---> Nilai Anda tidak sempurna ;(, Jangan menyerah! Ayo coba lagi Quiznya! <---");
//	}
 }
 
 void quizsulit(char jawab[30], char pil[30], char benar[30], char salah[30]){
	char questions[][100] = {"1. 1 km + 1000 hm + 123 cm = __ hm                 ",
							 "2. 1000 mm + 3 m - 340 cm =__ mm                   ",
							 "3. 90 Celcius berapa Fahrenheit?                   ",
							 "4. 300 Kelvin berapa Fahrenheit?                   ",
							 "5. 89 Kg + 180 g - 1 Kg - 1.000 mg = __ g          ",
							 "6.  9000 mg - 0,01 kg + 100 g =__kg                ",
							 "7. Konversi bilangan desimal 10 ke biner:          ",
							 "8. Konversi bilangan desimal 82 ke oktal:          ",
							 "9. 5 detik + 1 menit - 10 milidetik : __ milidetik ",
							 "10. 100 menit + 1 jam - 60 milidetik: __ menit     "};	


	char options[][100] = {"A. 1.009,123", "B. 1.0010,0123", "C. 1.010,0123", "D. 1.010,123",
						   "A. 500", "B. 600", "C. 700", "D. 800",
						   "A. 194", "B. 195", "C. 196", "D. 197",
						   "A. 80", "B. 80,33", "C. 81", "D. 81,33",
						   "A. 88.180", "B. 8.817", "C. 88.079", "D. 88.179",
						   "A. 0,1", "B. 0,99", "C. 0,9", "D. 0,999",
						   "A. 1010", "B. 1011", "C. 1101", "D. 1001",
						   "A. 12", "B. 122", "C. 212", "D. 121",
						   "A. 65.000", "B. 64.900", "C. 64.909", "D. 64.990",
						   "A. 159,999", "B. 160", "C. 159,909", "D. 160,099"};

	char answers[] = {'C', 'B', 'A', 'B', 'D', 'D', 'A', 'B', 'D', 'A'};
	numberOfQuestions = sizeof(questions)/sizeof(questions[0]);
	char guess[3];


	printf("QUIZ GAME\n");
	loadingBar();

	for(int i = 0; i < numberOfQuestions; i++) {
		int x=15;
		system("cls");
		while (x>0){

			system("cls");
			printf	("\n\t\t\t\t\t      (_______________________________  PERTANYAAN  ______________________________)    \n");
			printf	("\t\t\t\t\t     ( \\                 					                 / )  \n");
			printf	("\t\t\t\t\t    ( \\ )               					                ( / ) \n");
			printf	("\t\t\t\t\t   ( ) (  %s                    ) ( ) \n", questions[i] ); 
			printf	("\t\t\t\t\t    ( / )               					                ( \\ ) \n");
			printf	("\t\t\t\t\t     ( /                 					                 \\ )  \n");
			printf	("\t\t\t\t\t      (___________________________________________________________________________)   \n\n");

			for(int j = (i * 4); j < (i * 4) + 4; j++){
				printf("\t\t\t\t\t\t\t\t\t         %s\n", options[j]);
			}
			printf( "\n\t\t\t\t\t\t\t\t       --> Waktu Anda %d detik lagi.", x);
			Sleep(1000);
			x--;
		}
		system("cls");
		printf("\n\n\t\t\t\t\t\t\t\t\t*************************");
    	printf("\n\t\t\t\t\t\t\t\t\t--> %s: ", jawab);
    	guess[i] = getch();
    	printf("\n\t\t\t\t\t\t\t\t\t-------------------------");

		guess[i] = toupper(guess[i]);
		printf("\n\t\t\t\t\t\t\t\t\t--> %s: %c\n", pil, guess[i]);

		if(guess[i] == answers[i]){
    		printf("\t\t\t\t\t\t\t\t\t=>  %s", benar);
    		printf("\n\t\t\t\t\t\t\t\t\t*************************");
    		score++;
    	} else {
        	printf("\t\t\t\t\t\t\t\t\t=>  %s", salah);
        	printf("\n\t\t\t\t\t\t\t\t\t*************************");
    	}
		Sleep(1000);
	}
	loadingBar();
	system("cls");
	tampilanilai();
	ketnilai();
//	printf	("\n\n\n\t\t\t\t\t\t        __| |____________________________________________| |__  \n");
//	printf	("\t\t\t\t\t\t       (__   ____________________________________________   __) \n");
//	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
//	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
//	printf	("\t\t\t\t\t\t          | |           NILAI ANDA ADALAH: %d/%d          | |     \n", score, numberOfQuestions);
//	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
//	printf	("\t\t\t\t\t\t        __| |____________________________________________| |__  \n");
//	printf	("\t\t\t\t\t\t       (__   ____________________________________________   __) \n");
//	printf	("\t\t\t\t\t\t          | |                                            | |    \n"); 
	

//	if (score >= 8 && score <= 10){
//		printf	("\n\t\t\t\t\t\t\t---> Anda mendapatkan nilai yang sempurna! Selamat! <---");
//	} else if(score >= 5 && score < 8){
//		printf	("\n\t\t\t\t\t\t    ---> Nilai Anda kurang sempurna :(, Ayo coba lagi Quiznya! <---");
//	} else {
//		printf	("\n\t\t\t\t\t   ---> Nilai Anda tidak sempurna ;(, Jangan menyerah! Ayo coba lagi Quiznya! <---");
//	}
 }