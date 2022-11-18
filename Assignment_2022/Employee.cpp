#include<bits/stdc++.h>
#include "Employee.h"

// Add
void AddData(vector<Client> &Employee, int &Count){
    while(1){
        cout << "Please type employee information" << endl;
        ofstream File;
        File.open("data.txt", ios::out|ios::app); // doc file va co the di chuyen trong tep
        string A_Name, A_Email, A_Phone, A_Status_tmp;
        ll A_Bill;
        bool A_Status_Check_tmp;
        cin.ignore();
        cout << "Please type name: ";
        getline(cin, A_Name); cout << endl;
        cout << "Type email: ";
        cin >> A_Email; cout << endl;
        cout << "Type phone: ";
        cin >> A_Phone; cout << endl;
        cout << "Type bill: ";
        cin >> A_Bill; cout << endl;
        cout << "Type status: ";
        cin >> A_Status_tmp;
        if(A_Status_tmp[0] = 'P') A_Status_Check_tmp = 1;
        else A_Status_Check_tmp = 0;

        File << endl;
        Count++;
        File << Count;
        File.width(20);  File << A_Name;
        File.width(20);  File << A_Email;
        File.width(20);  File << A_Phone;
        File.width(20);  File << A_Bill;
        if(A_Status_Check_tmp == true) File << "Paid";
        else File << "Unpaid";
        File.close();
        LoadData(Employee, count);
        cout << "Do you want to add more employee" << endl << "1.Yes" << endl << "2.No" << endl;
        int choice; cin >> choice;
        if(choice != 1) break;
    }
}


//Sort
void Sort_By_Bill(vector<Client> Employee){
    File.width(20);  File << "Id";
    File.width(20);  File << "Name";
    File.width(20);  File << "Email";
    File.width(20);  File << "Phone";
    File.width(20);  File << "Bill";
    File << "Status";
    for(int i=0; i<Employee.size()-1; i++){
        for(int j=i+1; j<Employee.size(); j++){
            if(Employee.at(i).Bill > Employee.at(j).Bill){
                swap(Employee.at(i), Employee.at(j));
            }
        }
    }
    for(int i=0; i<Employee.size(); i++){
        Employee.at(i).Show();
    }
    cout << endl;
}
void Sort_By_BillRV(vector<Client> Employee){
    File.width(20);  File << "Id";
    File.width(20);  File << "Name";
    File.width(20);  File << "Email";
    File.width(20);  File << "Phone";
    File.width(20);  File << "Bill";
    File << "Status";
    for(int i=0; i<Employee.size()-1; i++){
        for(int j=i+1; j<Employee.size(); j++){
            if(Employee.at(i).Bill < Employee.at(j).Bill){
                swap(Employee.at(i), Employee.at(j));
            }
        }
    }
    for(int i=0; i<Employee.size(); i++){
        Employee.at(i).Show();
    }
    cout << endl;
}


//Change
void ChangeName(vector<Client> &Employee, int tmp){
    Cout << "New Name" << endl;
    string Name_tmp;
    cin.ignore();
    getline(cin, Name_tmp);
    for(int i=0; i<Employee.size(); i++){
        if(Employee.at(i).Id == tmp){
            Employee.at(i).Name = Name_tmp;
            break;
        }
    }
    ofstream File;
    File.open("data.txt", ios::out);
    File.width(20);  File << "Id";
    File.width(20);  File << "Name";
    File.width(20);  File << "Email";
    File.width(20);  File << "Phone";
    File.width(20);  File << "Bill";
    File << "Status" << endl;
    for(int i=0; i<Employee.size(); i++){
        File.width(20);  File << Employee.at(i).Id;
        File.width(20);  File << Employee.at(i).Name;
        File.width(20);  File << Employee.at(i).Email;
        File.width(20);  File << Employee.at(i).Phone;
        File.width(20);  File << Employee.at(i).Bill;
        if(Employee.at(i).Status == 1) File << "Paid";
        else File << "Unpaid";
        if(i != Employee.size()-1) File << endl;
    }
    File.close();
}

void ChangeEmail(vector<Client> &Employee, int tmp){
    Cout << "New Email" << endl;
    string Email_tmp;
    cin.ignore();
    getline(cin, Email_tmp);
    for(int i=0; i<Employee.size(); i++){
        if(Employee.at(i).Id == tmp){
            Employee.at(i).Email = Email_tmp;
            break;
        }
    }
    ofstream File;
    File.open("data.txt", ios::out);
    File.width(20);  File << "Id";
    File.width(20);  File << "Name";
    File.width(20);  File << "Email";
    File.width(20);  File << "Phone";
    File.width(20);  File << "Bill";
    File << "Status" << endl;
    for(int i=0; i<Employee.size(); i++){
        File.width(20);  File << Employee.at(i).Id;
        File.width(20);  File << Employee.at(i).Name;
        File.width(20);  File << Employee.at(i).Email;
        File.width(20);  File << Employee.at(i).Phone;
        File.width(20);  File << Employee.at(i).Bill;
        if(Employee.at(i).Status == 1) File << "Paid";
        else File << "Unpaid";
        if(i != Employee.size()-1) File << endl;
    }
    File.close();
}

void ChangePhone(vector<Client> &Employee, int tmp){
    cout << "New Phone" << endl;
    string Phone_tmp;
    cin.ignore();
    while(1){
        getline(cin, Phone_tmp);
        if(Num_tmp.size() == 10) break;
        cout << "Your Phone is wrong! Please type again" << endl;
    }
    for(int i=0; i<Employee.size(); i++){
        if(Employee.at(i).Id == tmp){
            Employee.at(i).Phone == Phone_tmp;
            break;
        }
    }
    ofstream File;
    File.open("data.txt", ios::out);
    File.width(20);  File << "Id";
    File.width(20);  File << "Name";
    File.width(20);  File << "Email";
    File.width(20);  File << "Phone";
    File.width(20);  File << "Bill";
    File << "Status" << endl;
    for(int i=0; i<Employee.size(); i++){
        File.width(20);  File << Employee.at(i).Id;
        File.width(20);  File << Employee.at(i).Name;
        File.width(20);  File << Employee.at(i).Email;
        File.width(20);  File << Employee.at(i).Phone;
        File.width(20);  File << Employee.at(i).Bill;
        if(Employee.at(i).Status == 1) File << "Paid";
        else File << "Unpaid";
        if(i != Employee.size()-1) File << endl;
    }
    File.close();
}

void ChangeBill(vector<Client> &Employee, int tmp){
    Cout << "New Bill" << endl;
    ll Bill_tmp;
    cin >> Bill_tmp;
    for(int i=0; i<Employee.size(); i++){
        if(Employee.at(i).Id == tmp){
            Employee.at(i).Bill = Bill_tmp;
            break;
        }
    }
    ofstream File;
    File.open("data.txt", ios::out);
    File.width(10);  File << "Id";
    File.width(20);  File << "Name";
    File.width(20);  File << "Email";
    File.width(15);  File << "Phone";
    File.width(15);  File << "Bill";
    File << "Status" << endl;
    for(int i=0; i<Employee.size(); i++){
        File.width(10);  File << Employee.at(i).Id;
        File.width(20);  File << Employee.at(i).Name;
        File.width(20);  File << Employee.at(i).Email;
        File.width(15);  File << Employee.at(i).Phone;
        File.width(15);  File << Employee.at(i).Bill;
        if(Employee.at(i).Status == 1) File << "Paid";
        else File << "Unpaid";
        if(i != Employee.size()-1) File << endl;
    }
    File.close();
}

void ChangeStatus(vector<Client> &Employee, int tmp){
    for(int i=0; i<Employee.size(); i++){
        if(Employee.at(i).Id == tmp){
            if(Employee.at(i).Status == 1){
                Employee.at(i).Status = 0;
                break;
            }
            else {
                Employee.at(i).Status = 1;
                break;
            }

        }
    }
    ofstream File;
    File.open("data.txt", ios::out);
    File.width(20);  File << "Id";
    File.width(20);  File << "Name";
    File.width(20);  File << "Email";
    File.width(20);  File << "Phone";
    File.width(20);  File << "Bill";
    File << "Status" << endl;
    for(int i=0; i<Employee.size(); i++){
        File.width(20);  File << Employee.at(i).Id;
        File.width(20);  File << Employee.at(i).Name;
        File.width(20);  File << Employee.at(i).Email;
        File.width(20);  File << Employee.at(i).Phone;
        File.width(20);  File << Employee.at(i).Bill;
        if(Employee.at(i).Status == 1) File << "Paid";
        else File << "Unpaid";
        if(i != Employee.size()-1) File << endl;
    }
    File.close();
}



//Find
void FindName(vector<Client> Employee){
    cout << "Type the name want to find" << endl;
    string F_Name_tmp;
    cin.ignore();
    getline(cin, F_Name_tmp);
    File.width(20);  File << "Id";
    File.width(20);  File << "Name";
    File.width(20);  File << "Email";
    File.width(20);  File << "Phone";
    File.width(20);  File << "Bill";
    cout << "Status";
    for(int i=0; i<Employee.size(); i++){
        string compare;
        for(int j=0; j<=Employee.at(i).Name.size()-F_Name_tmp.size(); j++){
            compare = Employee.at(i).Name.substr(j, F_Name_tmp.size());
            if(compare.compare(F_Name_tmp) == 0){
                Employee.at(i).Show();
                break;
            }
        }
    }
    cout << endl;
}

void FindEmail(vector<Client> Employee){
    cout << "Type the email want to find" << endl;
    string F_Email_tmp;
    cin.ignore();
    getline(cin, F_Email_tmp);
    File.width(20);  File << "Id";
    File.width(20);  File << "Name";
    File.width(20);  File << "Email";
    File.width(20);  File << "Phone";
    File.width(20);  File << "Bill";
    cout << "Status";
    for(int i=0; i<Employee.size(); i++){
        string compare;
        for(int j=0; j<=Employee.at(i).Email.size()-F_Email_tmp.size(); j++){
            compare = Employee.at(i).Email.substr(j, F_Email_tmp.size());
            if(compare.compare(F_Email_tmp) == 0){
                Employee.at(i).Show();
                break;
            }
        }
    }
    cout << endl;
}

void FindPhone(vector<Client> Employee){
    cout << "Type the phone want to find" << endl;
    string F_Phone_tmp;
    cin.ignore();
    getline(cin, F_Phone_tmp);
    File.width(20);  File << "Id";
    File.width(20);  File << "Name";
    File.width(20);  File << "Email";
    File.width(20);  File << "Phone";
    File.width(20);  File << "Bill";
    cout << "Status";
    for(int i=0; i<Employee.size(); i++){
        string compare;
        if(Employee.at(i).Number.size() >= F_Phone_tmp.size()){
            compare = Employee.at(i).Number.substr(0, F_Phone_tmp.size());
        }
        if(compare.compare(F_Phone_tmp) == 0){
            Employee.at(i).Show();
        }
    }
    cout << endl;
}

void FindBill(vector<Client> Employee){
    cout << "Type bill will from: ";
    ll F_Bill_L, F_Bill_R;
    cin >> F_Bill_L;
    cout << "to ";
    cin >> F_Bill_R;
    cout.width(10);  cout << "Id";
    cout.width(20);  cout << "Name";
    cout.width(20);  cout << "Email";
    cout.width(10);  cout << "Phone";
    cout.width(10);  cout << "Bill";
    cout << "Status";
    for(int i=0; i<Employee.size(); i++){
        if(Employee.at(i).Bill >= F_Bill_L && Employee.at(i).Bill <= F_Bill_R){
            Employee.at(i).Show();
        }
    }
    cout << endl;
}

void FindStatus(vector<Client> Employee){
    cout << "Type the status want to find" << endl;
    string F_Status_tmp;
    bool F_Status_check_tmp;
    cin >> F_Status_tmp;
    if(F_Status_tmp[0] == 'P') F_Status_check_tmp = 1;
    else F_Status_check_tmp = 0;
    File.width(20);  File << "Id";
    File.width(20);  File << "Name";
    File.width(20);  File << "Email";
    File.width(20);  File << "Phone";
    File.width(20);  File << "Bill";
    cout << "Status";
    for(int i=0; i<Employee.size(); i++){
        if(Employee.at(i).Status == F_Status_check_tmp) Employee.at(i).Show();
    }
    cout << endl;
}



//Erase
void EraseId(vector<Client> &Employee){
    int E_Id_tmp;
    cout << "Chose Id you want to erase: ";
    cin >> E_Id_tmp;
    Employee.erase(Employee.begin() + E_Id_tmp-1,Employee.begin() + E_Id_tmp);
    ofstream File;
    File.open("data.txt", ios::out);
    File.width(20);  File << "Id";
    File.width(20);  File << "Name";
    File.width(20);  File << "Email";
    File.width(20);  File << "Phone";
    File.width(20);  File << "Bill";
    File << "Status" << endl;
    for(int i=0; i<Employee.size(); i++){
        File.width(20);  File << Employee.at(i).Id;
        File.width(20);  File << Employee.at(i).Name;
        File.width(20);  File << Employee.at(i).Email;
        File.width(20);  File << Employee.at(i).Phone;
        File.width(20);  File << Employee.at(i).Bill;
        if(Employee.at(i).Status == 1) File << "Paid";
        else File << "Unpaid";
        if(i != Employee.size()-1) File << endl;
    }
    File.close();
}

void EraseStatus(vector<Client> &Employee){
    cout << "Do you want to erase all paid bill\n1.Yes\n2.No" << endl;
    int E_Status_tmp;
    cin >> E_Status_tmp;
    if(E_Status_tmp != 1) return;
    for(int i=0; i<Employee.size(); i++){
        if(Employee.at(i).Status == 1){
            Employee.erase(Employee.begin()+i, Employee.begin()+i+1);
            i--;
        }
    }
    ofstream File;
    File.open("data.txt", ios::out);
    File.width(20);  File << "Id";
    File.width(20);  File << "Name";
    File.width(20);  File << "Email";
    File.width(20);  File << "Phone";
    File.width(20);  File << "Bill";
    File << "Status" << endl;
    for(int i=0; i<Employee.size(); i++){
        File.width(20);  File << Employee.at(i).Id;
        File.width(20);  File << Employee.at(i).Name;
        File.width(20);  File << Employee.at(i).Email;
        File.width(20);  File << Employee.at(i).Phone;
        File.width(20);  File << Employee.at(i).Bill;
        if(Employee.at(i).Status == 1) File << "Paid";
        else File << "Unpaid";
        if(i != Employee.size()-1) File << endl;
    }
    File.close();
}



void LoadData(vector<Client> &Employee, int &Count){
    Employee.erase(Employee.begin(), Employee.end());
    fstream File;
    File.open("data.txt", ios::in|ios::out);
    if(File.fail()){
        std::cout << "Failed to open this file" << std::endl;
        return;
    }
    string line1;
    getline(File,line1);
    long long Bill;
    int Id;
    bool Status;
    while(!File.eof()) {
        string Idd ={}, Name={},Email={},temp,Phone={},Bill_tmp={},Status_tmp;
        long long position;
        getline(File,temp);
        for(int i = 0;i<temp.size();i++){           
            if(temp[i]=='\t\t    '&&temp[i+1] !='\t\t    '){
                position = i+1;
                break;
            }
            if(temp[i]!='\t\t    '){
                Idd += temp[i];
            }
        }
        char Idd_tmp[10];
        for(int i = 0;i<Idd.size();i++){
            Idd_tmp[i] = Idd[i];
        }
        Id = atoi(Idd_tmp);
        for(int i = position;i<temp.size();i++){           
            if(temp[i]=='\t\t    '&&temp[i+1] !='\t\t    '){
                position = i+1;
                break;
            }
            if(temp[i]!='\t\t    '){
                Name += temp[i];
            }
        }
        for(int i = position;i<temp.size();i++){           
            if(temp[i]=='\t\t    '&&temp[i+1] !='\t\t    '){
                position = i+1;
                break;
            }
            if(temp[i]!='\t\t    '){
                Email += temp[i];
            }
        }
        for(int i = position;i<temp.size();i++){           
            if(temp[i]=='\t\t    '&&temp[i+1] !='\t\t    '){
                position = i+1;
                break;
            }
            if(temp[i]!='\t\t    '){
                Phone += temp[i];
            }
        }
        for(int i = position;i<temp.size();i++){           
            if(temp[i]=='\t\t    '&&temp[i+1] !='\t\t    '){
                position = i+1;
                break;
            }
            if(temp[i]!='\t\t    '){
                Bill += temp[i];
            }
        }
        char Bill_tmpp[19] = {};
        for(int i = 0;i<Bill_tmp.size();i++){
            Bill_tmpp[i] = Bill_tmp[i];    
        }
        Bill = atoi(Bill_tmpp);
        for(int i = position;i<temp.size();i++){
            if(temp[i]=='\n'||temp[i]=='d'){
                break;
            }
            Status_tmp += temp[i];
        }
        if(Status_tmp[1] == 'P'){
            Status = 1;
        }
        else{
            Status = 0;
        }
        Employee.push_back(Client(Id, Name, Email, Phone, Bill, Status));
    }
    File.width(20);  File << "Id";
    File.width(20);  File << "Name";
    File.width(20);  File << "Email";
    File.width(20);  File << "Phone";
    File.width(20);  File << "Bill";
    File << "Status";
    for(int i=0; i<Employee.size(); i++){
        Employee.at(i).Show();
    }
    cout << endl;
    File.close();
    Count = Employee.at(Employee.size()-1).Id;
    return;
}