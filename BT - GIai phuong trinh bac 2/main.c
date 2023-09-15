#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c, d;
	printf("Nhap du lieu a:");
	scanf("%f", &a);
	printf("Nhap du lieu b:");
	scanf("%f", &b);
	printf("Nhap du lieu c:");
	scanf("%f", &c);
	d=b*b - 4*a*c;
	
	if(a == 0) {
		if(b == 0) {
			if(c == 0) {
				printf("Phuong trinh co vo so nghiem!");
            } else {	
                printf("Phuong trinh vo nghiem!");
            }
		} else {
			printf("Ket qua x = %f", -c / b);
		}
	} else {
		if(d < 0) 
			printf("Khong co nghiem");
		else if(d == 0) 
			printf("Ket qua x = %f", -b / (2*a));
		else 
			printf("Ket qua x = %f va x = %f", (-b + sqrt(d)) / (2*a), (-b - sqrt(d)) / (2 * a));
	}
	return 0;
}
