#include <stdio.h>
int main(void){
	int n=0, i=0;
	printf("Dig um n natural: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
			  if(n%i==0)
			  			printf("%d\n",i);
	         else
	         	 printf("");
	}
	return 0;
}
	
			
