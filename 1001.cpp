/*#include<stdio.h>
#include<stdlib.h>
int step = 0;
int func(int n) {
	if (n % 2 == 0 && n != 0) {
		step += 1;
		return func(n / 2);
	}
	if (n % 2 == 1 && n != 1) {
		step += 1;
		return func((3 * n + 1) / 2);
	}
	return 0;
}
int main() {
	int n;
	scanf("%d", &n);
	func(n);
	printf("%d\n", step);
	system("pause");
	return 0;
}*/