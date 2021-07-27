#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;
int N, r, c;
int cnt;

void visit(int y, int x, int n) {
	//y,x는 시작 좌표, n 한변의 길이
	//행, 열

	if (y == r && x == c) {
		printf("%d\n", cnt);
		return; //종료
	}
	
	//r과 c가 현재 사분면
	if (r < y + n && r >= y && c < x + n && c >= x) {
		//왼위 탐색
		visit(y, x, n / 2);
		//오위 탐색
		visit(y, x + n / 2, n / 2);
		//왼아 탐색
		visit(y + n / 2, x, n / 2);
		//오아 탐색
		visit(y + n / 2, x + n / 2, n / 2);
	}

	//현재 사분면에 없으면 사분면의 크기만큼 더해준다.
	else {
		cnt += n * n;
	}
}
int main() {

	scanf("%d %d %d", &N, &r, &c);

	visit(0, 0, pow(2, N));
	//한변의 길이는 2^N 
	
	return 0;
}