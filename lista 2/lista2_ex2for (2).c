#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale (LC_ALL, "Portuguese");
	int i=0;
	
	for(i=1; i<=100; i++){
			 if(i%2==0){
			 			printf("%d\t", i);
			 }
			 else{
			 	  printf("");
			 }
	   
	}
	return 0;
}
