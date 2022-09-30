#include<bits/stdc++.h>
using namespace std;

//class: lop
//thuoc tinh: attribute
//phuong thuc: method, behavior
//object: doi tuong
//constructor: doi tuong
//destructor: ham huy

// encapsulation: dong goi
/* access modidier: pham vi cua thuoc tinh
    private --> thuoc tinh
    public --> phuong thuc
    protected 
*/

class TenClass {
    //Thuoc tinh va phuong tinh
};

class SinhVien{
    private:
        string id, ten, ns;
        double gpa;
    public:
        SinhVien(); //constructor
        SinhVien(string, string, string, double); // constructor
        //void xinchao();
        //void dihoc();
        void nhap();
        void in();
        ~SinhVien(); // ham huy
};
SinhVien::SinhVien(){
    //cout << "Doi tuong mac dinh duoc tai o day! \n";
    id = name = ns = "";
    gpa = 0;
}
SinhVien::SinhVien(string ma, string name, string birth, double diem) {
    //cout << "Ham khoi tao co tham so dong goi! \n";
    id = ma;
    ten = name;
    ns = birth;
    gpa = diem;
}

SinhVien::~SinhVien(){
    //cout << "Doi tuong duoc huy tai day";
}

void SinhVien::nhap(){
    cout << "Nhap id: "; cin >> id;
    cin.ignore();
    cout << "Nhap ten: "; getline(cin, ten);
    cout << "Nhap ns: "; cin >> ns;
    cout << "Nhap diem: "; cin >> gpa;
}

void SinhVien::in(){
    cout << id << " " << ten << " " << ns << " " << fixed << setprecision(2) << gpa << endl;   
}



int main()
{
    // SinhVien x("123", "Mai Duc Vinh", "12/05/2002", 3.03);
    // x. xinchao();
    // x.dihoc();
    SinhVien x;
    x.nhap();
    x.in();
    return 0;
}
