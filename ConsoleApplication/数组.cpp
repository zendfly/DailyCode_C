#include <iostream>
#include <string>

using namespace std;

int main2() {

	// ���飺����һ�����ϣ�����������ͬ���͵�����Ԫ��
	// �ص㣺1.��ͬ���������ͣ�2.���������ڴ�λ�����

	// ���鶨�巽ʽ��
	// 1. �������� ������[���鳤��]��
	// 2. �������� ������[���鳤��] = {ֵ1��ֵ2 ...};  ����������ʼ��ʱ��û�и���ȫ�������ݣ����Զ���0�������
	// 3. �������� ������[] = {ֵ1��ֵ2 ...};

	//int arr[5] = {1,2,3,4,5};		// ����������ʱ�����鳤�ȿ��Բ�����ǰ��
	//cout << arr[1] << endl;		// ͨ���±����������±��0��ʼ


	/*
	һά���������ô���
		1.ͳ�������������ڴ��еĳ��ȣ�ʹ��sizeof()��������ȡ
		2.��ȡ�������ڴ���е��׵�ַ��ʹ��cout << arr << endl; ����ȡ�׵�ַ
	*/
	//eg:
	//cout << sizeof(arr) << endl;
	//cout << arr << endl;


	/*
	��ϰ������Ԫ������
	������������һ��5��Ԫ�ص����飬���ҽ�Ԫ������
	���磺{1,2,3,5,4}---> {4,5,3,2,1}

	����ĳ��ȼ��㣺 int len_arr = sizeof(arr)/sizeof(arr[0]);
	����ĩβ�±꣺int end_index = len_arr - 1; 
	*/

	int arr[5] = { 1,2,3,5,4 };
	//int re_arr[5];
	//for (int i = 0; i < 5; i++) {
	//	int re_index = 4 - i;
	//	re_arr[re_index] = arr[i];
	//}
	//cout << "���õ�����Ϊ��" << re_arr << endl;

	// �ռ临�Ӷ�Ϊ1
	//int temp = 0;/*
	//float arr_len = sizeof(arr) / sizeof(arr[0]) - 1;
	//cout << "--------------" << arr_len << endl;
	//int loop_begin_index = 0;
	//int loop_endl_index = arr_len;
	//while(loop_begin_index < loop_endl_index) {
	//	int tmp = arr[loop_endl_index];
	//	arr[loop_endl_index] = arr[loop_begin_index];
	//	arr[loop_begin_index] = tmp;
	//	loop_begin_index++;
	//	loop_endl_index--;
	//}
	//for (int i = 0; i < 5; i++) {
	//	cout << arr[i];
	//}*/

	// ð������
	// �ܽ᣺���ڱȽϣ�Ȼ�󽻻���˫��ѭ��
	int bubble_arr[5] = {4,2,6,8,1};
	int arr_len = sizeof(bubble_arr) / sizeof(bubble_arr[0]);
	cout << arr_len << endl;
	for (int i = 0; i < arr_len; i++) {
		for (int j = 0; j < arr_len - i - 1; j++) {
			if (bubble_arr[j] > bubble_arr[j + 1]) {
				int temp = bubble_arr[j];
				bubble_arr[j] = bubble_arr[j + 1];
				bubble_arr[j + 1] = temp;
			}
		}
	}
	cout << "�����Ľ����";
	for (int i = 0; i < arr_len; i++) {
		cout << bubble_arr[i];
		cout << " ";

	}

	return 0;
}