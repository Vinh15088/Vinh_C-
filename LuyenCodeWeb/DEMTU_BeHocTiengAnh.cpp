#include<bits/stdc++.h>
using namespace std;
string s;


void giai(){
	long long word = 0;
	getline(cin,s);
	for (int i = 0; i < s.size(); i++){
		if ((s[i] != ' ' && s[i + 1] == ' ') || (s[i] != ' '&& i == s.size() - 1)) word++;
	}
	cout << word;
}


int main(){
	//code here
	giai();
}