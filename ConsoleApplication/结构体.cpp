#include<iostream>
#include<string>
using namespace std;

// ʹ��struct�ؼ��ֽ��ж���
struct Student {
	// �����õ��������ͽ�����ϳ��û��Լ���������ݽṹ
	string name;
	int age;
	int source;

}s3;		// �ڶ���ṹ��ʱ��˳�㴴���˽ṹ�����


// �ṹ������


int main_jiegouti() {

	// �ṹ������Ķ���
	// 1.����һ���ṹ�������Ȼ��ֱ���и�ֵ
	struct Student s1;
	s1.source = 100;
	s1.age = 20;
	s1.name = "zhangsan";
	
	// 2.�ڴ����ṹ�������ʱ��ֱ�Ӹ�ֵ
	struct Student s2 = {"lisi", 21, 90};
	cout << s2.age << endl;

	// 3.�ڽṹ�嶨��ʱ˳�㴴���ṹ�����
	s3.age = 10;
	s3.name = "wangwu";
	s3.source = 80;

	// ʹ�ýṹ���ʼ��Ϊ����
	Student arr[3] = { {"lisi", 10, 80}, {"zhangsan", 20, 90}, {"wangwu", 30, 100} };
	cout << arr[1].age << endl;		// �޸Ľṹ�������е�Ԫ��

	// �����ṹ������
	for (int i = 0; i < 3; i++) {
		cout << arr[i].name << "�����䣺" << arr[i].age << "source:" << arr[i].source << endl;
	}

};
