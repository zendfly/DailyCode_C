#include <iostream>
#include <string>

using namespace std;

struct student_a {

	string name;
	int age;
	int sorce;
};


void PirntStruct(const struct student_a* s) {

	//s->age = 100;		// ����ʾ���󣺱��ʽ�����ǿ��޸ĵ���ֵ��
	cout << "ʹ��const���κ󣬲����������" << endl;
};

int main() {

	struct student_a s;
	s.name = "����";
	s.age = 10;
	s.sorce = 40;
	PirntStruct(&s);
};