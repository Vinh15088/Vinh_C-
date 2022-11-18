#include<bits/stdc++.h>
#include "Employee.h"
using namespace std;

vector<Client> Employee;


int main(){
    int count = 0;
    LoadData(Employee, count);
    int choice;
    while(1){
        cout << "What do you want to do?" << endl;
        cout << "1.Review Data" << endl;
        cout << "2.Add more Data" << endl;
        cout << "3.Sort Data" << endl;
        cout << "4.Change Data" << endl;
        cout << "5.Find Data" << endl;
        cout << "6.Erase Data" << endl;
        cout << "7.Reload Id as series number" << endl;
        cout << "8.Exit" << endl;
        cin >> choice;
        switch(choice){
            case 1: 
                LoadData(Employee, count);
                break;
            case 2:
                AddData(Employee, count);
                break;
            case 3:
                SortData(Employee);
                break;
            case 4:
                ChangeName(Employee);
                LoadData(Employee, count);
                break;
            case 5: 
                FindData(Employee);
                break;
            case 6:
                EraseData(Employee);
                LoadData(Employee, count);
                break;
            case 7:
                ChangeId(Employee, count);
                LoadData(Employee, count);
                break;
            default:
                cout << "Input any thing to exit" << endl;
                cin >> choice;
                return 0;
        }
    }
}