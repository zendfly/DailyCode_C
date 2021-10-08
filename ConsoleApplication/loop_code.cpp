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
//	// 添加随机种子， 作用：利用当前系统时间生成随机数
//	srand((unsigned int)time(NULL));
//
//	float random_num = rand() %100 + 1;		// 随机数的生成
//	float guess_num = 1;
//	while (random_num != guess_num)
//	{	
//		cout << "输入不对，继续输入：" << endl;
//		cin >> guess_num;
//	}
//
//
//	// do...while
//	// 先执行一次while再判断执行条件， while是先判断执行条件再进行执行代码
//	int dow = 10;
//	do {
//		cout << dow << endl;
//		dow++;
//	} while (dow < 20);
//
//
//	return 0;
//}