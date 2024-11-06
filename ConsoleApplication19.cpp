#include <iostream>
using namespace std;
int main()
{
	int size;
	cout << "Enter numbers: ";
	cin >> size;
	int* mass = new int[size];
	cout << "Enter elements in array: ";
	for (int i = 0; i < size; ++i) {
		cin >> mass[i];
	}
	bool isSymmetrychno = true;
	for (int i = 0; i < size / 2; ++i) {
		if (mass[i] != mass[size - 1 - i]) {
			isSymmetrychno = false;
			break;
		}
	}
	if (isSymmetrychno) {
		cout << "Array is symmetric" << endl;
	}
	else {
		cout << "Array isn't symmetric" << endl;
	}
	delete[] mass;
	return 0;
}
