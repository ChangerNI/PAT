/*#include<stdio.h>
#include<stdlib.h>
int main() {
	char s[5];
	int a[4];
	int b[4];
	int c[4] = { 0,0,0,0 };
	int i;
	int j;
	int temp;
	int temp_y;
	int x, y, z = -1;
	int result = -1;
	int count = 0;
	scanf("%s", s);
	while (s[count] != '\0') {
		count++;
	}
	for (i = 0; i < 4; i++) {
		if (int(s[i]) - 48 >= 0) {
			a[i] = int(s[i]) - 48;
		}
		else {
			a[i] = 0;
		}
	}
	while (result != 6174) {
		for (i = 0; i < 4; i++) {
			for (j = i; j < 4; j++) {
				if (a[i] < a[j]) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		for (i = 0; i < 4; i++) {
			b[3 - i] = a[i];
		}
		x = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3] * 1;
		y = b[0] * 1000 + b[1] * 100 + b[2] * 10 + b[3] * 1;
		temp_y = y;
		if (temp_y < 1000) {
			c[3] = temp_y % 10;
			temp_y = temp_y / 10;
			c[2] = temp_y % 10;
			temp_y = temp_y / 10;
			c[1] = temp_y % 10;
			temp_y = temp_y / 10;
			c[0] = temp_y % 10;
		}
		z = x - y;
		result = z;
		if (result == 0 && x != 0) {
			printf("%d - %d = 0000\n", x, y);
			break;
		}
		else if (x == 0) {
			printf("0000 - 0000 = 0000\n");
			break;
		}
		else if (y < 1000) {
			printf("%d - ", x);
			for (i = 0; i < 4; i++) {
				printf("%d", c[i]);
			}
			printf(" = %d\n", z);
		}
		else {
			printf("%d - %d = %d\n", x, y, z);
		}
		
		a[3] = z % 10;
		z = z / 10;
		a[2] = z % 10;
		z = z / 10;
		a[1] = z % 10;
		z = z / 10;
		a[0] = z % 10;
	}
	system("pause");
	return 0;
}*/