/*#include<stdio.h>
#include<stdlib.h>
int main() {
	int a1, b1, c1, a2, b2, c2, a3, b3, c3;
	int flag = 0;
	scanf("%d.%d.%d %d.%d.%d", &a1, &b1, &c1, &a2, &b2, &c2);
	a3 = a2 - a1;
	b3 = b2 - b1;
	c3 = c2 - c1;
	if (a3 < 0) {
		a3 = a1 - a2;
		b3 = b1 - b2;
		c3 = c1 - c2;
		flag = -1;
	}
	if (c3 < 0) {
		b3--;
		c3 = 29 + c3;
	}
	if (b3 < 0) {
		a3--;
		b3 = 17 + b3;
	}
	
	if (flag == -1) {
		printf("%d.%d.%d", -a3, b3, c3);
	}
	else {
		printf("%d.%d.%d", a3, b3, c3);
	}
	system("pause");
	return 0;
}*/