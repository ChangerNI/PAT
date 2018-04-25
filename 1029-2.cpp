/*#include<stdio.h>
#include<stdlib.h>
int main() {
	char s1[1002];
	char s2[1002];
	int a[256] = {0};
	int b[256] = {0};
	int sum1 = 0;
	int sum_buzu = 0;
	int flag = 0;
	int count1 = 0, count2 = 0, count_duoyu = 0, count_bugou = 0, count_cishu = 0, count_geshu = 0;
	scanf("%s", s1);
	scanf("%s", s2);
	int i, j;

	while (s1[count1] != '\0') {
		count1++;
	}
	while (s2[count2] != '\0') {
		count2++;
	}

	for (i = 0; i < count2; i++) {
		a[s2[i]]++;
	}
	for (i = 0; i < count1; i++) {
		b[s1[i]]++;
	}
	for (i = 0; i < 256; i++) {
		if (a[i] > 0) {
			count_geshu++;
		}

	}
	for (i = 0; i < 256; i++) {
		if (a[i] > 0) {
			sum1 = a[i]-b[i];
			if (sum1 <= 0) {
				count_cishu++;
			}
			if (sum1 > 0) {
				flag = 2;
			}
		}
		
	}
	if (flag == 2) {
		for (i = 0; i < 256; i++) {
			if (a[i] - b[i] > 0) {
				sum_buzu += (a[i] - b[i]);
			}
		}
	}
	if (count_cishu == count_geshu) {
		count_duoyu = count1 - count2;
		printf("Yes %d", count_duoyu);
	}

	if (flag == 2) {
		printf("No %d", sum_buzu);
	}
	system("pause");
	return 0;
}*/