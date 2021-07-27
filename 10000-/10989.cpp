#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int cnt[10001];
int main()
{
	int N;
	int num;
	scanf("%d", &N);

	// 숫자 갯수 세기
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		cnt[num]++;
	}

	// 숫자 개수 만큼 출력
	for (int i = 0; i < 10001; i++)
	{

		for (int j = 0; j < cnt[i]; j++)
		{
			printf("%d\n", i);
		}
	}

}