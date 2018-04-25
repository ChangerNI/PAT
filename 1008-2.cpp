/*#include<stdio.h>
#include<stdlib.h>
int main() {
	int n;
	char judge[500];
	int j = 0, y = 0;
	int jc = 0, yc = 0;
	int jj = 0, yj = 0;
	int jb = 0, yb = 0;
	int ping = 0;
	int i;
	char jjj, yyy;
	scanf("%d", &n);
	for (i = 0; i < 2*n; i += 2) {
		scanf("\n%c %c", &judge[i], &judge[i + 1]);
	}
	for (i = 0; i < 2*n; i += 2) {
		if (judge[i] == 'J' && judge[i + 1] == 'B') {
			j++;
			jj++;
		}
		if (judge[i] == 'B' && judge[i + 1] == 'C') {
			j++;
			jb++;
		}
		if (judge[i] == 'C' && judge[i + 1] == 'J') {
			j++;
			jc++;
		}
		if (judge[i] == 'B' && judge[i + 1] == 'J') {
			y++;
			yj++;
		}
		if (judge[i] == 'C' && judge[i + 1] == 'B') {
			y++;
			yb++;
		}
		if (judge[i] == 'J' && judge[i + 1] == 'C') {
			y++;
			yc++;
		}
		if (judge[i] == judge[i + 1]) {
			ping++;
		}
	}
	if (jc == jj && jj > jb) {
		jjj = 'C';
	}
	if (jc == jb && jb > jj) {
		jjj = 'B';
	}
	if (jb == jj && jj > jc) {
		jjj = 'B';
	}
	if (jb > jc && jb > jj) {
		jjj = 'B';
	}
	if (jc > jb && jc > jj) {
		jjj = 'C';
	}
	if (jj > jc && jj > jb) {
		jjj = 'J';
	}
	if (jc == jb && jb == jj) {
		jjj = 'B';
	}
	if (yc == yj && yj > yb) {
		yyy = 'C';
	}
	if (yc == yb && yb > yj) {
		yyy = 'B';
	}
	if (yb == yj && yj > yc) {
		yyy = 'B';
	}
	if (yb > yc && yb > yj) {
		yyy = 'B';
	}
	if (yc > yb && yc > yj) {
		yyy = 'B';
	}
	if (yj > yc && yj > yb) {
		yyy = 'J';
	}
	if (yc == yb && yb == yj) {
		yyy = 'B';
	}
	printf("%d %d %d\n", j, ping, n - j - ping);
	printf("%d %d %d\n", y, ping, n - y - ping);
	printf("%c %c", jjj, yyy);
	system("pause");
	return 0;
}*/