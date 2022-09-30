#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, ket_qua;
    int nho=0, kq=0;

    cin >> s1 >> s2; // Nhập vào 2 số

    while (s1.size() < s2.size())	// Nếu s1 có đồ dài ngắn hơn s2 thì thêm số 0 vào trước s1 cho bằng nhau
	    s1 = '0' + s1; 
    while (s2.size() < s1.size())	// Nếu s2 có đồ dài ngắn hơn s1 thì thêm số 0 vào trước s2 cho bằng nhau
	    s2 = '0' + s2;

    for (int i=s1.size()-1; i>=0; i--) {	// Cộng theo cách đặt tính
        kq = (s1[i] - 48) + (s2[i] - 48) + nho;
        nho = kq/10;
        ket_qua += kq%10 + 48;
    }
    if (nho != 0)	// Nếu có nhớ thì thêm số nhớ vào đầu
        ket_qua += nho + 48;

    for (int i=ket_qua.size()-1; i>=0; i--) 	// In kết quả ra màn hình
        cout << ket_qua[i];
    
    return 0;
}