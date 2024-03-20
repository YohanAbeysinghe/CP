#include <iostream>
using namespace std;

int main()
{
	int n, x=0;
	string a;
	cin >> n;
	while (n--){
		cin >> a;
		if (a[1]=='+'){
			x++;
		}
		else{
			x--;
		}
	}
	cout << x << endl;
	return 0;
}