#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	int n;
	scanf("%d", &n);
	vector<string> word(n);
	vector<long long> v;

	for (int i = 0; i < n; i++) {
		cin >> word[i];//���� string����
		//scanf()���� ��� ���� ��,, ����??

		reverse(word[i].begin(), word[i].end()); //reverse�̿� ��������
		v.push_back(stoll(word[i]));
	}

	sort(v.begin(), v.end()); //�������� ����

	for (int i = 0; i < n; i++)
		cout << v[i] << "\n";
	return 0;
}