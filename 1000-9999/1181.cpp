#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compare(string a, string b) {

	if (a.length() == b.length()) { //���̰� ������ ���� ������
		return a < b;
	}
	else
		return a.length() < b.length(); //���̰� �ٸ��� ������ ������
}

int main() {

	int n;
	scanf("%d", &n);

	vector <string> arr;
	char word[51];

	for (int i = 0; i < n; i++) {
		scanf("%s", word); //�ܾ� �Է�
		string wo(word); //string���� ��ȯ
		arr.push_back(wo);
	}

	//���� ������ �������� ����
	sort(arr.begin(), arr.end(), compare);

	
	/*
	unique�Լ��� �ߺ��� ���Ҹ� �����ϸ鼭 �տ������� ���ҵ��� ä��������.
	erase�Լ���  �迭���� Ư�� ���Ҹ� �����ϴ� �Լ�
	���� ������ ���� ����, �P���� ������ ���� �������� �����ȴ�.
	*/
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (int i = 0; i < arr.size(); i++) {
		printf("%s\n", arr[i].c_str());
	}
}