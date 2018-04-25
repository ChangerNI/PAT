/*#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b;
	int sum = 0;
	int z[10000];
	int d;
	int i;
	int count = 0;
	scanf("%d%d%d", &a, &b, &d);
	sum = a + b;
	while (sum) {
		z[count] = sum % d;
		sum = sum / d;
		count++;
	}
	for (i = count-1; i >= 0; i--) {
		printf("%d", z[i]);
	}
	if (a == 0 && b == 0) {
		printf("0");
	}
	system("pause");
	return 0;
}*/