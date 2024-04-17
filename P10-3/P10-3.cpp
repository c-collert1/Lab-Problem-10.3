#include <iostream>
using namespace std;

int smallestValue(int array[], int size);
int highestValue(int array[], int size);
int average(int array[], int size);
int main() {
	int scores[10];
	int students;
	cout << "Enter number of students: ";
	cin >> students;

	for (int i = 0; i < students; i++) {
		cout << "Enter score #" << i + 1 << ":";
		cin >> scores[i];
	}

	cout << "lowest: " << smallestValue(scores, students) << endl;
	cout << "highest: " << highestValue(scores, students) << endl;
	cout << "average: " << average(scores, students) << endl;
}

int smallestValue(int array[], int size) {
	int smallest = INT_MAX;
	for (int i = 0; i < size; i++) {
		if (array[i] < smallest) {
			smallest = array[i];
		}
	}
	return smallest;
}
int highestValue(int array[], int size) {
	int largest = INT_MIN;
	for (int i = 0; i < size; i++) {
		if (array[i] > largest) {
			largest = array[i];
		}
	}
	return largest;
}

int average(int array[], int size) {
	int average = 0;
	for (int i = 0; i < size; i++) {
		average += array[i];
	}
	average /= size;
	return average;
}