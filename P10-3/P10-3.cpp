#include <iostream>
using namespace std;

int main() {
	int scores[10];
	int students;
	cout << "Enter number of students: ";
	cin >> students;

	for (int i = 0; i < students; i++) {
		cout << "Enter score #" << i + 1 << ":";
		cin >> scores[i];
	}
}