/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	int n;
	int i, j;
	int temp = 0;
	int sum = 0;
	int a[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	int judge[105] = {};
	char s[105][20];
	char M[] = "10X98765432";
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", s[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < 17; j++) {
			temp = temp + (int(s[i][j]) - 48)*a[j];
		}
		if (s[i][17] != M[temp % 11]) {
			judge[i] = -1;
		}
		temp = 0;
	}
	for (i = 0; i < n; i++) {
		sum += judge[i];
	}
	if (sum == 0) {
		printf("All passed");
	}
	if (sum < 0) {
		for (i = 0; i < n; i++) {
			if (judge[i] == -1) {
				printf("%s\n", s[i]);
			}
		}
	}
	system("pause");
	return 0;
}*/