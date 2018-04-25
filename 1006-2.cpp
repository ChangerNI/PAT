/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	char a[20];
	char b[20];
	char x, y;
	int i;
	int count1 = 0;
	int count2 = 0;
	int sum1 = 0;
	int sum2 = 0;
	int c1 = 0;
	int c2 = 0;
	int temp;

	scanf("%s %c %s %c", a, &x, b, &y);
	while (a[count1] != '\0') {
		count1++;
	}
	while (b[count2] != '\0') {
		count2++;
	}
	for (i = 0; i < count1; i++) {
		if (a[i] == x) {
			temp = int(a[i]) - 48;
			sum1 = sum1 + temp * pow(10, c1);
 			c1++;
		}
	}
	for (i = 0; i < count2; i++) {
		if (b[i] == y) {
			temp = int(b[i]) - 48;
			sum2 = sum2 + temp * pow(10, c2);
			c2++;
		}
	}
	printf("%d", sum1+sum2);
	system("pause");
	return 0;
}*/