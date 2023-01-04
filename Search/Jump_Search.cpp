#include <bits/stdc++.h>
using namespace std;

int jumpSearch(int arr[], int x, int n)
{
	int step = sqrt(n);
	int prev = 0;
	while (arr[min(step, n)-1] < x)
	{
		prev = step;
		step += sqrt(n);
		if (prev >= n)
			return -1;
	}
	while (arr[prev] < x)
	{
		prev++;

		// If we reached next block or end of
		// array, element is not present.
		if (prev == min(step, n))
			return -1;
	}
	// If element is found
	if (arr[prev] == x)
		return prev;

	return -1;
}
int main()
{
	int x;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>x;
	// Find the index of 'x' using Jump Search
	int index = jumpSearch(arr, x, n);

	// Print the index where 'x' is located
	cout << "\nNumber " << x << " is at index " << index;
	return 0;
}
