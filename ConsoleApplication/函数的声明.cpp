#include <iostream>
#include <string>

using namespace std;

// �������Զ�Σ�����ֻ��һ��
// 
// ��ǰ���������Ը�֪�������ú����Ĵ��ڣ� ��main���涨��ú����ľ��������
int max(int a, int b);

//int main() {
//
//	int a = 1;
//	int b = 2;
//
//	int c = max(a, b);
//	cout << c << endl;
//}

int max(int a, int b) {

	return a > b ? a : b;
}