/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	char a[10000];
	char b[10000];
	int i;
	int flag = 0;
	int lenth1 = 0;
	int pos_E = 0, pos_zhishu = 0;
	int sum_zhishu = 0;
	int count = 0;
	int count_b = 0;
	scanf("%s", a);
	while (a[count] != '\0') {
		count++;
	}
	for (i = 0; i < count; i++) {
		if (a[i] == 'E' && a[i+1] == '+') {
			pos_E = i;
			lenth1 = pos_E - 1 - 2;
			pos_zhishu = i + 2;
			flag = 1;
		}
		if (a[i] == 'E' && a[i + 1] == '-') {
			pos_E = i;
			lenth1 = pos_E - 1 - 2;
			pos_zhishu = i + 2;
			flag = -1;
		}
	}
	for (i = count - 1; i >= pos_zhishu; i--) {
		sum_zhishu += ((int(a[i]) - 48)*pow(10,count-1-i));
	}
	if (lenth1 > sum_zhishu && flag == 1) {
		if (a[0] == '+') {
			b[count_b] = a[1];
			count_b++;
			for (i = 3; i < 3 + sum_zhishu; i++) {
				b[count_b] = a[i];
				count_b++;
			}
			b[count_b] = '.';
			count_b++;
			for (i = 3 + sum_zhishu; i < pos_E; i++) {
				b[count_b] = a[i];
				count_b++;
			}
		}
		if (a[0] == '-') {
			b[count_b] = '-';
			count_b++;
			b[count_b] = a[1];
			count_b++;
			for (i = 3; i < 3 + sum_zhishu; i++) {
				b[count_b] = a[i];
				count_b++;
			}
			b[count_b] = '.';
			count_b++;
			for (i = 3 + sum_zhishu; i < pos_E; i++) {
				b[count_b] = a[i];
				count_b++;
			}
		}
	}
	if (lenth1 <= sum_zhishu && flag == 1) {
		if (a[0] == '+') {
			b[count_b] = a[1];
			count_b++;
			for (i = 3; i < 3 + lenth1; i++) {
				b[count_b] = a[i];
				count_b++;
			}
			for (i = 0; i < sum_zhishu - lenth1; i++) {
				b[count_b] = '0';
				count_b++;
			}
		}
		if (a[0] == '-') {
			b[count_b] = '-';
			count_b++;
			b[count_b] = a[1];
			count_b++;
			for (i = 3; i < 3 + lenth1; i++) {
				b[count_b] = a[i];
				count_b++;
			}
			for (i = 0; i < sum_zhishu - lenth1; i++) {
				b[count_b] = '0';
				count_b++;
			}
		}
	}
	if (flag == -1) {
		if (a[0] == '+') {
			b[count_b] = '0';
			count_b++;
			b[count_b] = '.';
			count_b++;
			for (i = 0; i < sum_zhishu - 1; i++) {
				b[count_b] = '0';
				count_b++;
			}
			b[count_b] = a[1];
			count_b++;
			for (i = 3; i < 3 + lenth1; i++) {
				b[count_b] = a[i];
				count_b++;
			}
		}
		if (a[0] == '-') {
			b[count_b] = '-';
			count_b++;
			b[count_b] = '0';
			count_b++;
			b[count_b] = '.';
			count_b++;
			for (i = 0; i < sum_zhishu - 1; i++) {
				b[count_b] = '0';
				count_b++;
			}
			b[count_b] = a[1];
			count_b++;
			for (i = 3; i < 3 + lenth1; i++) {
				b[count_b] = a[i];
				count_b++;
			}
		}
	}
	for (i = 0; i < count_b; i++) {
		printf("%c", b[i]);
	}
	system("pause");
	return 0;
}*/