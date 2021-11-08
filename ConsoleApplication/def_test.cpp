#include <iostream>
#include <string>

using namespace std;


int fun_tes(int a, int b) {

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++) {
			cout << i << "+" << j << " = " << i * j << endl;
		}
	}

	return true;
}