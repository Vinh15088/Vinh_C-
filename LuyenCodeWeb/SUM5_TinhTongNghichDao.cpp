#include<iostream>
#include<iomanip>
#define N 1000000
using namespace std;

int main() {
	int T, n;
	double Sum[N];
	cin >> T;
	Sum[1] = 1;
    for (int i = 2; i <= N; ++i)
    {
        Sum[i] = Sum[i - 1] + (double)1 / i;
    }
	for (int i = 0; i < T; ++i)
	{
		cin >> n;
		cout << setprecision(5) << fixed << Sum[n] << "\n";
	}
}