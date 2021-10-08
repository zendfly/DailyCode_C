//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main(){
//	
//	// 1.if
//	//int a = 100;
//	//if (a > 80) {
//	//	cout << "" << endl;
//	//}
//	//else
//	//{
//	//	cout << "aaa" << endl;
//	//}
//	
//
//	// 当前面有条件满足时， else if不在执行
//	int b = 20;
//	if (b > 10) {
//		cout << "aaa" << endl;
//	}
//	else if (b > 5) {
//		cout << "bbb" << endl;
//	}
//	else
//		cout << "ccc" << endl;
//
//	// 练习
//	//int pig_a;
//	//int pig_b;
//	//int pig_c;
//	//cin >> pig_a;
//	//cin >> pig_b;
//	//cin >> pig_c;
//	//if ((pig_a >= pig_b >= pig_c) | (pig_a >= pig_c >= pig_b)) {
//	//	cout << "max pig is " << pig_a << endl;
//	//}
//	//else if ((pig_b >= pig_a >= pig_c) | (pig_b >= pig_c >= pig_a)) {
//	//	cout << "max pig is " << pig_b << endl;
//	//}
//	//else {
//	//	cout << "max pig is " << pig_c << endl;
//	//}
//
//
//	// 三目运算符
//	int a1 = 2;
//	int b1 = 0;
//	int c1 = 4;
//	int d1;	
//	d1 = a1 > c1 ? a1 : b1;	
//	cout << d1 << endl;
//	a1 > c1 ? a1 : b1 = 100;
//	cout << a1 << endl;
//	cout << b1 << endl;
//
//
//	// switch，在每个case后面，用break终止switch，跳转到switch后的下一行
//	int gold = 10;
//	switch (gold) {
//		case 20:
//			gold++;
//			break;
//		case 15:
//			gold--;
//			break;
//		case 10:
//			gold *= 2;
//			break;
//		default:
//			gold *= 1;
//			break;
//	}
//
//	return 0;
//}