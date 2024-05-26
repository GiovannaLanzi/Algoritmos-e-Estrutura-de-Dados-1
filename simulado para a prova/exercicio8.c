#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i=0, primeiro=0;
	
	for(i=1; i<=500; i++){
			 if(i%11==0 && i%13==0){
			 		 primeiro=i;
			 		 break;
			 }
			 else{
			 	  printf("");
			 }
	}
	printf("%d", i);
	return 0;
}
