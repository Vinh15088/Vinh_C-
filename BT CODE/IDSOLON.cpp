#include <bits/stdc++.h>
#define llt unsigned long long int

using namespace std;

// convert letter to number
int num(char s) {
	return (int)s - 48;
}

string sumBignumber(string a, string b) {

	string result;
	// once number is empty
	if (a == "")
		return b;
	if (b == "")
		return a;
	// setup by default, length a >= length b
	if (a.size() < b.size()) {
		swap(a, b);
	}
	int alen = a.size(), blen = b.size();
	b.insert(0, alen - blen, '0');

	// calculation
	llt carry = 0;
	int st = alen - 1;
	while (st > 10) {
		llt num1 = 0, num2 = 0;
		for (int i = 0;i < 10;i++) {
			llt k = pow(10, i);
			num1 += num(a[st]) * k;
			num2 += num(b[st]) * k;
			st--;
		}
		llt fres = num1 + num2 + carry;
		carry = fres / 10000000000;
		num1 = fres % 10000000000;
		string sres = to_string(num1);
		sres.insert(0, (10 - sres.size()), '0');
		result.insert(0,sres);
	}

	llt num1 = 0, num2 = 0;
	for (int i = st;i >= 0 ;i--) {
		llt k = pow(10, st - i);
		num1 += num(a[i]) * k;
		num2 += num(b[i]) * k;
	}
	llt fres = num1 + num2 + carry;
	result.insert(0, to_string(fres));

	return result;
}

// littleAnd is a less of and from 0a to 9a
vector <string> littleAnd;

// load 0a-9a into littleAnd
void Setdefine(string a) {
	//clear little and. LA[0] = 0a = 0
	// LA[1] = 1a = a;
	littleAnd.clear();
	littleAnd.push_back("0");
	littleAnd.push_back(a);
	string littlesum = a;

	// 2a -> 9a. pushback to littleAnd
	for (int i = 2;i <= 9;i++) {
		littlesum = sumBignumber(littlesum, a);
		littleAnd.push_back(littlesum);
	}
}

string andBignumber(string a, string b) {
	//create result
	string result;
	Setdefine(a); // load 0a-> 9a vao` little AND

	int st = 0;
	for (int i = b.size() - 1;i >= 0;i--) {
		int temp = num(b[st++]);
		if (temp != 0) {
			// doc gia tri tai b[st] va thuc hien phep tinh a*b[st]
			// add i times '0' after a*b[st]
			// result += a*b[st]
			string acall = littleAnd[temp];
			acall.insert(acall.size(), i, '0');
			result = sumBignumber(result, acall);
		}
	}
	if (result == "")
		result = "0";
	return result;
}
int main()
{
	
	ifstream fin ("bignumber.in");
	ofstream fout ("bignumber.out");

	// Number test
	int test;
	fin >> test;

	while (test--) {

		// create num1,num2 operator
		string number1, number2, operation;
		fin >> number1 >> operation >> number2;
		if (operation == "+" ) {
			fout << sumBignumber(number1, number2) << endl;
		}
		if (operation == "*") {
			fout << andBignumber(number1, number2) << endl;
		}
	}

	return 0;
}