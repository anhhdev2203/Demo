# include <stdio.h>

int main () {
	int x;
	printf ("Nhap gia tri x = ");
	scanf ("%d", &x);
	if ( x >= 0 ) {
		printf ("Can bac 2 cua x la %.3f", sqrt(x));
	} else {
		printf ("Binh phuong cua x la %d", x*x);
	}
}
