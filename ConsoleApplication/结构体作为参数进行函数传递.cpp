#include <iostream>
#include <string>

using namespace std;

struct Student {

	string name;
	int age;
	int source;
	int index;
};


void PrintStruct_0(struct Student s) {

	cout << "�ṹ����Ϊ�������ݣ�" << s.name << s.source << s.age << s.index << endl;


};


void PrintStruct_1(struct Student *s) {

	// ͨ��ָ�뷽ʽ����ʱ�������ڲ����Ըı�õ�ַ�Ĵ洢����
	s->age = 40;
	cout << "�ṹ����ָ�뷽ʽ��Ϊ�������ݣ�" << s->age << "�ı�" << endl;

};


int main1001() {

	struct Student s;
	s.age = 20;
	s.name = "����";
	s.source = 100;
	s.index = 1;

	PrintStruct_0(s);
	PrintStruct_1(&s);		// ����ָ���ַʱ��ʹ��"&"��ַ��
};