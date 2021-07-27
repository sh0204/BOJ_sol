#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	int num; //학생 수
	scanf("%d", &num);

	int late = 0;
	int fast = 100001;

	for (int i = 0; i < num; i++) {
		int s, e; //등교, 하교
		scanf("%d %d", &s, &e);

		if (s > late) { //가장 늦게 온 사람 등교 
			late = s;
		}
		if (e < fast) { //가장 빨리 온 사람 하교
			fast = e;
		}
	}
	int minus = late - fast;


	if (minus < 0) { //가장 늦게오는 사람 등교 시각- 가장빠른 사람 하교 < 0 == 머무르는 시간 0
		printf("0");
	}
	else
		printf("%d\n", minus);
}