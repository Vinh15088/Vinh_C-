#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream input("input.txt");
    fstream output("output.txt");
    string a, b, answer;
    input >> a >> b;
    int nho = 0, result = 0;
    while(a.length() > b.length()) b = '0' + b;
    while(b.length() > a.length()) a = '0' + a;
    for(int i=a.length()-1; i>=0; i--){
        result = (a[i] - 48) + (b[i]- 48) + nho;
        nho = result/10;
        answer += result%10 + 48;
    }
    if(nho != 0) answer += nho + 48;
    for(int i=answer.length()-1; i>=0; i--){
        output << answer[i];
    }
    input.close();
    output.close();
    return 0;
}