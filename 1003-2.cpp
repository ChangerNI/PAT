/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a[200000];
int b[200000];
int main() {
	int m, n;
	int i;
	int j;
	int count = 0;
	int flag = 0;
	
	scanf("%d %d", &m, &n);
	for (i = 0; i <= 120000; i++) {
		a[i] = i;
	}
	for (i = 2; i <= 120000; i++) {
		if (a[i] == 2) {
			b[count] = a[i];
			count++;
		}
		if (a[i] == 3) {
			b[count] = a[i];
			count++;
		}
		for (j = 2; j <= int(sqrt(a[i])); j++) {
			if (a[i] % j == 0) {
				break;
			}
			if (j == int(sqrt(a[i]))) {
				b[count] = a[i];
				count++;
			}
		}
	}
	for (i = m-1; i < n; i++) {
		flag++;
		if (i == n-1) {
			printf("%d", b[i]);
		}
		else {
			if (flag % 10 == 0 && flag != 0) {
				printf("%d", b[i]);
			}
			if (flag % 10 != 0) {
				printf("%d ", b[i]);
			}
			
		}
		if (flag % 10 == 0 && flag != 0) {
			printf("\n");
		}
	}
	system("pause");
	return 0;
}*/