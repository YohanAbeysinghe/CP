#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	for (int i=0; i<k; i++){
		if (a[i]==0){
			cout << i;
			return 0;
		}
	}
	for (int i=k; i<n; i++){
		if (a[k-1]!= a[i]){
			cout << i;
			return 0;
		}
	}
	cout << n;
	return 0;	
}