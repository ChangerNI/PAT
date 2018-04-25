/*#include<stdio.h>
#include<stdlib.h>
int main() {
	int n;
	char c;
	int i, j;
	int m;
	scanf("%d %c", &n, &c);
	for (i = 0; i < n; i++) {
		printf("%c", c);
	}
	printf("\n");
	if (n % 2 != 0) {
		m = n / 2 + 1;
	}
	else {
		m = n / 2;
	}
	for (j = 0; j < m - 2; j++) {
		printf("%c", c);
		for (i = 0; i < n - 2; i++) {
			printf(" ");
		}
		printf("%c\n", c);
	}
	for (i = 0; i < n; i++) {
		printf("%c", c);
	}
	system("pause");
	return 0;
}*/