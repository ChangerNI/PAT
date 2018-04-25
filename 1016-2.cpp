/*#include<stdio.h>
#include<stdlib.h>
int main() {
	int m, n;
	float sec;
	int total_sec;
	int hh, mm, ss;
	scanf("%d%d", &m, &n);
	sec = (n - m)/100.0;
	total_sec = (int)(sec + 0.5) > (int)sec ? (int)(sec + 1) : (int)sec;
	hh = total_sec / 3600;
	if (hh == 0) {
		printf("00:");
	}
	else if (hh < 10) {
		printf("0%d:", hh);
	}
	else {
		printf("%d:", hh);
	}
	total_sec = total_sec - hh * 3600;
	mm = total_sec / 60;
	if (mm == 0) {
		printf("00:");
	}
	else if (mm < 10) {
		printf("0%d:", mm);
	}
	else {
		printf("%d:", mm);
	}
	total_sec = total_sec - mm * 60;
	if (total_sec == 0) {
		printf("00");
	}
	else if (total_sec < 10) {
		printf("0%d", total_sec);
	}
	else {
		printf("%d", total_sec);
	}
	system("pause");
	return 0;
}*/