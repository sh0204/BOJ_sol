#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int k;
int arr[13];
int ans[13];

void Lotto(int idx, int cnt) {

	if (cnt == 6) {                    //종료
		for (int i = 0; i < 6; i++) {
			printf("%d ",ans[i]);   
		}
		printf("\n");
		return;
	}

	for (int i = idx; i < k; i++) {    //arr 0부터 k-1까지 탐색    
		ans[cnt] = arr[i];			  //0~5번째 깊이까지 새로 탐색 숫자를 넣음.    
		Lotto(i + 1, cnt + 1);        //재귀. 하나의 깊이를 탐색 후 저장-> 다음 함수호출 시 카운트 하나 더 해줘야함 
	}

}

int main() {


	while (1) {            
		scanf("%d", &k);
		if (k == 0) //0입력 받으면 멈춤
			break;
		for (int i = 0; i < k; i++) {
			scanf("%d", &arr[i]);
		}

		Lotto(0, 0);
		printf("\n");

	}
	return 0;
}

