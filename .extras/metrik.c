#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int metricMeasure(int* size, bool* doesIncrease){
	if(doesIncrease){
		return *size * 10;
	}else{
		return *size * 0.1;
	}
}

int main(){
	int num; bool measureChange; char sat[] = "";
	char* satuan[] = {"k", "h", "da", "\0", "d", "c", "m"};
	printf("Masukkan besaran serta satuannya: ");
	scanf("%d", &num); fgets(sat, sizeof(sat), stdin);
	int len = sizeof(satuan)/sizeof(satuan[0]);
	int x;
	for(int i = 0; i < len; ++i){
	    if(!strcmp(satuan[i], sat)){
	    	printf("Okay!\n");
	        // Do your stuff
	    }
	}
	printf(""); puts(sat);
//	num = 1;
	for(int i=0; i<7; i++){
		printf("%d %sm\n", num, satuan[i]);
		num = metricMeasure(&num, &measureChange);
	}
	return 0;
}
