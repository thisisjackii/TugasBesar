#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

//int metricConv(int iterator, int measure, int incr, char metrInp){
//	if(metrInp==metric[iterator] && incr==1){
//		return measure;
//	}else{
//		return metricConv(iterator-1, measure, 1/incr, metrInp);
//	}
//}

int main(){
	char metric[] = {'K', 'H', 'D', 'x', 'd', 'C','M'}, inp, outInp, msr; int iter; // iter = 1000000;
	printf("Ukuran? (bilangan dan satuannya) ");
	scanf("%d %c", &iter, &inp);
	printf("Ubah ke satuan apa? ");
	scanf(" %c", &outInp);
	for(int i=0; i<7; i++){
		if(inp!=metric[i]){
			iter = iter / 10;
			printf("\ni Iter %d = %d", i+1, iter);
		}else{
			for(int j=0; j<7; j++){
				if(outInp!=metric[j]){
					iter = iter * 10;
					printf("\nj Iter %d = %d", j+1, iter);
				}else{
					break;
				}
			}
			break;
		}
	}
	printf("\n%d %c", iter, outInp);
//	getch(); system("cls");
//	int a, b, c; char d;
//	printf("Input something: ");
//	scanf("%d %d %d %c", &a, &b, &c, &d);
//	msr = metricConv(a, b, c, d);
//	printf("\nHasil ngide: %d", msr);
	return 0;
}
