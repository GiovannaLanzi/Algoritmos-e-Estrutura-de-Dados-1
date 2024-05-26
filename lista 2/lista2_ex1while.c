#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale (LC_ALL, "Portuguese");
	int i = 1;
	while(i<=10)
	{
	 	printf("%d\t", i);
		 i++;
	}
	return 0;
}
