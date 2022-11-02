#include <bits/stdc++.h>
using namespace std;

int a[9][9];
bool check(int row, int col, int k){
    for (int i = 0; i < 9; i++){
        if (a[row][i] == k) return false;
        if (a[i][col] == k) return false;
        if (a[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == k) return false;
    }
    return true;
}
void sudoku(){
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            if (a[i][j] == 0){
                for (int k = 1; k <= 9; k++){
                    if (check(i, j, k)){
                        a[i][j] = k;
                        sudoku();
                        a[i][j] = 0;
                    }
                }
                return;
            }
        }
    }
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cin >> a[i][j];
        }
    }
    sudoku();
    return 0;
}