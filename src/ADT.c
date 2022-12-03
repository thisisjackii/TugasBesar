#include "ADT.h"

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

// Function to creating loading bar
void loadingBar(){
    // 0 - black background,
    // A - Green Foreground
    system("color F0");
  
    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;
	
	system ("cls");
	header();
    printf("\n\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t         Loading...\n\n");
    printf("\t\t\t\t\t\t\t\t\t");
  
    // Print initial loading bar
    for (int i = 0; i < 26; i++)
        printf("%c", a);
  
    // Set the cursor again starting
    // point of loading bar
    printf("\r");
    printf("\t\t\t\t\t\t\t\t\t");
  
    // Print loading bar progress
    for (int i = 0; i < 26; i++) {
        printf("%c", b);
  
        // Sleep for 1 second
        Sleep(50);
    }
}

void menuChoice(int* choice){
//	int columns = strtol(getenv("COLUMNS"), NULL, 10);
//	int fwidth = strlen("Hello") + (columns - strlen("Hello")) / 2;
//	printf("%*s\n", fwidth, "Hello");
	puts	("\n\n\t\t\t\t\t\t   +======================  PILIH KONFIGURASI  ======================+");
	puts	("\t\t\t\t\t\t   |                     1. KONFIGURASI KONVERSI                     |");
	puts	("\t\t\t\t\t\t   |                    2. KONFIGURASI ARITMATIKA                    |");
	puts	("\t\t\t\t\t\t   |                  3. MATERI KONFIGURASI KONVERSI                 |");
	puts	("\t\t\t\t\t\t   |                           4. QUIZ YUK!                          |");
    puts	("\t\t\t\t\t\t   +=================================================================+");
    printf	("\t\t\t\t\t\t\t\t  ---> Pilih menu yang Anda inginkan >> "); scanf("%d", choice);
//	switch(PilKonf)
//	{
//		case 1:
//			konversi(&Conversion);
//			break;
//		case 2:
//			aritmatika(&Arithmatic);
//			break;
//		case 3: 
//			materi();
//			break;
//		default:
//			printf("Wrong input."); break;
//	}
}

//void backMenu(){
//	int choice;
//	printf("\n\n\n\t\t\t\t\t\tPress ESC to go back home.");
//	if (getch()==27){
//		menuChoice(&choice);
//	}
//}

void conversionsMenu(int *choice){
	system ("cls");
	header();
	printf	("\n\t\t\t\t\t\t     <<<<<<<<<<<<<<<<<<<   Anda memilih opsi 1  >>>>>>>>>>>>>>>>>>>"); 
	puts	("\n\n\t\t\t\t\t\t   +================== PILIH KONFIGURASI KONVERSI ==================+");
	puts	("\t\t\t\t\t\t   |                   1. KONVERSI SUHU                             |");
	puts	("\t\t\t\t\t\t   |                   2. KONVERSI SISTEM BILANGAN                  |");
	puts	("\t\t\t\t\t\t   |                   3. KONVERSI METRIK                           |");
//	puts	("\t\t\t\t\t\t   |                   4. KONVERSI MASSA                   	    |");
	puts	("\t\t\t\t\t\t   |                   4. KONVERSI WAKTU                	    |");
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
//	temprConv(tempra, tempraUnit, outputUnit);
	switch(*tempraUnit){
		case 'F':
			outputUnit = 'C'; tempraA = temprConv(tempra, *tempraUnit, 'C');
			outputUnit = 'K'; tempraB = temprConv(tempra, *tempraUnit, 'K');
			break;
		case 'C':
			outputUnit = 'K'; tempraA = temprConv(tempra, *tempraUnit, 'K');
			outputUnit = 'F'; tempraB = temprConv(tempra, *tempraUnit, 'F');
			break;
		case 'K':
			outputUnit = 'F'; tempraA = temprConv(tempra, *tempraUnit, 'F');
			outputUnit = 'C'; tempraB = temprConv(tempra, *tempraUnit, 'C');
			break;
		default: break;
	}
	printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");
//	loadingBar();	
	printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", tempraA, tempraUnit);
}

//void temprConv(float *tempra, float* firstRes, float* secondRes, char *tempraUnit, char* firstResUnit, char* secondResUnit){
//	switch(*tempraUnit){
//		case 'f': case 'F':
//			*firstRes = (*tempra - 32) / 1.8; *firstResUnit = 'C';
//			*secondRes = *tempra + 273.15; *secondResUnit = 'K';
//			break;
//		case 'k': case 'K':
//			*firstRes = *tempra - 273.15; *firstResUnit = 'C';
//			*secondRes = (*tempra * 1.8) + 32; *secondResUnit = 'F';
//			break;
//		case 'c': case 'C':
//			*firstRes = (*tempra * 1.8) + 32; *firstResUnit = 'F';
//			*secondRes = *tempra + 273.15; *secondResUnit = 'K';
//			break; 
//		default:
//			break;
//	}
//}

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
//	backMenu();
	scanf("%d %c", inputangka, inisialisasi);
    printf  ("\t\t\t\t\t\t      --> Input anda >> %d %c", *inputangka, *inisialisasi);
    printf  ("\n\t\t\t\t\t\t      --> Konversi ke-? (D, B, O, H) >> "); *ubahKe = getch();
    printf  ("\n\t\t\t\t\t\t      --> Konversi ke-? (D, B, O, H) >> %c", *ubahKe);
//	int angka1, angka2, angka3; char inisialA, inisialB, inisialC;
//	systemConv(inputangka, &angka1, &angka2, &angka3, inisialisasi, &inisialA, &inisialB, &inisialC);
	numSys(inputangka, inisialisasi, ubahKe);
//	printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");	
//	printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c",angka1, inisialA, angka2, inisialB, angka3, inisialC);
}

void numSys(int *input, char* convertFrom, char* convertTo){
	int bin[32], oct[32], divisor; char hex[32];
	switch(*convertFrom){
		case 'D':
			cnt=0;
			while(*input>0){
//				if(*convertTo == 'H'){
//					divisor = 16;
//					hex[cnt] = *input%divisor + ((*input%divisor>9)? 55 : 0x30);
//				}else{
//					if((divisor = ((*convertTo == 'B')? 2 : 8)) == 2){
//						bin[cnt] = *input%divisor;
//					}else{
//						oct[cnt] = *input%divisor;
//					}
//				}
				switch(*convertTo){
					case 'H': case 'h':
//						divisor = 16;
//						if(*input%divisor>9 && *input%divisor<16){
//							hex[cnt] = *input%divisor + 55;
//						}else{
//							hex[cnt] = *input%divisor + 0x30;
//						}
//						hex[cnt] = *input%divisor + ((*input%divisor>9)? 55 : 0x30);
						
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
					            hex[cnt] = (*input % 16) + 0x30; break; /*converted into char value*/
					    }
//						hex[cnt] = number%16 + ((number%16>9)? 55 : 0x30);
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
		//		arr[cnt]=*input%divisor;
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

//void massaConv(float *inputangka, float* firstRes, float* secondRes, float* thirdRes, float* fourRes, char *MassaUnit, char* firstResUnit, char* secondResUnit, char* thirdResUnit, char* fourResUnit){
//	switch(*MassaUnit){
//		case 'k': case 'K':
//			*firstRes = *inputangka * 1000; *firstResUnit = 'g';
//			*secondRes = *inputangka * 1000000; *secondResUnit = 'm';
//			*thirdRes = *inputangka * 1000000000; *thirdResUnit = 'n';
//			*fourRes = *inputangka * 35.274; *fourResUnit = 'o';
//			break;
//		case 'g': case 'G':
//			*firstRes = *inputangka / 1000; *firstResUnit = 'k';
//			*secondRes = *inputangka * 1000; *secondResUnit = 'm';
//			*thirdRes = *inputangka * 1000000; *thirdResUnit = 'n';
//			*fourRes = *inputangka / 28.35; *fourResUnit = 'o';
//			break;
//		case 'm': case 'M':
//			*firstRes = *inputangka / 1000000; *firstResUnit = 'k';
//			*secondRes = *inputangka / 1000; *secondResUnit = 'g';
//			*thirdRes = *inputangka * 1000; *thirdResUnit = 'n';
//			*fourRes = *inputangka / 28350; *fourResUnit = 'o';
//			break; 
//		case 'n': case 'N':
//			*firstRes = *inputangka / 1000000000; *firstResUnit = 'k';
//			*secondRes = *inputangka / 1000000; *secondResUnit = 'g';
//			*thirdRes = *inputangka / 1000; *thirdResUnit = 'm';
//			*fourRes = *inputangka / 2.8350000000; *fourResUnit = 'o';
//			break; 
//		case 'o': case 'O':
//			*firstRes = *inputangka / 35.274; *firstResUnit = 'k';
//			*secondRes = *inputangka * 28.35; *secondResUnit = 'g';
//			*thirdRes = *inputangka * 28350; *thirdResUnit = 'm';
//			*fourRes = *inputangka * 2.8350000000; *fourResUnit = 'n';
//			break; 
//		default:
//			break;
//	}
//}

//void pilihMassa(float *inputangka, char *MassaUnit){
//	system("cls");
//	header();
//	printf	("\n\t\t\t\t\t\t    <<<<<<<<<<<<<<<  Anda memilih opsi konversi massa  >>>>>>>>>>>>>>>"); 
//	puts	("\n\n\t\t\t\t\t\t\t  +================== KONVERSI MASSA =================+");
//	puts	("\t\t\t\t\t\t\t  | ===> Keterangan: K = Kilogram  (kg)               |");
//	puts	("\t\t\t\t\t\t\t  |                  G = Gram      (g)                |");
//	puts	("\t\t\t\t\t\t\t  |                  M = Miligram  (mg)               |");
//	puts	("\t\t\t\t\t\t\t  |                  N = Mikrogram (mcg)              |");	
//	puts	("\t\t\t\t\t\t\t  |                  O = Ons                          |");	
//	puts	("\t\t\t\t\t\t\t  | ===> Contoh Inputan : 90 O                        |");
//	puts	("\t\t\t\t\t\t\t  +===================================================+");  
//    printf	("\t\t\t\t\t              --> Masukkan massa beserta satuannya (K, G, M, N, O) >> "); scanf("%f %c", inputangka, MassaUnit);
//	float MassaA, MassaB, MassaC, MassaD; char MassaUnitA, MassaUnitB, MassaUnitC, MassaUnitD;
//	massaConv(inputangka, &MassaA, &MassaB, &MassaC, &MassaD, MassaUnit, &MassaUnitA, &MassaUnitB, &MassaUnitC, &MassaUnitD);
//	printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");	
//	printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", MassaA, MassaUnitA, MassaB, MassaUnitB, MassaC, MassaUnitC, MassaD, MassaUnitD);
//}

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

void arithmeticsMenu(int *choice){
	system ("cls");
	header();
	printf("\n\t\t\t\t\t\t\t   <<<<<<<<<<<<<<<  Anda memilih opsi 2  >>>>>>>>>>>>>>>"); 
	puts	("\n\n\t\t\t\t\t\t   |================== PILIH KONFIGURASI ARITMATIKA ====================|");
	puts	("\t\t\t\t\t\t   |                          1. PENJUMLAHAN                            |");
	puts	("\t\t\t\t\t\t   |                          2. PENGURANGAN                            |");
	puts	("\t\t\t\t\t\t   |                          3. PERKALIAN                              |");
	puts	("\t\t\t\t\t\t   |                          4. PEMBAGIAN                  	        |");
    puts	("\t\t\t\t\t\t   +====================================================================+");
    printf	("\t\t\t\t\t\t\t\t   --> Pilih menu yang ingin anda hitung >> "); scanf("%d", choice);
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
//	float x, z, res; char y;
	FILE *pf;
	float res; char ch; int penampung;
	system ("cls");
	header();
	printf("\n\t\t\t\t\t --> Masukkan ekspresi matematis: (pisahkan bilangan dan operasi dengan SPASI) ");
	scanf("%f %c %f", firstNum, operSign, secondNum); //ch = getch();
	printf("\n\t\t\t\t\t ==> Hasil dari perhitungan: %.3f %c %.3f =", *firstNum, *operSign, *secondNum);
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
	if ((pf=fopen("RIWAYAT.txt", "wb")) == NULL)
	{
		printf("File gagal dibuat!\n");
		exit(1);
	}
//	printf("\n%.3f", res);

	printf  ("\n\t\t\t\t\t\t\t       ____________________________________________  \n");
	printf  ("\t\t\t\t\t\t\t      |  ________________________________________  | \n");
	printf  ("\t\t\t\t\t\t\t      | |%.3f                                 | | \n", res);
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
	penampung = ("%.3f %c %.3f = %.3f", *firstNum, *operSign, *secondNum, res);
//	printf("\n\n\t\t\t\t\t --> Hasil dari %.3f %c %.3f = %.3f", *firstNum, *operSign, *secondNum, res);	
	putw(penampung, pf); /* Tulis blangan ke file */
	fclose(pf);
}

//void theCalculator() {
//	printf  ("\t\t\t  ____________________________________________  \n");
//	printf  ("\t\t\t |  ________________________________________  | \n");
//	printf  ("\t\t\t | |                                        | | \n");
//	printf  ("\t\t\t | |________________________________________| | \n");
//	printf  ("\t\t\t |  _______  _______ _______ _______ _______  | \n");
//	printf  ("\t\t\t | |   C   ||   1   |   2   |   3   |   ^   | | \n");  
//	printf  ("\t\t\t | |_______||_______|_______|_______|_______| | \n");  
//	printf  ("\t\t\t | |  +/_  ||   4   |   5   |   6   |   .   | | \n"); 
//	printf  ("\t\t\t | |_______||_______|_______|_______|_______| | \n");
//	printf  ("\t\t\t | |   %%   ||   7   |   8   |   9   |   0   | | \n");
//	printf  ("\t\t\t | |_______||_______|_______|_______|_______| | \n");
//	printf  ("\t\t\t | |   +   ||   -   |   x   |   /   |   =   | | \n");
//	printf  ("\t\t\t | |_______||_______|_______|_______|_______| | \n");
//	printf  ("\t\t\t |____________________________________________| \n");
//}

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

void menuQuiz(int* choice){
//	int columns = strtol(getenv("COLUMNS"), NULL, 10);
//	int fwidth = strlen("Hello") + (columns - strlen("Hello")) / 2;
//	printf("%*s\n", fwidth, "Hello");
	system ("cls");
	header();
	puts	("\n\n\t\t\t\t\t\t   +=======================  PILIH LEVEL QUIZ  ======================+");
	puts	("\t\t\t\t\t\t   |                           1. MUDAH                              |");
	puts	("\t\t\t\t\t\t   |                           2. SEDANG                             |");
	puts	("\t\t\t\t\t\t   |                           3. SULIT                              |");
    puts	("\t\t\t\t\t\t   +=================================================================+");
    printf	("\t\t\t\t\t\t\t\t---> Pilih level Quiz yang Anda inginkan >> "); scanf("%d", choice);
}

void quizmudah() {
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
	int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

	char guess[3];
	int score;
   	// unsigned int x_hours=0;
	// unsigned int x_minutes=0;
	// unsigned int x_seconds=0;
	// unsigned int x_milliseconds=0;
	// unsigned int totaltime=0,count_down_time_in_secs=0,time_left=0;

	// clock_t x_startTime,x_countTime;
	// count_down_time_in_secs=10;  // 1 minute is 60, 1 hour is 3600


    // x_startTime=clock();  // start clock
    // time_left=count_down_time_in_secs-x_seconds;   // update timer

	printf("QUIZ GAME\n");
	loadingBar();
	for(int i = 0; i < numberOfQuestions; i++) {
//      printf("*******\n");
//      printf("%s\n", questions[i]);
//      printf("*******\n");
//
//      for(int j = (i * 4); j < (i * 4) + 4; j++)
//      {
//         printf("%s\n", options[j]);
//      }
		//count_down_time_in_secs=10; x_seconds=0;
		//time_left=count_down_time_in_secs-x_seconds; // update timer
		// while (time_left>0){
		int x=7;
		system("cls");
		while (x>0){
			// x_countTime=clock(); // update timer difference
			// x_milliseconds=x_countTime-x_startTime;
			// x_seconds=(x_milliseconds/(CLOCKS_PER_SEC))-(x_minutes*60);
			// x_minutes=(x_milliseconds/(CLOCKS_PER_SEC))/60;
			// x_hours=x_minutes/60;
			// time_left=count_down_time_in_secs-x_seconds; // subtract to get difference
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
			Sleep(1000);
			x--;
			// printf( "\nYou have %d seconds left ( %d ) count down timer by TopCoder ",time_left,count_down_time_in_secs);
		}
		system("cls");
		printf("\n\n\t\t\t\t\t\t\t\t\t*************************");
    	printf("\n\t\t\t\t\t\t\t\t\t--> Jawaban Anda: ");
    	//scanf("%c", &guess[i]);
    	guess[i] = getch();
    	printf("\n\t\t\t\t\t\t\t\t\t-------------------------");
    	//scanf("%c"); //clear \n from input buffer

		guess[i] = toupper(guess[i]);
		printf("\n\t\t\t\t\t\t\t\t\t--> Pilihan Anda: %c\n", guess[i]);

		if(guess[i] == answers[i]){
    		printf("\t\t\t\t\t\t\t\t\t=>  BENAR!");
    		printf("\n\t\t\t\t\t\t\t\t\t*************************");
    		score++;
    	} else {
        	printf("\t\t\t\t\t\t\t\t\t=>  SALAH :(");
        	printf("\n\t\t\t\t\t\t\t\t\t*************************");
    	}
		Sleep(1000);
	}
	loadingBar();
	system("cls");
	printf	("\n\n\n\t\t\t\t\t\t        __| |____________________________________________| |__  \n");
	printf	("\t\t\t\t\t\t       (__   ____________________________________________   __) \n");
	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
	printf	("\t\t\t\t\t\t          | |           NILAI ANDA ADALAH: %d/%d          | |     \n", score, numberOfQuestions);
	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
	printf	("\t\t\t\t\t\t        __| |____________________________________________| |__  \n");
	printf	("\t\t\t\t\t\t       (__   ____________________________________________   __) \n");
	printf	("\t\t\t\t\t\t          | |                                            | |    \n"); 
	
//	printf("NILAI ANDA ADALAH: %d/%d\n", score, numberOfQuestions);
	
	if (score >= 8 && score <= 10){
		printf	("\n\t\t\t\t\t\t\t---> Anda mendapatkan nilai yang sempurna! Selamat! <---");
	} else if(score >= 5 && score < 8){
		printf	("\n\t\t\t\t\t\t    ---> Nilai Anda kurang sempurna :(, Ayo coba lagi Quiznya! <---");
	} else {
		printf	("\n\t\t\t\t\t   ---> Nilai Anda tidak sempurna ;(, Jangan menyerah! Ayo coba lagi Quiznya! <---");
	}
}

void quizsedang(){
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
	int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

	char guess[3];
	int score;

	printf("QUIZ GAME\n");
	loadingBar();

	for(int i = 0; i < numberOfQuestions; i++) {
//      printf("*******\n");
//      printf("%s\n", questions[i]);
//      printf("*******\n");
//
//      for(int j = (i * 4); j < (i * 4) + 4; j++)
//      {
//         printf("%s\n", options[j]);
//      }
		//count_down_time_in_secs=10; x_seconds=0;
		//time_left=count_down_time_in_secs-x_seconds; // update timer
		// while (time_left>0){
		int x=10;
		system("cls");
		while (x>0){
			// x_countTime=clock(); // update timer difference
			// x_milliseconds=x_countTime-x_startTime;
			// x_seconds=(x_milliseconds/(CLOCKS_PER_SEC))-(x_minutes*60);
			// x_minutes=(x_milliseconds/(CLOCKS_PER_SEC))/60;
			// x_hours=x_minutes/60;
			// time_left=count_down_time_in_secs-x_seconds; // subtract to get difference
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
			// printf( "\nYou have %d seconds left ( %d ) count down timer by TopCoder ",time_left,count_down_time_in_secs);
		}
		system("cls");
		printf("\n\n\t\t\t\t\t\t\t\t\t*************************");
    	printf("\n\t\t\t\t\t\t\t\t\t--> Jawaban Anda: ");
    	//scanf("%c", &guess[i]);
    	guess[i] = getch();
    	printf("\n\t\t\t\t\t\t\t\t\t-------------------------");
    	//scanf("%c"); //clear \n from input buffer

		guess[i] = toupper(guess[i]);
		printf("\n\t\t\t\t\t\t\t\t\t--> Pilihan Anda: %c\n", guess[i]);

		if(guess[i] == answers[i]){
    		printf("\t\t\t\t\t\t\t\t\t=>  BENAR!");
    		printf("\n\t\t\t\t\t\t\t\t\t*************************");
    		score++;
    	} else {
        	printf("\t\t\t\t\t\t\t\t\t=>  SALAH :(");
        	printf("\n\t\t\t\t\t\t\t\t\t*************************");
    	}
		Sleep(1000);
	}
	loadingBar();
	system("cls");
	printf	("\n\n\n\t\t\t\t\t\t        __| |____________________________________________| |__  \n");
	printf	("\t\t\t\t\t\t       (__   ____________________________________________   __) \n");
	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
	printf	("\t\t\t\t\t\t          | |           NILAI ANDA ADALAH: %d/%d          | |     \n", score, numberOfQuestions);
	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
	printf	("\t\t\t\t\t\t        __| |____________________________________________| |__  \n");
	printf	("\t\t\t\t\t\t       (__   ____________________________________________   __) \n");
	printf	("\t\t\t\t\t\t          | |                                            | |    \n"); 
	
//	printf("NILAI ANDA ADALAH: %d/%d\n", score, numberOfQuestions);
	
	if (score >= 8 && score <= 10){
		printf	("\n\t\t\t\t\t\t\t---> Anda mendapatkan nilai yang sempurna! Selamat! <---");
	} else if(score >= 5 && score < 8){
		printf	("\n\t\t\t\t\t\t    ---> Nilai Anda kurang sempurna :(, Ayo coba lagi Quiznya! <---");
	} else {
		printf	("\n\t\t\t\t\t   ---> Nilai Anda tidak sempurna ;(, Jangan menyerah! Ayo coba lagi Quiznya! <---");
	}
 }
 
 void quizsulit(){
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
	int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

	char guess[3];
	int score;

	printf("QUIZ GAME\n");
	loadingBar();

	for(int i = 0; i < numberOfQuestions; i++) {
//      printf("*******\n");
//      printf("%s\n", questions[i]);
//      printf("*******\n");
//
//      for(int j = (i * 4); j < (i * 4) + 4; j++)
//      {
//         printf("%s\n", options[j]);
//      }
		//count_down_time_in_secs=10; x_seconds=0;
		//time_left=count_down_time_in_secs-x_seconds; // update timer
		// while (time_left>0){
		int x=15;
		system("cls");
		while (x>0){
			// x_countTime=clock(); // update timer difference
			// x_milliseconds=x_countTime-x_startTime;
			// x_seconds=(x_milliseconds/(CLOCKS_PER_SEC))-(x_minutes*60);
			// x_minutes=(x_milliseconds/(CLOCKS_PER_SEC))/60;
			// x_hours=x_minutes/60;
			// time_left=count_down_time_in_secs-x_seconds; // subtract to get difference
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
			// printf( "\nYou have %d seconds left ( %d ) count down timer by TopCoder ",time_left,count_down_time_in_secs);
		}
		system("cls");
		printf("\n\n\t\t\t\t\t\t\t\t\t*************************");
    	printf("\n\t\t\t\t\t\t\t\t\t--> Jawaban Anda: ");
    	//scanf("%c", &guess[i]);
    	guess[i] = getch();
    	printf("\n\t\t\t\t\t\t\t\t\t-------------------------");
    	//scanf("%c"); //clear \n from input buffer

		guess[i] = toupper(guess[i]);
		printf("\n\t\t\t\t\t\t\t\t\t--> Pilihan Anda: %c\n", guess[i]);

		if(guess[i] == answers[i]){
    		printf("\t\t\t\t\t\t\t\t\t=>  BENAR!");
    		printf("\n\t\t\t\t\t\t\t\t\t*************************");
    		score++;
    	} else {
        	printf("\t\t\t\t\t\t\t\t\t=>  SALAH :(");
        	printf("\n\t\t\t\t\t\t\t\t\t*************************");
    	}
		Sleep(1000);
	}
	loadingBar();
	system("cls");
	printf	("\n\n\n\t\t\t\t\t\t        __| |____________________________________________| |__  \n");
	printf	("\t\t\t\t\t\t       (__   ____________________________________________   __) \n");
	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
	printf	("\t\t\t\t\t\t          | |           NILAI ANDA ADALAH: %d/%d          | |     \n", score, numberOfQuestions);
	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
	printf	("\t\t\t\t\t\t        __| |____________________________________________| |__  \n");
	printf	("\t\t\t\t\t\t       (__   ____________________________________________   __) \n");
	printf	("\t\t\t\t\t\t          | |                                            | |    \n"); 
	
//	printf("NILAI ANDA ADALAH: %d/%d\n", score, numberOfQuestions);
	
	if (score >= 8 && score <= 10){
		printf	("\n\t\t\t\t\t\t\t---> Anda mendapatkan nilai yang sempurna! Selamat! <---");
	} else if(score >= 5 && score < 8){
		printf	("\n\t\t\t\t\t\t    ---> Nilai Anda kurang sempurna :(, Ayo coba lagi Quiznya! <---");
	} else {
		printf	("\n\t\t\t\t\t   ---> Nilai Anda tidak sempurna ;(, Jangan menyerah! Ayo coba lagi Quiznya! <---");
	}
 }