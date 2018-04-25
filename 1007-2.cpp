/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	char a[1005];
	int aa[1005];
	int b;
	int q[1005];
	int r;
	int i;
	int count = 0;
	int count_q = 0;
	scanf("%s", a);
	scanf("%d", &b);
	while (a[count] != '\0') {
		count++;
	}
	for (i = 0; i < count; i++) {
		aa[i] = int(a[i]) - 48;
	}
	for (i = 0; i < count; i++) {
		if (aa[i] >= b) {
			q[i] = aa[i] / b;
			aa[i + 1] = (aa[i] % b) * 10 + aa[i + 1];
		}
		if (aa[i] < b) {
			q[i] = 0;
			aa[i + 1] = aa[i]*10 + aa[i + 1];
		}
		if (i == count - 1) {
			r = aa[i] % b;
		}
	}
	while (q[count_q] == 0) {
		count_q++;
	}
	for (i = count_q; i < count; i++) {
		printf("%d", q[i]);
	}
	printf(" %d", r);
	
	system("pause");
	return 0;
}*/