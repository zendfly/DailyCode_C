#include <iostream>
#include <string>

using namespace std;

// �������裬 1.�������ͣ�2.��������3.�������ͣ�4.��������䣻5.return���ʽ
//
// ����ֵ���� ������(�����б�)
// {
//	   ��������䣻
//     return ���ʽ
 // }

int int_num_add(int a,int n) {

	int sum = a + n;

	return sum;
}



int main(){

	int a = 1;
	int b = 2;
	int sum = int_num_add(a, b);
	cout << sum;

}