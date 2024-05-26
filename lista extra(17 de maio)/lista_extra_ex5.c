#include <stdio.h>
int main(){
	int n=0, i=0, j=0;
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("%1d ", j);
		}
		printf("\n");
	}
	
	return 0;
}
