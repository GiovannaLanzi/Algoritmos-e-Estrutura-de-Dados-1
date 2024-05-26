#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale (LC_ALL, "Portuguese");
	int i=1;
	while(i<=100)
	{
	 	if(i%2 == 0){
			   printf("%d\t", i);
	 	}
		else{
			 printf("");
		}	
	i++;
    }
    return 0;
 }


			 
