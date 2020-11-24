#include<stdio.h>


void sort(double c[],int l,int r) {
	
	if (l < r) {
		int i = l;
		int j = r;
		double k = c[i];
		
		while (i < j) {
			while (i < j && k <= c[j]) {
				j--;
			}
			if (i>=j) {
				break;
			}
			else {
				c[i++] = c[j];
			}

			while (i < j && k >= c[i]) {
				i++;
			}
			if (i >= j) {
				break;
			}
			else {
				c[j--] = c[i];
			}
		}
		c[i] = k;
		sort(c, l, i - 1);
		sort(c, i + 1, r);
	}
}//快排

int main() {
	int T;
	int n, k, D;
	int lap[1000][2];
	double c[100];
	
	scanf_s("%d", &T);
	while (T) {

		scanf_s("%d%d%d", &n, &k, &D);

		for (int i = 0; i < n; i++) {
			scanf_s("%d%d",&lap[i][0],&lap[i][1]);
		}
	
		for (int i = 0; i < n; i++) {
			double aver;
			aver = (double)lap[i][0] / (double)(D - lap[i][1]);
			c[i] = aver;
		}
	
		sort(c,0,n-1);
	
		double sum=0;
		double m =0;
		for (int i = 0; i < k; i++) {
			
			m += c[i];
			//printf("--%.2lf  ", m);
			if (m <= D) {
				sum = m;	
			//	printf("++%.2lf  ", sum);
			}				
		}
		if ((int)sum < sum) {
			sum += 1;
		}
		printf("\n%d\n", (int)sum);
		T--;
	}
	return 0;
}
