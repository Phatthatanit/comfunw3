#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a, x;
char n[100];
void triangle() {
	for (int i = 1; i <= x; i++) {
		for (a = x; a >= i; a--) {
			printf("* ");
		}
		printf("\n");
	}
}
int main() {
	printf("Enter number : ");
	scanf("%d", &x);
	if (x <= 0) {
		printf("Error");
	}
	else {
		triangle();
	}
	return 0;
}