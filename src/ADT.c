#include <stdio.h>
#include <stdlib.h>
#include "ADT.h"

void clearScreen(){
#ifdef _WIN32
	system("cls");
#elif __linux__
	printf("\033c");
#elif __unix__
	printf("clear");
#else
	//
#endif
}
void welcomePage(){
	clearScreen();
    printf("Hello World");
}
