#include <stdio.h>



int f(int m){
	
	int z = m * m;
	return(z);
}


int main(){

	int x = 29;
	char c = 'M';

	printf("x = %d (0x%x)\n", x, x);
	printf("c = %c (%d)\n", c, c);
	printf("x is at %p and c is at %p\n", &x, &c);

	return(0);

}
