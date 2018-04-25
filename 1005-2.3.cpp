/*#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int num;
	int score1;
	int score2;
	int total;
};
Student stu[100005];
Student temp;
Student stu1[100005];
Student stu2[100005];
Student stu3[100005];
Student stu4[100005];
int main() {
	int n;
	int i, j;
	int high;
	int low;
	int count = 0;
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
	scanf("%d%d%d", &n, &low, &high);
	for (i = 0; i < n; i++) {
		scanf("%d%d%d", &stu[i].num, &stu[i].score1, &stu[i].score2);
	}
	for (i = 0; i < n; i++) {
		if (stu[i].score1 >= low && stu[i].score2 >= low) {
			stu[count].num = stu[i].num;
			stu[count].score1 = stu[i].score1;
			stu[count].score2 = stu[i].score2;
			stu[count].total = stu[count].score1 + stu[count].score2;
			count++;
		}
	}
	for (i = 0; i < count; i++) {
		for (j = i; j < count; j++) {
			if (stu[i].total < stu[j].total) {
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
	}
	for (i = 0; i < count; i++) {
		if (stu[i].score1 >= high && stu[i].score2 >= high) {
			stu1[count1] = stu[i];
			count1++;
		}
		else if (stu[i].score1 >= high && stu[i].score2 < high) {
			stu2[count2] = stu[i];
			count2++;
		}
		else if (stu[i].score1 < high && stu[i].score2 < high && (stu[i].score1 >= stu[i].score2)) {
			stu3[count3] = stu[i];
			count3++;
		}
		else {
			stu4[count4] = stu[i];
			count4++;
		}
	}
	for (i = 0; i < count1; i++) {
			for (j = i; j < count1; j++) {
				if (stu1[i].total == stu1[j].total) {
					if (stu1[i].score1 == stu1[j].score1) {
						if (stu1[i].num > stu1[j].num) {
							temp = stu1[i];
							stu1[i] = stu1[j];
							stu1[j] = temp;
						}
					}
					if (stu1[i].score1 < stu1[j].score1) {
						temp = stu1[i];
						stu1[i] = stu1[j];
						stu1[j] = temp;
					}
				}
			}
	}
	for (i = 0; i < count2; i++) {
			for (j = i; j < count2; j++) {
				if (stu2[i].total == stu2[j].total) {
					if (stu2[i].score1 == stu2[j].score1) {
						if (stu2[i].num > stu2[j].num) {
							temp = stu2[i];
							stu2[i] = stu2[j];
							stu2[j] = temp;
						}
					}
					if (stu2[i].score1 < stu2[j].score1) {
						temp = stu2[i];
						stu2[i] = stu2[j];
						stu2[j] = temp;
					}
				}
			}
	}
	for (i = 0; i < count3; i++) {
			for (j = i; j < count3; j++) {
				if (stu3[i].total == stu3[j].total) {
					if (stu3[i].score1 == stu3[j].score1) {
						if (stu3[i].num > stu3[j].num) {
							temp = stu3[i];
							stu3[i] = stu3[j];
							stu3[j] = temp;
						}
					}
					if (stu3[i].score1 < stu3[j].score1) {
						temp = stu3[i];
						stu3[i] = stu3[j];
						stu3[j] = temp;
					}
				}
			}
	}
	for (i = 0; i < count4; i++) {
			for (j = i; j < count4; j++) {
				if (stu4[i].total == stu4[j].total) {
					if (stu4[i].score1 < stu4[j].score1) {
						temp = stu4[i];
						stu4[i] = stu4[j];
						stu4[j] = temp;
					}
					if ((stu4[i].score1 == stu4[j].score1) && (stu4[i].num > stu4[j].num)) {
							temp = stu4[i];
							stu4[i] = stu4[j];
							stu4[j] = temp;
					}
				}
			}
	}
	printf("%d\n", count);
	for (i = 0; i < count1; i++) {
		printf("%d %d %d\n", stu1[i].num, stu1[i].score1, stu1[i].score2);
	}
	for (i = 0; i < count2; i++) {
		printf("%d %d %d\n", stu2[i].num, stu2[i].score1, stu2[i].score2);
	}
	for (i = 0; i < count3; i++) {
		printf("%d %d %d\n", stu3[i].num, stu3[i].score1, stu3[i].score2);
	}
	for (i = 0; i < count4; i++) {
		printf("%d %d %d\n", stu4[i].num, stu4[i].score1, stu4[i].score2);
	}
	system("pause");
	return 0;
}*/