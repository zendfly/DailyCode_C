#include<iostream>
#include<string>

using namespace std;


struct Student {

	string name;
	int age;
	int source;
};


// �ṹ��Ƕ�ף���Teacher�ṹ���а���Student�ṹ��
struct Teacher {

	string name;
	int age;
	struct Student stu;
};

int main11111111() {
	// �ṹ��ָ��

	struct Student stu = { "����", 10, 20 };

	// ��ʹ�� &��Ӧ�÷�ʱ�� �Ⱥ����ߵ����ݽṹҪһ��
	// �����ڶԽṹ��ʹ�� "&"����ʱ�� �Ⱥ��ұߵ���������Ҫ�ǽṹ�����ͣ�struct����ʡ�ԣ�
	struct Student* p = &stu;

	// ͨ��ָ����ʽṹ���ڲ�����ʱ��Ҫ��ʹ�� "->"����
	p->age = 80;
	cout << p->name << "�ķ���Ϊ��" << p->source << "������Ϊ��" << p->age << endl;


	struct Teacher tea = {"��1", 50, stu};
	cout << tea.name << "��ʦ��ѧ���ǣ�" << tea.stu.name << endl;

	struct Teacher* t = &tea;
	cout << "ָ��ṹ���£�" << t->name << "��ʦ��ѧ���ǣ�" << t->stu.name << endl;

};