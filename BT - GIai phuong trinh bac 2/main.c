#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c, x;
	printf("Nhap du lieu a:");
	scanf("%f", &a);
	printf("Nhap du lieu b:");
	scanf("%f", &b);
	printf("Nhap du lieu c:");
	scanf("%f", &c);
	
	if(b*b - 4*a*c < 0) {
		printf("Khong co nghiem");
	} else {
		x = -c / (a+b);
		printf("Ket qua x = %f", x);
	}
	return 0;
}
