/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char s1[88];
	char s2[88];
	char s3[88];
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int judge[88];
	int i, j;
	char temp;
	scanf("%s", s1);
	scanf("%s", s2);
	while (s1[count1] != '\0') {
		count1++;
	}
	for (i = 0; i < count1; i++) {
		if (s1[i] != s2[count2]) {
			s3[count3] = s1[i];
			count3++;
		}
		if (s1[i] == s2[count2]) {
			count2++;
		}
	}
	for (i = 0; i < count3; i++) {
		if (s3[i] >= 'a') {
			s3[i] = s3[i] - 32;
		}
	}
	
	for (i = 0; i < count3; i++) {
		for (j = i + 1; j < count3; j++) {
			if (s3[i] == s3[j]) {
				judge[j] = -1;
			}
		}
	}
	for (i = 0; i < count3; i++) {
		if (judge[i] != -1) {
			printf("%c", s3[i]);
		}
	}
	system("pause");
	return 0;
}*/