#include<iostream>
using namespace std;
void bubbleSort(int* a,int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main()
{
	int n;
	cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	bubbleSort(a, n);
	
	if (n >= 2)
	{
		cout << "second minimum" << a[1] << endl;
		cout << "second maximum" << a[n - 2];
		return 0;
	}
	else
	{
		cout << "second minimum" << a[0] << endl;
		cout << "second maximum" << a[0];
	}
	return 0;
		

	
}
