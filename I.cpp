#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	int n[100], m[100];
	int sum[1000] = {0};

	scanf_s("%d",&T);
	
	for(int i=0;i<T;i++){
		scanf_s("%d%d", &n[i],&m[i]);
	}

	for (int i = 0; i < T; i++) {
		
		int k_k;
		for (int j = 3; j <= m[i]; j+=2) {
			int t = 1;
			for (int k = 2; k <= (int)sqrt(j); k++) {
				k_k = k;
				if (j%k == 0) {
					t = 0;
					break;
				}
			}//�ж����� ��t��־
			if (t) {
				sum[i] += j;
			}
		}//��2��m�ҵ�������
		if (m[i] >= 2) {
			sum[i] += 2;
		}//���m���ڵ���2���������2	
	}//T������
	
	for (int i = 0; i < T; i++) {
		if (sum[i] == n[i]) {
			printf("1\n");
		}
		else {
			printf("0\n");
		}
	}
	//printf("\n%d %d", sum[0],sum[1]);
	
}