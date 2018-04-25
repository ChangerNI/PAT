/*#include<stdlib.h>
#include<math.h>
int main() {
	int a[10000];
	int b[10000];
	int a1 = 0, a2 = 0, a3 = 0, a5 = 0;
	float a4 = 0;
	int sum4 = 0;
	int count = 0, count2 = 0, count3 = 0;
	int i, j;
	while ((a[count]=getchar()) != '\n') {
		scanf("%d", &a[count]);
		count++;
	}
	for (i = 0; i < count; i++) {
		if (a[i] % 5 == 0 && a[i] % 2 == 0) {
			a1 += a[i];
		}
	}
	for (i = 0; i < count; i++) {
		if (a[i] % 5 == 1) {
			b[count2] = a[i];
			count2++;
		}
	}
	for (j = 0; j < count2; j++) {
		a2 = a2 + pow(-1, j + 2)*b[j];
	}
	for (i = 0; i < count; i++) {
		if (a[i] % 5 == 2) {
			a3++;
		}
	}
	for (i = 0; i < count; i++) {
		if (a[i] % 5 == 3) {
			sum4 += a[i];
			count3++;
		}
	}
	a4 = float(sum4*1.0) / float(count3*1.0);
	for (i = 0; i < count; i++) {
		if (a[i] % 5 == 4) {
			if (a5 < a[i]) {
				a5 = a[i];
			}
		}
	}
	if (a1 == 0) {
		printf("N ");
	}
	else {
		printf("%d ", a1);
	}
	if (a2 == 0) {
		printf("N ");
	}
	else {
		printf("%d ", a2);
	}

	if (a3 == 0) {
		printf("N ");
	}
	else {
		printf("%d ", a3);
	}

	if (sum4 == 0) {
		printf("N ");
	}
	else {
		printf("%.1f ", a4);
	}

	if (a5 == 0) {
		printf("N");
	}
	else {
		printf("%d", a5);
	}

	system("pause");
	return 0;
}*/