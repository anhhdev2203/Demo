# include <stdio.h>
# include <math.h>
int main ( ){
	int x;
	printf ("Nhap gia tri x = ");
	scanf ("%d", &x);
	if ( x > 0) {
		printf ("Can bac 2 cua x = %.3f", sqrt(x));
	} else {
		printf ("Gia tri x = %d", x);
	}
	
}
