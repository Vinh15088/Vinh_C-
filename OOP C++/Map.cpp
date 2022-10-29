// #include<bits/stdc++.h>
// #include <set>
// #include <map>
// using namespace std;
// (key, value)
// int main(){
    // map<int, int> mp;
    // mp[100] = 200; // (100,200)
    // mp[200] = 300; // (200,300)
    // mp.insert({300,400}); //(300,400)
    // mp.insert({400,500}); //(400,500)
    // // cout << mp.size() << endl;
    // // mp[100] = 300; // (100,300) --> nó thay thế cặp (100,200), nên chỉ có 4 cặp
    // // cout << mp.size() << endl;
    
    
    // // Để duyệt qua map
    // // cach 1
    // for(pair<int, int> x:mp){
    //     cout << x.first << " " << x.second << endl;
    // }
    // // cach 2
    // for(auto it:mp){
    //     cout << it.first << " " << it.second << endl;
    // }
    // // cach 3
    // // for(map<int, int>::iterator it=mp.begin(); it != mp.end(); it++){
    // //     cout << (*it).first << " " << (*it).second << endl;
    // // }

    // // Tìm kiếm trong map
    // // count
    // //find
    // if(mp.count(500) != 0) cout << "FOUND" << endl;
    // // if(mp.find(500) != mp.end()) cout << "FOUND" << endl;
    // else cout << "NOT FOUND" << endl;


    // // ham xoa trong map
    // mp.erase(100); // xoa theo key --> no xoa cap (100,200)
    // for(auto it:mp)
    //     cout << it.first << " " << it.second << endl;
    


    // Đếm số lần xuất hiện của các phần tử, sau đó in ra kèm theo số lần xuất hiện
    /*
    8
    1 1 2 1 3 5 1 -4
    out put: 
    // với thứ tự xuất hiện từ bé đến lớn
    1 4
    2 1
    3 1
    -4 1
    5 1
    */
    // map<int, int> mp;
    // int n; cin >> n;
    // for(int i=0; i<n; i++){
    //     int x; cin >> x;
    //     mp[x]++;
    // }
    // for(auto it:mp){
    //     cout << it.first << " " << it.second << endl;
    // }

    // với output theo thứ tự xuất hiện
    // map<int, int> mp;
    // int n; cin >> n;
    // int a[1005];
    // for(int i=0; i<n; i++){
    //     cin >> a[i];
    //     mp[a[i]]++;
    // }
    // for(int i=0; i<n; i++){
    //     if(mp[a[i]] != 0){
    //         cout << a[i] << " " << mp[a[i]] << endl;
    //         mp[a[i]] = 0;
    //     }
    // }



    // đếm từ xuất hiện nhiều nhất trong câu
    /*
    9
    python
    java
    string
    java
    python
    C++
    sql
    sql
    java
    */
//     map<string, int> mp;
//     int n; cin >> n;
//     for(int i=0; i<n; i++){
//         string s; cin >> s;
//         mp[s]++;
//     }
//     int max_fre = 0;
//     string res;
//     for(auto it:mp){
//         if(it.second > max_fre){
//             max_fre = it.second;
//             res = it.first;
//         }
//     }
//     cout << res << " " << max_fre << endl;
// }




// dùng multimap (tương tự như map)
#include<bits/stdc++.h>
#include<map>
#include<unordered_map>
using namespace std;
// int main(){
//     multimap<int, int> mp;
//     mp.insert({1,100});
//     mp.insert({1,200});
//     mp.insert({2,200});
//     for(auto it:mp){
//         cout << it.first << " " << it.second << endl;
//     }
//     cout << mp.count(1) << endl;
//     return 0;
// }

// dùng unordered_map
int main(){
    unordered_map<int ,int> mp;
    mp.insert({1,100});
    mp.insert({2,200});
    mp.insert({1,200});
    for(auto it:mp){
        cout << it.first << " " << it.second << endl;
    }
    cout << mp.count(1) << endl;
    return 0;
}
