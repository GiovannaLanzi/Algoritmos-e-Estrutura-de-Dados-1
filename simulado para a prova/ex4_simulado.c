#include <stdio.h>
int main(void){
	int a=25, b=10, c=0;
	c= ++a + --a * b -4 % 3 * a;
	printf("%d", c);
	return 0;
}
