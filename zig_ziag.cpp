// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to print the pattern
void printPattern(int n)
{
	// N * N matrix to store the
	// values
	int arr[n][n];

	arr[0][0] = 1;

	// Fill the values of
	// upper triangle
	for (int i = 0; i < n; i++) {

		if (i > 0) {
			arr[i][0] = arr[i - 1][0] + i + 1;
		}
		for (int j = 1;
			j < n - i; j++) {

			arr[i][j] = arr[i][j - 1] + i + j;
		}
	}

	// Fill the values of
	// lower triangle
	arr[1][n - 1] = arr[n - 1][0] + 1;
	int div = 0;

	for (int i = 2; i < n; i++) {

		div = n - 2;
		for (int j = n - i;
			j < n; j++) {

			if (j == n - i) {
				arr[i][j] = arr[i - 1][j + 1]
							+ 1;
			}
			else {
				arr[i][j] = arr[i][j - 1]
							+ div;
				div--;
			}
		}
	}

	// Print the array
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

// Driver Code
int main()
{
	// Given size of matrix
	int N = 4;

	// Function Call
	printPattern(N);
	return 0;
}
