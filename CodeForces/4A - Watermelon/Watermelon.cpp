#include <iostream>
using namespace std;

int main() {
    int m;
    scanf("%d", &m);
    if ((m - 1) % 2 == 0 || m <= 2)
	printf("NO");
    else printf("YES");
    return 0;
}
