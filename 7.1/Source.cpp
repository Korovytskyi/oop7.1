#include <iostream>
#include <array>
#include <ctime>
#include <iostream>
using namespace std;
void create(array<int, 100>& arr, int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100;
}
void print(array<int, 100> arr, int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int max(array<int, 100> arr, int n)
{

	int max = arr[0];
	for (int i = 0; i < 10; ++i)
		if (arr[i] > max)
			max = arr[i];
	return max;
}
int min(array<int, 100> arr, int n)
{

	int min = arr[1];
	for (int i = 0; i < 10; ++i)
		if (arr[i] < min)
			min = arr[i];
	return min;
}

int main()
{
	srand((unsigned int)time(NULL));
	int n;
	cout << "n = ? "; cin >> n;
	array<int, 100> arr = { 0 };
	create(arr, n);
	print(arr, n);
	cout << "max = " << max(arr, n) << endl;
	cout << "min = " << min(arr, n) << endl;
	cout << "seredn. znach = " << (max(arr, n) + min(arr, n)) / 2 << endl;
	return 0;
}