#include <iostream>
using namespace std;
float ma_tran[100][100] ;
int so_cot,so_hang;
int main(){

    cout<<"nhap so cot: ";
    cin>>so_cot;
    cout<<"nhap so hang: ";
    cin>>so_hang;
    for(int i = 0;i<so_hang;i++){
        cout<<"nhap hang thu"<<i+1<<endl;
        for(int j=0;j<so_cot;j++){
            cin>>ma_tran[i][j];
        }
    }
    // can nhap cot can tim
    int a;
    float max;
    cout<<"ban can tim so lon nhat cua cot: ";
    cin>>a;
    max = ma_tran[0][a-1];
    for(int i=1;i<so_hang;i++){
        if(max<ma_tran[i][a-1]){
            max=ma_tran[i][a-1];
        }
    }
    cout<<"so lon nhat la: "<<max;
    return 0;
}