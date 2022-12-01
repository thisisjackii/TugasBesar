#include "ADT.h"

int main() {
	char questions[][100] = {"1. Hasil perhitungan 80 + 42 yaitu: ",
							"2. Hasil dari 100 + 20 x 13 yaitu:  ",
							"3. Total dari 1.444 + 112 - 20 :    ",
							"4. Perhitungan dari 99 + 89 - 22:   ",
							"5. Perhitungan 66 - 13 + 10 + 23:   ",
							"6. Satuan Desimeter adalah:         ",
							"7. Satuan Miligram adalah:          ",
							"8. Sistem bilangan biner menggunakan dua simbol khusus, yaitu: ",
							"9. Rumus dari skala Celcius ke Kelvin adalah: ",
							"10. Cara menghitung miligram ke gram dengan :"};

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
		while (x>0){
			// x_countTime=clock(); // update timer difference
			// x_milliseconds=x_countTime-x_startTime;
			// x_seconds=(x_milliseconds/(CLOCKS_PER_SEC))-(x_minutes*60);
			// x_minutes=(x_milliseconds/(CLOCKS_PER_SEC))/60;
			// x_hours=x_minutes/60;
			// time_left=count_down_time_in_secs-x_seconds; // subtract to get difference
			system("cls");
			printf	("\n\t\t\t\t\t         (____________________________  PERTANYAAN  ___________________________)    \n");
			printf	("\t\t\t\t\t        ( \\                 					              / )  \n");
			printf	("\t\t\t\t\t       ( \\ )               					             ( / ) \n");
			printf	("\t\t\t\t\t      ( ) (  %s                             ) ( ) \n", questions[i] ); 
			printf	("\t\t\t\t\t       ( / )               					             ( \\ ) \n");
			printf	("\t\t\t\t\t        ( /                 					              \\ )  \n");
			printf	("\t\t\t\t\t         (_____________________________________________________________________)   \n\n");

			for(int j = (i * 4); j < (i * 4) + 4; j++){
				printf("\t\t\t\t\t\t\t\t\t         %s\n", options[j]);
			}
			printf( "\n\t\t\t\t\t\t\t\t       --> Waktu Anda %d detik lagi.", x);
			Sleep(1000);
			x--;
			// printf( "\nYou have %d seconds left ( %d ) count down timer by TopCoder ",time_left,count_down_time_in_secs);
		}
		system("cls");
    	printf("\nJawaban Anda: ");
    	//scanf("%c", &guess[i]);
    	guess[i] = getch();
    	//scanf("%c"); //clear \n from input buffer

		guess[i] = toupper(guess[i]);
		printf("\nPilihan Anda: %c\n", guess[i]);

		if(guess[i] == answers[i]){
    		printf("BENAR!\n");
    		score++;
    	} else {
        	printf("SALAH :(\n");
    	}
		Sleep(1000);
	}
	system("cls");
	printf	("\t\t\t\t\t\t        __| |____________________________________________| |__  \n");
	printf	("\t\t\t\t\t\t       (__   ____________________________________________   __) \n");
	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
	printf	("\t\t\t\t\t\t          | |                                            | |    \n");
	printf	("\t\t\t\t\t\t          | |          NILAI ANDA ADALAH: %d/%d           | |     \n", score, numberOfQuestions);
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

	return 0;
}

// BLUEPRINTS! DO NOT UN-COMMENT THESE!!!
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdlib.h>

// typedef struct {
// 	int daNum;
// 	char* daName;
// } daList;

// int main(){
// 	daList menuList[5];

// 	for(int i=0; i<5; i++){
// 		menuList[i].daNum = i+1;
// 		menuList[i].daName = "Hello World";
// 	}
// 	printf("============================================\n");
// 	for(int i=0; i<5;i++){
// 		printf("           %d. %s                \n", menuList[i].daNum, menuList[i].daName);
// 	}
// 	printf("============================================\n");
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #include <string.h>

// int metricMeasure(int* size, bool* doesIncrease){
// 	if(doesIncrease){
// 		return *size * 10;
// 	}else{
// 		return *size * 0.1;
// 	}
// }

// int main(){
// 	int num; bool measureChange; char sat[] = "";
// 	char* satuan[] = {"k", "h", "da", "\0", "d", "c", "m"};
// 	printf("Masukkan besaran serta satuannya: ");
// 	scanf("%d", &num); fgets(sat, sizeof(sat), stdin);
// 	int len = sizeof(satuan)/sizeof(satuan[0]);
// 	int x;
// 	for(int i = 0; i < len; ++i){
// 	    if(!strcmp(satuan[i], sat)){
// 	    	printf("Okay!\n");
// 	        // Do your stuff
// 	    }
// 	}
// 	printf(""); puts(sat);
// //	num = 1;
// 	for(int i=0; i<7; i++){
// 		printf("%d %sm\n", num, satuan[i]);
// 		num = metricMeasure(&num, &measureChange);
// 	}
// 	return 0;
// }