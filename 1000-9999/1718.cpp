#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {

	char arr[30001];
	char result[30001];
	char key[30001];
	char word;
	int k;

	scanf("%[^\n]s", arr); //�� �Է�
	scanf("%s", key);//��ȣȭ Ű �Է�

	int alen = strlen(arr);
	int klen = strlen(key);

	for (int i = 0; i < alen; i++) {

		word = arr[i];

		//���� �������� �ƴ���
		if (word != ' ') {
			// Ű�� ���ڰ� ���ĺ� ���°���� ���
			// Ű ���ڴ� Ű ���̸�ŭ �ݺ�
			//love�� 0,1,2,3 �ε��� �ݺ�

			k = key[i % klen] - 96; //���ĺ� ���°���� ���
			/*key[i % klen]�� ��ȣȭ ���� ���� �Ȱ�
				-96�� �ƽ�Ű �ڵ� �߿��� ���ĺ� a ����
				���� ���� ���ĺ��� �ƽ�Ű �ڵ忡�� �ƽ�Ű �ڵ� ������ ���� �˰� ���� ���ĺ��� ������ ����*/

				//�򹮿��� ���ĺ� ������� �����

			result[i] = (word - k < 97 ? (word - k + 26) : word - k);
		}
		else {
			//���� �����̸�
			result[i] = ' ';
			//������� ���� �߰�
		}
	}
	printf("%s\n", result);
}