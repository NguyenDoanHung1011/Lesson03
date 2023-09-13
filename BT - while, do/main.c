#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//bai1
	int a, S = 0;
	printf("Nhap du lieu a:");
	scanf("%d", &a);
	
	for(int i = 1; i <= a; i++) {
		S = S + i;
	}
	
	printf("\nKet qua la %d", S);
	
	//bai2
	int b;
  	int Z = 0;
  	printf("\nNhap du lieu b: ");
  	scanf("%d", &b);
  	
 	for(int j = 1; j <= b; j++) {
    	Z = Z + j * j;
  	}
	
	printf("\nKet qua la %d", Z);
	
	//bai3
	int c;
	float Y = 0;
	printf("\nNhap du lieu c:");
	scanf("%d", &c);
	
	for(int k = 1; k <= c; k++) {
		Y = Y + 1.0/k;
	}
	
	printf("\nKet qua la %f", Y);
	
	//bai4
	int d;
	float X = 0;
	printf("\nNhap du lieu d:");
	scanf("%d", &d);
	
	for(int m = 1; m <= d; m++) {
		X = X + 1.0/(2*m);
	}
	
	printf("\nKet qua la %f", X);
	
	//bai5
	int e;
	float O;
	printf("\nNhap du lieu e:");
	scanf("%d", &e);
	
	for(int n = 0; n <= e; n++) {
		O = O + 1.0/(2*n+1);
	}
	
	printf("\nKet qua la %f", O);
	
	return 0;
}
