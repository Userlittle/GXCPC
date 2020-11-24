#include<stdio.h>
int main() {
	int T;
	int x[100];
	int num[100];

	scanf_s("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf_s("%d", &x[i]);
	}

	for (int i = 0; i < T; i++) {
		for (int j = x[i] + 1; j < 101; j++) {
			if (j < 10) {
				if (j % 7!=0) {
					num[i] = j;
					break;
				}
			}
			else {
				if ((j - 7) % 7 != 0 && ((int)j / 10) % 7 != 0) {
					num[i] = j;
					break;
				}
			}
		}
	}

	for (int i = 0; i < T; i++) {
		printf("%d\n", num[i]);
	}

}