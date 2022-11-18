#include<bits/stdc++.h>
#include "Employee.h"
#define ll long long


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
        while(1){
            cin >> A_Phone; cout << endl;
            if(A_Phone == 10) break;
            cout << "Your phone is wrong! Please type again" << endl;
        }
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
        Load_Data(Employee, count);
        cout << "Do you want to add more employee" << endl << "1.Yes" << endl << "2.No" << endl;
        int choice; cin >> choice;
        if(choice != 1) break;
    }
}

void SortData(vector<Client> Employee){
    cout << "What do you want to sort?" << endl << "1.Name" << endl << "2.Return" << endl;
    int choice1; cin >> choice1;
    string S_Name, S_Email, S_phone;
    ll bill;
    bool S_Status_tmp;
    switch (choice1)
    {
        case 1:
            int choice11;
            cout << "What type of sort do you want" << endl << "1.Small To Big" << endl "2.Big To Small" << endl;
            cin >> choice11;
            switch (choice11)
            {
                case 1:
                    Sort_By_Bill(Employee);
                    break;
                default:
                    Sort_By_BillRV(Employee);
                    break;
            }
        default:
            break;
    }
}

void ChangeData(vector<Client> &Employee){
    cout << "You want to change: " <<< endl;
    int tmp; cin >> tmp;
    int choice2;
    while(1){
        cout << "Chose type you want to change" << "1.Name" << endl << "2.Email" << endl << "3.Phone" << endl << "4.Bill" << endl << "5.Status" << endl << "6.Return" << endl;
        cin >> choice2;
        switch (choice2){
            case 1: 
                ChangeName(Employee, tmp);
                break;
            case 2:
                ChangeEmail(Employee, tmp);
                break;
            case 3:
                ChangePhone(Employee, tmp);
                break;
            case 4: 
                ChangeBill(Employee, tmp);
                break;
            case 5:
                ChangeStatus(Employee, tmp);
                break;
            default:    
                return;
        }
    }
}

void FindData(vector<Client> Employee){
    while(1){
        cout << "What type of data do you want to find" << endl << "1.Name" << endl << "2.Email" << endl << "3.Phone" << endl << "4.Bill" << endl << "5.Status" << endl << "6.Return" << endl;
        int choice3; cin >> choice3;
        string F_D_Name, F_D_Email, F_D_Phone;
        ll F_D_Bill;
        bool F_D_Status;
        switch (choice3){
            case 1:
                FindName(Employee);
                break;
            case 2:
                FindEmail(Employee);
                break;
            case 3:
                FindPhone(Employee);
                break;
            case 4:
                FindBill(Employee);
                break;
            case 5:
                FindStatus(Employee);
                break;
            default:
                return;
        }
    }
}

void EraseData(vector<CLient> &Employee){
    while(1){
        int choice4; 
        cout << "What type of erase do want" << endl << "1.Id" << endl << "2.Status" << endl << "3.Return" << endl;
        cin >> choice4;
        switch (choice4){
            case 1:
                EraseId(Employee);
                break;
            case 2:
                EraseStatus(Employee);
                break;
            default:
                return;
        }
    }
}

void ChangeId(vector<Client> &Employee, int &Count){
    int Id_tmp;
    cout << "Do you want to change Id: " << endl << "1.Yes" << endl << "2.No" << endl;
    cin >> Id_tmp;
    while(Id_tmp != 1) return;
    Count = 0;
    for(int i=0; i<Employee.size(); i++){
        Count++;
        Employee.at(i).Id = Count;
    }
    ofstream File;
    File.open("data.txt", ios::out);
    File.width(20);  File << "Id";
    File.width(20);  File << "Name";
    File.width(20);  File << "Email";
    File.width(20);  File << "Phone";
    File.width(20);  File << "Bill";
    File << "Status";
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