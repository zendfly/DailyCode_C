//#include <iostream>
//#include <string>
//#include <ctime>
//
//using namespace std;
//
//int mian() {
//
//	string st_char = "abcdefg";
//	float st_len = sizeof(st_char);
//	int i = 0;
//	while (i <= st_len) {
//		cout << i <<st_char[i] << endl;
//		i++;
//	}
//
//	// ���������ӣ� ���ã����õ�ǰϵͳʱ�����������
//	srand((unsigned int)time(NULL));
//
//	float random_num = rand() %100 + 1;		// �����������
//	float guess_num = 1;
//	while (random_num != guess_num)
//	{	
//		cout << "���벻�ԣ��������룺" << endl;
//		cin >> guess_num;
//	}
//
//
//	// do...while
//	// ��ִ��һ��while���ж�ִ�������� while�����ж�ִ�������ٽ���ִ�д���
//	int dow = 10;
//	do {
//		cout << dow << endl;
//		dow++;
//	} while (dow < 20);
//
//
//	return 0;
//}