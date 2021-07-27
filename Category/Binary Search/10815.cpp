#include <iostream>
#include <algorithm>
using namespace std;

int arrN[500001];
int arrM[500001];
int ans[500001];
int n, m;

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arrN[i]);
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &arrM[i]);
	}
	sort(arrN, arrN + n);//오름차순 정렬

	for (int i = 0; i < m; i++) {
		int last = n - 1; //맨 뒤 인덱스
		int start = 0;	   //맨 앞 인덱스
		
		while (start <= last) {
			int mid = (last + start) / 2; //중간 값 인덱스
			 
			if (arrN[mid] == arrM[i]) { //수가 같으면
				ans[i] = 1;
				break;
			}
			if (arrN[mid] > arrM[i]) { //중간보다 크면 더 큰수에서 찾음
				last = mid - 1;
			}
			else { //중간 보다 작으면 더 작은 수에서 찾음
				start = mid + 1;
			}

		}
	}//위 과정동안 못찾으면 없는 수

	for (int i = 0; i < m; i++) {
		printf("%d ",ans[i]);
	}
	printf("\n");
}



