#include <stdio.h>
#include <ctype.h>

void Quiz(char pertanyaan[i], char opsi[j], char jawaban[i], int number, char *pilihan, int nilai);
	printf("QUIZ GAME\n");
	for(int i = 0; i < number; i++)
   {
      printf("*********************\n");
      printf("%s\n", pertanyaan[i]);
      printf("*********************\n");

      for(int j = (i * 4); j < (i * 4) + 4; j++)
      {
         printf("%s\n", opsi[j]);
      }

      printf("pilihan: ");
      scanf("%c", &*pilihan);
      scanf("%c"); //clear \n from input buffer

      *pilihan = toupper(*pilihan);

      if(*pilihan == jawaban[i])
      {
         printf("CORRECT!\n");
         nilai++;
      }
      else
      {
         printf("WRONG!\n");
      }
   }
   printf("*********************\n");
   printf("FINAL SCORE: %d/%d\n", nilai, number);
   printf("*********************\n");
 
   return 0;
}

int main()
}
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
    
    Quiz(question, options, answer, numberOfQuestions, &guess, score);

}
