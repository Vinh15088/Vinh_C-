#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int m, n, num, a[100001];
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> num;
        int pos = lower_bound(a,a+n,num) - a;
        // lower_bound(first, last, val): 
        // Trả về iterator hoặc con trỏ trỏ tới phần tử đầu tiên trong đoạn 
        // [l, r - 1][l,r−1] mà lớn hơn hoặc bằng khóa tìm kiếm valval.
        //Tìm vị trí của phần tử đầu tiên lớn hơn hoặc bằng val trong mảng a.
        // Muốn đưa ra vị trí là số nguyên thì lấy kết quả hàm trừ đi iterator a[0]
        if(a[pos] != num) cout << 0 << " ";
        else cout << pos + 1 << " ";
        cout << pos << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}