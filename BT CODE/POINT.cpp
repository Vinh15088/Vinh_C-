#include <bits/stdc++.h>
using namespace std;
double distance(pair<double, double>A, pair<double, double>B) {
	double result = sqrt((A.first - B.first)* (A.first - B.first) + (A.second - B.second)* (A.second - B.second));
    return result;
}

int main()
{
	ifstream fin("points.inp");
	ofstream fout("points.out");

	int n;
	fin >> n;
	vector<pair<double, double>> xy;
	
	for (int i = 0;i < n;i++) {
		double st, nd;
		fin >> st >> nd;
		xy.push_back(make_pair(st, nd));
	}
	
	for (int i = 0;i < xy.size() ;i++) {
		for (int j = 0;j < xy.size() ;j++) {
            if(j == xy.size() - 1)
                fout << setprecision(2) << fixed << distance(xy[i], xy[j]);
            else
			fout << setprecision(2) << fixed << distance(xy[i], xy[j]) << " ";
		}
		fout << endl;
	}
}