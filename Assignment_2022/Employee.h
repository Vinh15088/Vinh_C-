#ifndef Employee_h
#define Employee_h
#define ll long long
#include<bits/stdc++.h>
using namespace std;

class Client {
    public:
        int Id;
        string Name;
        string Email;
        string Phone;
        ll Bill;
        bool Status;
    public:
        Client(int Id, string Name, string Email, string Phone, ll Bill, bool Status){
            this -> Id = Id;
            this -> Name = Name;
            this -> Email = Email;
            this -> Phone = Phone;
            this -> Bill = Bill;
            this -> Status = Status;
        }
    //Show
    void Show(){
        cout << endl;
       cout.width(20); cout << Id;
       cout.width(20); cout << Name;
       cout.width(20); cout << Email;
       cout.width(20); cout << Phone;
       cout.width(20); cout << Bill;
        if(Status == 1) cout << "Paid";
        else cout << "Unpaid";
    }
};



void Sort_By_Bill(vector<Client> Employee);
void Sort_By_BillRV(vector<Client> Employee);

void ChangeName(vector<Client> &Employee, int tmp);
void ChangeEmail(vector<Client> &Employee, int tmp);
void ChangePhone(vector<Client> &Employee, int tmp);
void ChangeBill(vector<Client> &Employee, int tmp);
void ChangeStatus(vector<Client> &Employee, int tmp);

void FindName(vector<Client> Employee);
void FindEmail(vector<Client> Employee);
void FindPhone(vector<Client> Employee);
void FindBill(vector<Client> Employee);
void FindStatus(vector<Client> Employee);

void EraseId(vector<Client> &Employee);
void EraseStatus(vector<Client> &Employee);

void LoadData(vector<Client> &Employee, int &Count);

// Khai bao voi File Function:
void AddData(vector<Client> &Employee, int &Count);
void SortData(vector<Client> Employee);
void ChangeData(vector<Client> &Employee);
void FindData(vector<Client> Employee);
void EraseData(vector<Client> &Employee);
void ChangeId(vector<Client> &Employee, int &Count);


#endif