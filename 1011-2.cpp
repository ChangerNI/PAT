/*#include<stdio.h>
#include<stdlib.h>
int main() {
	char s[1005];
	int a[1005];
	int b[1005];
	int count = 0;
	int count2 = 0;
	int count_0 = 0, count_1 = 0, count_2 = 0, count_3 = 0, count_4 = 0, count_5 = 0, count_6 = 0, count_7 = 0, count_8 = 0, count_9 = 0;
	int i;
	int j = 0;
	scanf("%s", s);
	while (s[count] != '\0') {
		count++;
	}
	for (i = 0; i < count; i++) {
		a[i] = int(s[i]) - 48;
	}
	while (a[count2] == 0) {
		count2++;
	}
	for (i = count2; i < count; i++) {
		b[j] = a[i]; 
		j++;
	}
	for (i = 0; i < j; i++) {
		if (b[i] == 0) {
			count_0++;
		}
		if (b[i] == 1) {
			count_1++;
		}
		if (b[i] == 2) {
			count_2++;
		}
		if (b[i] == 3) {
			count_3++;
		}
		if (b[i] == 4) {
			count_4++;
		}
		if (b[i] == 5) {
			count_5++;
		}
		if (b[i] == 6) {
			count_6++;
		}
		if (b[i] == 7) {
			count_7++;
		}
		if (b[i] == 8) {
			count_8++;
		}
		if (b[i] == 9) {
			count_9++;
		}
	}
	if (count_0 != 0) {
		printf("0:%d\n", count_0);
	}
	if (count_1 != 0) {
		printf("1:%d\n", count_1);
	}
	if (count_2 != 0) {
		printf("2:%d\n", count_2);
	}
	if (count_3 != 0) {
		printf("3:%d\n", count_3);
	}
	if (count_4 != 0) {
		printf("4:%d\n", count_4);
	}
	if (count_5 != 0) {
		printf("5:%d\n", count_5);
	}
	if (count_6 != 0) {
		printf("6:%d\n", count_6);
	}
	if (count_7 != 0) {
		printf("7:%d\n", count_7);
	}
	if (count_8 != 0) {
		printf("8:%d\n", count_8);
	}
	if (count_9 != 0) {
		printf("9:%d\n", count_9);
	}
	if (count == 1 && s[0] == '0') {
		printf("0:1\n");
	}
	system("pause");
	return 0;
}*/