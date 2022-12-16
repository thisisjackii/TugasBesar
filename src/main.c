#include "ADT.h"

int main(){
	int numChosen, numInput, result, QuizChosen, banyaknya;
	float x, y, resfloat;
	char oper, theUnit, expectedUnit, prompt; //char namaKonversi[], contohInputKonv[];
	do{
		if_you_chose_wrong:
		system("cls");
		system("color 0f");
		header();
		menuChoice(&numChosen);
		switch(numChosen){
			case 1:
				if_you_chose_wrong_conv:
				conversionsMenu(&numChosen);
				switch(numChosen){
					case 1:
						//pilihSuhu(numInput, &theUnit, expectedUnit);
						banyaknya = 3;
						char ktrSuhu[3][100] = {
							"F = Fahrenheit",
							"C = Celcius", 
							"K = Kelvin"
						};
						convDisplay("Suhu", &banyaknya, &numInput, ktrSuhu, "70 C", &theUnit, &expectedUnit);
//						printf("\n\n%d %c ke %c\n", numInput, theUnit, expectedUnit);
//						system("pause");
						result = temprConv(&numInput, &theUnit, &expectedUnit);
//						printf("%d", result);
						if(result == 69){
							printf("Function is not working! Sorry!");
						}
						break;
					case 2:
						//pilihSistemBilangan(&numInput, &theUnit, &expectedUnit);
						banyaknya = 4;
						char ktrSisBil[4][100] = {
							"D = Desimal",
							"B = Biner",
							"O = Oktal",
							"H = Heksadesimal"
						};
						convDisplay("Sistem Bilangan", &banyaknya, &numInput, ktrSisBil, "120 D", &theUnit, &expectedUnit);
						numSys();
						break;
					case 3:
//						namaKonversi[] = "Metrik";
						banyaknya = 7;
						char ktrMetrik[7][100] = {
							"K = Kilo (k-)",
							"H = Hekto (h-)",
							"D = Deka (da-)",
							"X = (m/g/l)",
							"d = Desi (d-)",
							"C = Senti (c-)",
							"m = Mili (m-)"
						};
//						contohInputKonv[] = "85 K";
						convDisplay("Metrik", &banyaknya, &numInput, ktrMetrik, "85 K", &theUnit, &expectedUnit);
						//pilihMetrik(&numInput, &theUnit);
						resfloat = metricConv(numInput, &theUnit, &expectedUnit);
						printf("\n\nHasil: %f %c", resfloat, expectedUnit);
						break;
					case 4:
						banyaknya = 3;
						int remaining[2];
						char ktrWaktu[3][100] = {
							"J = jam",
							"M = menit",
							"D = detik"
						};
						convDisplay("Waktu", &banyaknya, &numInput, ktrWaktu, "60 M", &theUnit, &expectedUnit);
						//pilihWaktu(&numInput, &theUnit);
						//printf("%d", numInput);
						result = timeCalc(numInput, &theUnit, &expectedUnit, remaining);
						printf("\n\nHasil: %d %c", result, expectedUnit, remaining);
						if(!remaining[1]){
							printf(" %d %c", remaining[0], 'D');
						}else{
							printf(" %d %c %d %c", remaining[0], 'M', remaining[1], 'D');
						}
						break;
					default:
						printf("\n\n\t\t\t\t\t\t\t\t\t     Wrong input."); sleep(1); 
						goto if_you_chose_wrong_conv; break;
				}
				break;
			case 2:
				if_you_chose_wrong_arith:
				arithmeticsMenu(&numChosen);
				switch(numChosen){
					case 1:
						arithOperator(&x, &oper, &y);
						break;
					case 2:
						riwayat();
						break;	
					case 3:
						hapusriwayat();
						break;					
				    default:
						printf("\n\n\t\t\t\t\t\t\t\t\t     Wrong input."); sleep(1);  
						goto if_you_chose_wrong_arith; break;
				}
				break;
			case 3: 
				lessons();
				break;
			case 4:
				if_you_chose_wrong_quiz:
				menuQuiz(&numChosen);
				switch(numChosen){
					case 1:
						quizmudah();
						break;
					case 2:
						quizsedang();
						break;
					case 3:
						quizsulit();
						break;
					default:
						printf("\n\n\t\t\t\t\t\t\t\t\t     Wrong input."); sleep(1); 
						goto if_you_chose_wrong_quiz; break;
					}
				break;
			default:
				printf("\n\n\t\t\t\t\t\t\t\t\t      Wrong input."); sleep(1); 
				goto if_you_chose_wrong; break;
		}
		printf("\n\n\t\t\t\t\t\t\t   The program is done. Would you like to retry? (y/n)");
		prompt = getch();
		while(!(prompt=='N'||prompt=='n'||prompt=='Y'||prompt=='y')){
			header();
			printf("\n\n\t\t\t\t\t\t\t   Wrong input! Is it a yes (Y) or no (N)?");
			prompt = getch();
		}
	}while(prompt=='Y'||prompt=='y');
	headerakhir();
	return 0;
}