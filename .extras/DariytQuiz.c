#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main()
{
   char questions[][100] = {"1. What year did the C language debut?: ",
                            "2. Who is credited with creating C?:",
                            "3. What is the predecessor of C?: "};
                            
   char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
                          "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
                          "A. Objective C", "B. B", "C. C++", "D. C#"};
                          
   char answers[] = {'B', 'A', 'B'};
   int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

   char guess;
   int score;
   	unsigned int x_hours=0;
	unsigned int x_minutes=0;
	unsigned int x_seconds=0;
	unsigned int x_milliseconds=0;
	unsigned int totaltime=0,count_down_time_in_secs=0,time_left=0;

	clock_t x_startTime,x_countTime;
	count_down_time_in_secs=10;  // 1 minute is 60, 1 hour is 3600

 
    x_startTime=clock();  // start clock
    time_left=count_down_time_in_secs-x_seconds;   // update timer

   printf("QUIZ GAME\n");    

   for(int i = 0; i < numberOfQuestions; i++)
   {
//      printf("*********************\n");
//      printf("%s\n", questions[i]);
//      printf("*********************\n");
//
//      for(int j = (i * 4); j < (i * 4) + 4; j++)
//      {
//         printf("%s\n", options[j]);
//      }
	while (time_left>0){
		x_countTime=clock(); // update timer difference
		x_milliseconds=x_countTime-x_startTime;
		x_seconds=(x_milliseconds/(CLOCKS_PER_SEC))-(x_minutes*60);
		x_minutes=(x_milliseconds/(CLOCKS_PER_SEC))/60;
		x_hours=x_minutes/60;
		time_left=count_down_time_in_secs-x_seconds; // subtract to get difference 
		system("cls");
		printf("*********************\n");
		printf("%s\n", questions[i]);
	   	printf("*********************\n");
	
	   	for(int j = (i * 4); j < (i * 4) + 4; j++){
	   		printf("%s\n", options[j]);
		}
		printf( "\nYou have %d seconds left ( %d ) count down timer by TopCoder ",time_left,count_down_time_in_secs);
	}
		system("cls");
    	printf("\nguess: ");
    	scanf("%c", &guess);
    	scanf("%c"); //clear \n from input buffer

		guess = toupper(guess);

		if(guess == answers[i])	{
    		printf("CORRECT!\n");
    		score++;
    	} else {
        	printf("WRONG!\n");
    	}
	}
	printf("*********************\n");
   printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);
   printf("*********************\n");
 
   return 0;
}
