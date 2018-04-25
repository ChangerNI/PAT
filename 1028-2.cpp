/*#include<stdio.h>
#include<stdlib.h>
int a[100005];
int b[100005];
int c[100005] = {};
int main() {
	int n;
	int k;
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &k);
	for (i = 0; i < k; i++) {
		scanf("%d", &b[i]);
	}
	int j;
	for (i = 0; i < k; i++) {
		for (j = 0; j < n; j++) {
			if (b[i] == a[j]) {
				c[i]++;
			}
		}
	}
	for (i = 0; i < k; i++) {
		if (i < k - 1) {
			printf("%d ", c[i]);
		}
		else {
			printf("%d", c[i]);
		}
		
	}
	system("pause");
	return 0;
}*/