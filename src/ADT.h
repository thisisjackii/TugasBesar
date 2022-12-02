#ifndef AGAMJACK
#define AGAMJACK
#define PANJANG 256

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

int Conversion, Arithmatic, Quiz, cnt, i, bin[32], angka, Riwayat[100]; char tempunit, inisial, longunit, massaunit, timeunit, outunit; 

void header();
void loadingBar();
int temprConv(float tempra, char tempraUnit, char tmpOutputUnit);
void numSys();
void metricConv(); //longConv()
void massConv();
void timeCalc(); //timeConv()
void pilihSuhu(float tempra, char *tempraUnit, char tmpOutputUnit); //Pilih_Suhu()
void pilihSistemBilangan(); //Pilih_SistemBilangan()
void pilihMetrik(); //Pilih_Panjang()
//void pilihMassa(); //Pilih_Massa()
void pilihWaktu(); //Pilih_Waktu()
void conversionsMenu(); //konversi()
void arithmeticsMenu(); //aritmatika()
void theCalculator();
void arithOperator();
float summation();
float subtraction();
float multiplication();
float division();
void menuQuiz();
void quizmudah();
void quizsedang();
void quizsulit();
void lessons(); //materi()
void menuChoice(); //Pilih_Menu()

#endif