#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, x;
	printf("Nhap du lieu a:");
	scanf("%f", &a);
	printf("Nhap du lieu b:");
	scanf("%f", &b);
	
	x = -b / a;
	printf("\nKet qua: %f", x);
	return 0;
}
