/*#include<stdio.h>
#include<stdlib.h>
struct list {
	int add;
	int data;
	int next;
};
list a[10005];
list b[10005];
list c[10005];
int main() {
	int first_add;
	int mon;
	int n;
	int i;
	int j;
	int group;
	int count;
	int k = 0;
	int t = 0;
	scanf("%d%d%d", &first_add, &mon, &n);
	for (i = 0; i < mon; i++) {
		scanf("%d%d%d", &a[i].add, &a[i].data, &a[i].next);
	}
	for (i = 0; i < mon; i++) {
		if (a[i].add == first_add) {
			b[0] = a[i];
		}
	}
	for (i = 1; i < mon; i++) {
		for (j = 0; j < mon; j++) {
			if (b[i-1].next == a[j].add) {
				b[i] = a[j];
			}
		}
	}
	group = mon % n;
	count = group * n;
	
	c[k].add = b[n - 1].add;
	c[k].data = b[n - 1].data;
	k++;
	for (i = 0; i < group; i++) {
		for (j = i * n; (j % n == 0) && (j != i * n); j++) {
			c[k].next = b[j + n - 2 - t].add;
			t++;
			if (t == n) {
				t = 0;
			}
			k++;
			c[k].add = b[k + n - 1 - k % n].add;
			c[k].data = b[k + n - 1 - k % n].data;
		}
	}
	for (i = 0; i < k; i++) {
		printf("%d %d %d\n", c[i].add, c[i].data, c[i].next);
	}
	for (i = count; i < mon; i++) {
		printf("%d %d %d\n", b[i].add, b[i].data, b[i].next);
	}
	system("pause");
	return 0;
}*/