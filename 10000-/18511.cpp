#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int n, k;
int result;
vector <int> arr;

//순열&중복 허용

void find(int num, int cnt) {
	if (num > n) { //조합한 숫자가 n보다 크면 return
		return;
	}
	for (int i = 0; i < arr.size(); i++) {
		find(num +cnt * arr[i], cnt * 10); //n과 비교할 숫자 만들기
	}
	result = max(result, num); //조합한 숫자들 중 가장 큰 숫자
}
int main() {
	scanf("%d %d", &n, &k);

	int wonso;
	for (int i = 0; i < k; i++) {
		scanf("%d", &wonso);
		arr.push_back(wonso); //입력 받은 숫자 벡터에 넣어주기
	}

	sort(arr.begin(), arr.end()); //오름차순으로 정렬

	find(0, 1);
	printf("%d\n", result);

}