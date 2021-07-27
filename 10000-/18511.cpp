#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int n, k;
int result;
vector <int> arr;

//����&�ߺ� ���

void find(int num, int cnt) {
	if (num > n) { //������ ���ڰ� n���� ũ�� return
		return;
	}
	for (int i = 0; i < arr.size(); i++) {
		find(num +cnt * arr[i], cnt * 10); //n�� ���� ���� �����
	}
	result = max(result, num); //������ ���ڵ� �� ���� ū ����
}
int main() {
	scanf("%d %d", &n, &k);

	int wonso;
	for (int i = 0; i < k; i++) {
		scanf("%d", &wonso);
		arr.push_back(wonso); //�Է� ���� ���� ���Ϳ� �־��ֱ�
	}

	sort(arr.begin(), arr.end()); //������������ ����

	find(0, 1);
	printf("%d\n", result);

}