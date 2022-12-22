#include<bits/stdc++.h>
using namespace std;

class SVien{
    private:
        string ma, ten, ngaysinh, lop;
        double gpa;
    public:
        void Nhap(int stt){
            string ma1 = to_string(stt);
            while(ma1.size() < 3) ma1 += "0" + ma1;
            this->ma = "SV" + ma1;
            cin.ignore();
            getline(cin, this->ten);
            getline(cin, this->lop);
            getline(cin, this->ngaysinh);
            cin >> this->gpa;
        }
        void In(){
            cout << ma << ' ' << ten << ' ' << lop << ' ' << ngaysinh << ' ' << fixed << setprecision(2) << gpa;
        }
        void chuanHoa(){
            string res = "";
            stringstream ss(ten);
            string tmp;
            while(ss >> tmp){
                res += toupper(tmp[0]);
                for(int j=1; j<tmp.size(); j++){
                    res += tolower(tmp[j]);
                }
                res += " ";
            }
            res.pop_back();
            this->ten = res;
            if(this->ngaysinh[1] == '/') this->ngaysinh = "0" + this->ngaysinh;
            if(this->ngaysinh[4] == '/') this->ngaysinh.insert(3, "0");
        }
        double getGpa(){
            return this->gpa;
        }
        string getMa(){
            return this->ma;
        }
};

bool comp(SVien a, SVien b){
    if(a.getGpa() != b.getGpa()) 
        return a.getGpa() > b.getGpa();
    return a.getGpa() < b.getGpa();
}
int main(){
    int n; cin >> n;
    SVien a[n];
    for(int i=0; i<n; i++){
        a[i].Nhap(i+1);
        a[i].chuanHoa();
    }
    sort(a, a+n, comp);
    for(int i=0; i<n; i++){
        a[i].In();
        cout << endl;
    }
}