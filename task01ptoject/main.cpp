#include "util.h"

int main() {
	int size;

	cout << "Input size of square matrix: ";
	cin >> size;

	int** matrix = create(size);

	if (matrix == NULL) {
		return -1;
	}

	init_user(matrix, size); 

	print("Matrix:\n");
	print(convert(matrix, size));
	
	remove(matrix, size);

	return 0;
}