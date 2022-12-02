#include "ADT.h"

int main(){
	int numChosen, numInput, QuizChosen; float x, y; char oper, theUnit, expectedUnit, prompt;
	do{
		header();
		menuChoice(&numChosen);
		switch(numChosen){
			case 1:
				conversionsMenu(&numChosen);
				switch(numChosen){
					case 1:
						pilihSuhu(numInput, &theUnit, expectedUnit);
						break;
					case 2:
						pilihSistemBilangan(&numInput, &theUnit, &expectedUnit);
						break;
					case 3:
						pilihMetrik(&numInput, &theUnit);
						break;
					case 4:
						pilihWaktu(&numInput, &theUnit);
						break;
					default:
						printf("\n\n\t\t\t\t\t\t\t\t\t     Wrong input."); break;
				}
				break;
			case 2:
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
						printf("\n\n\t\t\t\t\t\t\t\t\t     Wrong input."); 
						break;
				}
				break;
			case 3: 
				lessons();
				break;
			case 4:
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
						printf("\n\n\t\t\t\t\t\t\t\t\t     Wrong input."); break;
					}
				break;
			default:
				printf("\n\n\t\t\t\t\t\t\t\t\t      Wrong input."); break;
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
