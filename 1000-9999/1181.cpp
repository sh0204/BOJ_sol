#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compare(string a, string b) {

	if (a.length() == b.length()) { //길이가 같으면 사전 순으로
		return a < b;
	}
	else
		return a.length() < b.length(); //길이가 다르면 작은게 앞으로
}

int main() {

	int n;
	scanf("%d", &n);

	vector <string> arr;
	char word[51];

	for (int i = 0; i < n; i++) {
		scanf("%s", word); //단어 입력
		string wo(word); //string으로 변환
		arr.push_back(wo);
	}

	//길이 순으로 오름차순 정렬
	sort(arr.begin(), arr.end(), compare);

	
	/*
	unique함수는 중복된 원소를 제거하면서 앞에서부터 원소들을 채워나간다.
	erase함수는  배열에서 특정 원소를 삭제하는 함수
	시작 지점은 닫힌 구간, 긑나는 지점은 열린 구간으로 삭제된다.
	*/
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (int i = 0; i < arr.size(); i++) {
		printf("%s\n", arr[i].c_str());
	}
}