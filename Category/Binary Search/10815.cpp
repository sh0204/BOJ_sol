#include <iostream>
#include <algorithm>
using namespace std;

int arrN[500001];
int arrM[500001];
int ans[500001];
int n, m;

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arrN[i]);
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &arrM[i]);
	}
	sort(arrN, arrN + n);//�������� ����

	for (int i = 0; i < m; i++) {
		int last = n - 1; //�� �� �ε���
		int start = 0;	   //�� �� �ε���
		
		while (start <= last) {
			int mid = (last + start) / 2; //�߰� �� �ε���
			 
			if (arrN[mid] == arrM[i]) { //���� ������
				ans[i] = 1;
				break;
			}
			if (arrN[mid] > arrM[i]) { //�߰����� ũ�� �� ū������ ã��
				last = mid - 1;
			}
			else { //�߰� ���� ������ �� ���� ������ ã��
				start = mid + 1;
			}

		}
	}//�� �������� ��ã���� ���� ��

	for (int i = 0; i < m; i++) {
		printf("%d ",ans[i]);
	}
	printf("\n");
}



