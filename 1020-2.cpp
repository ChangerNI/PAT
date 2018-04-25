#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a[100005];
int main() {
	int n;
	int p;
	int i;
	int j;
	int temp;
	int M, m;
	int count = 0;
	int count_temp = 0;
	scanf("%d%d", &n, &p);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		m = a[i];
		for (j = n - 1; j >= 0; j--) {
			M = a[j];
			if (M <= m * p) {
				count_temp = j - i + 1;
				if (count < count_temp) {
					count = count_temp;
				}
			}
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}