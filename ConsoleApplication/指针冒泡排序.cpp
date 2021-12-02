#include <iostream>
using namespace std;

// Ã°ÅÝÅÅÐò
void bubbleSort(int *arr, int len_arr) {

	for (int i = 0; i < len_arr - 1; i++) {
		for (int j = 0; j < len_arr - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			};
		};
	};
}

// ´òÓ¡Êý×é
void PrintArr(int *arr, int len_arr) {

	for (int i = 0; i < len_arr; i++) {
		cout << arr[i] << endl;
	};
};

int main2222222() {
	
	int arr[10] = { 4,3,2,1,0,9,8,7,6,5 };
	int len_arr = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, len_arr);
	PrintArr(arr, len_arr);

}