#include <stdio.h>
int main(){
	float vet1[]={2.5, 3.5, 4.5, 5.5, 6.5};
	int i=0, vet2[]={1, 2, 3, 4, 5, 6};
	
	printf("---------------------------------------\n");

	for(i=0; i<5; i++)
		printf("%.1f ", vet1[i]);
	
	printf("\n");
	for(i=0; i<6; i++)
		printf("%2i ", vet2[i]);
	
	printf("\n---------------------------------------");
	return 0;
}


