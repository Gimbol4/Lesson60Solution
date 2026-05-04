#include <iostream>
using namespace std;

int main() {
	int n, m;

	cout << "Input size of matrix (n, m): ";
	cin >> n >> m;

	int** matrix = new int* [n];
	int* sizes = new int[n];

	for (int i = 0; i < n; i++)
	{
		sizes[i] = rand() % m + 2;
		matrix[i] = new int[sizes[i]];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < sizes[i]; j++)
		{
			matrix[i][j] = rand() % 100;
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}

	delete[] matrix;

	return 0;
}