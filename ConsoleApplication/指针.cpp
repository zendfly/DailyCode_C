#include<iostream>
using namespace std;

// ���ݵ�ַ�� �����ڶ����ʱ��ʹ��ָ�������
void temp(int* a, int* b) {
    // ʹ�õ�ַ���ݵ�ʱ�򣬺����ڲ����޸Ļ�Ӱ���ⲿ��ʵ�Σ��ⲿ��ʵ��һͬ���޸ģ�
    int temp = *a;
    *a = *b;
    *b = temp;
};

// ����ֵ�� 
void temp01(int a, int b) {
    // ʹ����ͨ��ֵ����ʱ���ⲿ��ʵ�β���Ӱ��
    int temp = a;
    a = b;
    b = a;
};

int main2222222222() {

    int a = 10;
    int b = 20;
    temp(&a, &b);		// ʹ��"&"�����÷��Ž���ַ���ݸ���������temp������ʹ��ָ���ָ��ĵ�ַ�ռ��е�ֵ�����޸ġ�a, bֵ�ı�
    cout << "a = " << a << endl;		// 
    cout << "b = " << b << endl;
    temp01(a, b);
    cout << "a = " << a << endl;		// ֵ���ı�
    cout << "b = " << b << endl;

}