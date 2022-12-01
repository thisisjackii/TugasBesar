#include <stdio.h>
#include <stdlib.h>

void Pertanyaan(int PilGan, char *jawaban)
{rand();
	PilGan=(rand()%2);
	if (PilGan == 1) 
	{
		printf("Hitunglah pertanyaan berikut:");
		printf("5 + 5 = ");
		printf("a. 5");
		printf("b. 10");
		printf("Jawaban: ");
		scanf("%c", &*jawaban);
		switch(*jawaban){
			case 'a': case 'A':
				printf("Jawaban Anda salah :("); break;
			case 'b': case 'B':
				printf("Jawaban Anda benar :)"); break;
			default:
				break;		
		}
	}else(PilGan == 2);
	{
		printf("Hitunglah pertanyaan berikut:");
		printf("5 + 6 = ");
		printf("a. 6");
		printf("b. 11");
		printf("Jawaban: ");
		scanf("%c", &*jawaban);
		switch(*jawaban){
			case 'a': case 'A':
				printf("Jawaban Anda salah :("); break;
			case 'b': case 'B':
				printf("Jawaban Anda benar :)"); break;
			default:
				break;
		}	
	} 
}


int main(){
	int Pilihan; char Jawaban;
	Pertanyaan(Pilihan, &Jawaban);
}
