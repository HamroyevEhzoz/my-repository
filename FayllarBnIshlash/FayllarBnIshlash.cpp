#include<iostream>
using namespace std;
int main() {
	int x, n,san=0;
	cout << "Nechta element kiritmoqchisz :" << "\n";
	cin >> n;
	int* arr = new int(n);
	int* arr1 = new int(n);
	cout  << n << " ta element kiriting" << endl;
	for (x = 0; x < n; x++) {
		cin >> arr[x];
	}
	
	for (x = 0; x < n; x++) {
		if (arr[x] % 2 == 0 || arr[x]==0)
		{
			arr1[x] = arr[x];
		}
			
	}
	delete[] arr;

	//int*  arr = new int(n-san);
	

	for (int j = 0;j < (n - san);j++)
	{
		cout << arr1[j]<<" ";
	}
	return 0;
}