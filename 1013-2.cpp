/*#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[12];
	int b[100];
	int i;
	int j;
	int temp;
	int count = 0;
	int count_0 = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (j = 0; j < 10; j++) {
		for(i=0; i<a[j]; i++){
			b[count] = j;
			count++;
		}
	}
	while (b[count_0] == 0) {
		count_0++;
	}
	temp = b[0];
	b[0] = b[count_0];
	b[count_0] = temp;
	for (i = 0; i < count; i++) {
		printf("%d", b[i]);
	}
	system("pause");
	return 0;
}*/