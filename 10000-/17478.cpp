#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n;

void underbar(int k)
{
	for (int i = 0; i < n-k; i++) {
		printf("____");
	}
}
void chatbot(int k) {
	underbar(k);
	printf("\"����Լ��� ������?\"\n");
	if (!k) {
		underbar(k);
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		underbar(k);
		printf("��� �亯�Ͽ���.\n");
		return;
	}
	underbar(k);
	printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
	underbar(k);
	printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
	underbar(k);
	printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	
	chatbot(k - 1);
	underbar(k);
	printf("��� �亯�Ͽ���.\n");
}
int main() {

	scanf("%d", &n);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");

	chatbot(n);

}