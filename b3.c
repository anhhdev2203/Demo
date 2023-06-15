# include <stdio.h>

int main () {
	int numberOfShirt, money;
	printf ("Nhap so ao: ");
	scanf ("%d", &numberOfShirt);
	printf ("Nhap so tien cua 1 ao: ");
	scanf ("%d", &money);
	int totalMoney = numberOfShirt * money;
	float paidMoney;
	if ( totalMoney > 100 ) {
		paidMoney = totalMoney * 1.15;
	}
	printf ("Tong tien la %d, tien phai tra la %.3f", totalMoney, paidMoney);
}
