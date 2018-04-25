/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int n;
	char s;
	int ceng = 0;
	int max;
	int yushu;
	int i, j;
	scanf("%d %c", &n, &s);
	while (ceng * (ceng + 2) * 2 + 1 <= n) {
		ceng++;
	}
	ceng--;
	max = 2 * ceng + 1;
	yushu = n - ceng * (ceng + 2) * 2 - 1;
	for (i = ceng; i >= 0; i--) {
		for (j = 0; j < (max - (2 * i + 1)) / 2; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++) {
			printf("%c", s);
		}
		printf("\n");
	}
	for (i = 1; i <=ceng; i++) {
		for (j = 0; j < (max - (2 * i + 1)) / 2; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++) {
			printf("%c", s);
		}
		printf("\n");
	}
	if (n == 0) {
		yushu = 0;
	}
	if (n == 1) {
		printf("0");
	}
	if (yushu > 0) {
		printf("%d", yushu);
	}
	system("pause");
	return 0;
}*/