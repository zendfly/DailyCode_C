#include <iostream>
#include <string>

using namespace std;

int main() {

	string st_char = "abcdefg";
	float st_len = sizeof(st_char);
	int i = 0;
	while (i < st_len) {
		cout << st_char[i] << endl;
		i++;
	
	}

	return 0;
}