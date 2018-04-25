/*#include<stdio.h>
#include<stdlib.h>
struct P {
	int num;
	int score;
	int flag = 0;
};
P a[100005];
P b[100005];
int main() {
	int i, j;
	int count = 0;
	P temp;
	int sum = 0;
	int n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &a[i].num, &a[i].score);
	}
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			if (a[i].num == a[j].num && a[j].flag != -1) {
				sum += a[j].score;
				a[j].flag = -1;
			}
		}
		b[count].num = a[i].num;
		b[count].score = sum;
		count++;
		sum = 0;
	}
	temp = b[0];
	for (i = 0; i < count; i++) {
		if (temp.score < b[i].score) {
			temp = b[i];
		}
	}
	printf("%d %d", temp.num, temp.score);
	system("pause");
	return 0;
}*/