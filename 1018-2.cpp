/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct people {
	char name[7];
	char birth[12];
	bool hefa;
};
people p1[100005];
people p2[100005];
int main() {
	int count2 = 0;
	int n;
	int i, j;
	people temp_min;
	people temp_max;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s %s", p1[i].name, p1[i].birth);
	}
	for (i = 0; i < n; i++) {
		if (strcmp(p1[i].birth, "1814/09/06") >= 0 && strcmp(p1[i].birth, "2014/09/06") <= 0) {
			p2[count2] = p1[i];
			count2++;
		}
	}
	temp_min = p2[0];
	temp_max = p2[0];
	for (i = 0; i < count2; i++) {
		if (strcmp(p2[i].birth, temp_max.birth) <= 0) {
			temp_max = p2[i];
		}
		if (strcmp(p2[i].birth, temp_min.birth) >= 0) {
			temp_min = p2[i];
		}
	}
	printf("%d %s %s", count2, temp_max.name, temp_min.name);
system("pause");
return 0;
}*/