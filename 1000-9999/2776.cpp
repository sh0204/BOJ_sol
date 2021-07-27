#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n, m;

int note1[1000001];
int note2[1000001];

void find(int n, int key) {
	int left = 0;
	int right = n - 1;

	while (left <= right) {
		int mid = (left + right) / 2; //�߰� �� �ε���

		if (note1[mid] == key) { //���� ������
			printf("1\n");
			return;
		}
		else if (note1[mid] > key) { // key���� �迭�� �߾� ������ ������ = �������� 
			right = mid - 1;
		}
		else { //key�� �迭�� �߾Ӱ����� Ŭ�� = ����������
			left = mid + 1;
		}

	}
	printf("0\n");
	return;
}
int main() {

	int test;
	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d", &note1[j]);
		}
		sort(note1,note1+n); //�������� ����

		scanf("%d", &m);
		for (int j = 0; j < m; j++) {
			scanf("%d", &note2[j]);

			find(n,note2[j]);
		}
	}
}