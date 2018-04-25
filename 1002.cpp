/*#include<stdio.h>
#include<stdlib.h>
int main() {
	char n[10000];
	scanf("%s", n);
	int sum = 0;
	int i=0, j, k=0;
	int b[10000];
	if (n[0] == '0' && n[1] == '\0') {
		printf("ling\n");
	}
	while (n[i] != '\0') {
		sum += (n[i]-48);
		i++;
	}
	while (sum > 0) {
		b[k] = sum % 10;
		sum = sum / 10;
		k++;
	}
	for (j = k - 1; j >= 0; j--) {
		switch (b[j]) {
		case 0:
			printf("ling");
			break;
		case 1:
			printf("yi");
			break;
		case 2:
			printf("er");
			break;
		case 3:
			printf("san");
			break;
		case 4:
			printf("si");
			break;
		case 5:
			printf("wu");
			break;
		case 6:
			printf("liu");
			break;
		case 7:
			printf("qi");
			break;
		case 8:
			printf("ba");
			break;
		case 9:
			printf("jiu");
			break;
		default:
			break;
		}
		if (j != 0)
			printf(" ");
		if (j == 0)
			printf("\n");
	}
	system("pause");
	return 0;
}*/