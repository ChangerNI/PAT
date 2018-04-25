/*#include<stdio.h>
#include<stdlib.h>
struct yb {
	int kucun;
	float jiage;
	float bili;
};
yb a[10000];
int main() {
	int n;
	int m;
	int i, j;
	int count = 1;
	float sum = 0.00;
	int sum_kucun = 0;
	int temp_m;
	yb temp;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i].kucun);
	}
	for (i = 0; i < n; i++) {
		scanf("%f", &a[i].jiage);
	}
	for (i = 0; i < n; i++) {
		a[i].bili = (a[i].jiage*1.00) / (a[i].kucun*1.00);
	}
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			if (a[i].bili < a[j].bili) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}*/
	/*temp_m = m;
	while(1){
		temp_m = temp_m - a[count].kucun;
		if (temp_m >= 0) {
			count++;
		}
		if (temp_m < 0) {
			break;
		}
	}
	for (i = 0; i < count; i++) {
		if (i != count - 1) {
			sum += a[i].jiage;
			sum_kucun += a[i].kucun;
		}
		if (i == count - 1) {
			a[i].jiage = a[i].jiage*(m - sum_kucun) / a[i].kucun;
			sum += a[i].jiage;
		}
	}*/
/*	for (i = 0; i < n; ++i)
	{
		if (m == 0)
			break;
		if (a[i].kucun <= m)
		{
			sum += a[i].jiage;
			m -= a[i].kucun;
		}
		else
		{
			sum += a[i].bili * m;
			break;
		}
	}
	printf("%.2f", sum);
	system("pause");
	return 0;
}*/