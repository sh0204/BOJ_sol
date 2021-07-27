#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int k;
int arr[13];
int ans[13];

void Lotto(int idx, int cnt) {

	if (cnt == 6) {                    //����
		for (int i = 0; i < 6; i++) {
			printf("%d ",ans[i]);   
		}
		printf("\n");
		return;
	}

	for (int i = idx; i < k; i++) {    //arr 0���� k-1���� Ž��    
		ans[cnt] = arr[i];			  //0~5��° ���̱��� ���� Ž�� ���ڸ� ����.    
		Lotto(i + 1, cnt + 1);        //���. �ϳ��� ���̸� Ž�� �� ����-> ���� �Լ�ȣ�� �� ī��Ʈ �ϳ� �� ������� 
	}

}

int main() {


	while (1) {            
		scanf("%d", &k);
		if (k == 0) //0�Է� ������ ����
			break;
		for (int i = 0; i < k; i++) {
			scanf("%d", &arr[i]);
		}

		Lotto(0, 0);
		printf("\n");

	}
	return 0;
}

