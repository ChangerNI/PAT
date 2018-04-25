/*#include<stdio.h>
#include<stdlib.h>
int main() {
	char s3[100005];
	char s1[100005];
	char s2[100005];
	int judge[100005] = {};
	scanf("%s", s1);
	scanf("%s", s2);
	int count1 = 0, count2 = 0;
	while (s1[count1] != '\0') {
		count1++;
	}
	while (s2[count2] != '\0') {
		count2++;
	}
	int flag = 0;
	int i;
	int j;
	int count = 0;
	for (i = 0; i < count1; i++) {
		if (s1[i] == '+') {
			flag = 1;
		}
	}
	int count11 = 0;
	count11 = count1;
	for (i = 0; i < count1; i++) {
		if (s1[i] >= 'A' && s1[i] <= 'Z') {
			s1[count11+1] = '\0';
			s1[count11] = s1[i] + 32;
			count11++;
		}
	}
	count1 = count11;
	int temp = 0;
	if (flag == 1) {
		for (i = 0; i < count2; i++) {
			if (s2[i] >= 'A' && s2[i] <= 'Z') {
				judge[i] = -1;
			}
		}
	}
	for (i = 0; i < count2; i++) {
		for (j = 0; j < count1; j++) {
			if (s2[i] != s1[j]) {
				temp++;
			}
		}
		if (temp % (count1) != 0) {
			judge[i] = -1;
		}
		temp = 0;
	}
	for (i = 0; i < count2; i++) {
		if (judge[i] != -1) {
			printf("%c", s2[i]);
		}
	}
	system("pause");
	return 0;
}*/