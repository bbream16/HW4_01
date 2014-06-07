#include <iostream>
using namespace std;



int main() {

	cout << "How large of an array would you like? ";
	int array_size;
	cin >> array_size;

	int* SIZE = new int[array_size];


	cout << "Please enter numbers into that array: ";
	for (int i = 0; i < array_size; i++){
		cin >>  SIZE[i];
	}
	

	int sum = 0;
	for (int i = 0; i < array_size; i++)
		sum += SIZE[i];






	//int total = sum(array_size);
	//double mean = average(array_size, total);
	


	cout << "\n\nThe average number of the array is " << sum/array_size << ".\n";

	cout << "The following numbers are greater than the average number in the array: ";
	for (int i = 0; i < array_size; i++){
		if(SIZE[i] > (sum/array_size))
			cout << SIZE[i] << endl;
	}

	delete[] SIZE;
	cout << endl << endl;
	return 0;
}