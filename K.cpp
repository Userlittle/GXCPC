#include<stdio.h>
int main() {
	int T,n,output[100];
	int n_output = 0;//记录输出个数
	char a;//ai
	int b;//bi
	char A[100],B[100];
	
	scanf_s("%d", &T);
	//T *= 2;
	while (T) {
		int n_A, n_B;
		n_A = 0;
		n_B = 0;//记录A B个数
		for (int nb = 0; nb < 2; nb++) {
			printf("请输入n:");
			scanf_s("%d", &n); getchar();
			for (int i = 0; i < n; i++) {
				scanf_s("%c", &a); getchar();
				scanf_s("%d", &b); getchar();
				if (nb==0) {
					for (int j=0; j <b; j++) {
						A[n_A++] = a;
					}
				}//A
				else {
					for (int j = 0; j < b; j++) {
						B[n_B++] = a;
					}
				}//B			
			}//A B
		}

		/*for (int i = 0; i < n_A; i++) {
			printf("%c", A[i]);
		}
		printf("\n");
		for (int i = 0; i < n_B; i++) {
			printf("%c", B[i]);
		}
		printf("\n");*/
		/*直接判断*/
		int k1=0;
		int k2=0;
		int num = 0;
		for (k1; k1 < n_A; k1++) {
			for (k2; k2 < n_B;k2++) {
				if (A[k1] == B[k2]) {
					num++;
					k2++;
					break;
				}
			}
		}

		if ( num==n_A) {
			output[n_output++] = 1;
		}
		else {
			output[n_output++] = 0;
		}
		
		T--;
	}
	
	for (int i = 0; i < n_output; i++) {
		if (output[i] == 1) {
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	}

	return 0;
}