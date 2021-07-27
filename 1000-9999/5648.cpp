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
		cin >> word[i];//숫자 string으로
		//scanf()쓰면 계속 오류 남,, 왜지??

		reverse(word[i].begin(), word[i].end()); //reverse이용 뒤집어줌
		v.push_back(stoll(word[i]));
	}

	sort(v.begin(), v.end()); //오름차순 정렬

	for (int i = 0; i < n; i++)
		cout << v[i] << "\n";
	return 0;
}