// // TH với 2 xâu kí tự
// int main(){
//     char s1[1005], s2[1005];
//     cin >> s1 >> s2;
//     int HieuMaAscii = strncmp(s1,s2,1);
//     if(HieuMaAscii == 0) cout << "Xau s1 bang xau s2";
//     else if(HieuMaAscii > 0) cout << "Xau s1 lon hon xau s2";
//     else Cout << "Xau s1 nho hon xau s2"; 
//     return 0;
// }

// // TH với 2 số thực 
// int main(){

// }
#include<bits/stdc++.h>
using namespace std;
void exam(int i, int* p, int& r){
    p = &r;
    r++;
    *p = i;
}
int main(){
    int arr[3] {20,22};
    int *q {arr};
    exam(arr[2], q,arr[1]);
    cout << *q << " " << arr[0] << " " << arr[1] << " " << arr[2];
}

// #include <iostream>
// #include<stdio.h>
// using namespace std;

// #define N 9 //defining grid dimension, that is 9 by 9

// int sudokuboard[N][N] = 
// {
//  {0, 0, 6, 5, 0, 8, 4, 0, 0},
//  {5, 2, 0, 0, 0, 1, 0, 0, 0},
//  {0, 7, 8, 0, 0, 0, 0, 0, 1},
//  {0, 0, 4, 0, 1, 0, 0, 8, 0},
//  {9, 0, 0, 8, 2, 3, 0, 0, 5},
//  {0, 5, 0, 0, 9, 0, 6, 0, 0},
//  {1, 3, 0, 0, 0, 0, 2, 5, 0},
//  {0, 0, 0, 0, 0, 0, 0, 7, 4},
//  {0, 0, 5, 2, 0, 6, 3, 0, 0}
// };

// bool checkColumn(int c, int value)
// { 
//  for (int r = 0; r < N; r++)
//   if (sudokuboard[r] == value)
//    return true;
//  return false;
// }

// bool checkRow(int r, int value)
// { 
// for (int c = 0; c < N; c++)
//  if (sudokuboard[r] == value)
//   return true;
//  return false;
// }

// bool checkBox(int initial_row int initial_column, int value)
// {
// for (int r = 0; r < 3; r++)
//  for (int c = 0; c < 3; c++)
//   if (sudokuboard[r+initial_row] == value)
//    return true;
//  return false;
// }

// void showGame()
// { 
// for (int r = 0; r < N; r++){
//  for (int c = 0; c < N; c++)
//  {
//   if(c == 3 || c == 6)
//    cout << " | ";
//   cout << sudokuboard[r] <<" ";
//  }
//  if(r == 2 || r == 5)
//  {
//   cout << endl;
//   for(int k = 0; k<N; k++)
//    cout << "---";
//  }
//  cout << endl;
// }
// }


// bool findBox(int &r, int &c)
// { 
//  for (r = 0; r < N; r++)
//   for (c = 0; c < N; c++)
//    if (sudokuboard[r] == 0) 
//     return true;
//  return false;
// }

// bool canEnter(int r, int c, int value)
// {
//  return !checkRow(r, value) && !checkColumn(c, value) && !checkBox(r-r%3,c-c%3,value);
// }

// bool finalSolution(){
// int r, c;
// if (!findBox(r, c))
//  return true; 
// for (int val = 1; val <= 9; val++)
//  { 
//   if (canEnter(r, c, val))
//   { 
//    sudokuboard[r] = val;
//    if (finalSolution()) 
//     return true;
//    sudokuboard[r] = 0; 
//   }
//  }
// return false;
// }

// int main(){
// if (finalSolution() == true)
//  showGame();
// else
//  cout << "This game can not be solved";
// }





// // /*
// //  * sudoku.c
// //  *
// //  *  Created on: May 29, 2015
// //  *      Author: hunglv
// //  */
// // #include<time.h>
// // #include<stdio.h>
// // #include<string.h>

// // void main(void){
// // 		int S[9][9] =      {{0,3,1,2,0,0,0,7,9},
// // 							{5,4,0,0,0,9,1,0,0},
// // 							{8,0,0,0,0,7,0,0,5},
// // 							{2,6,8,0,0,1,5,0,0},
// // 						  	{1,0,0,0,0,0,0,0,8},
// // 							{0,0,9,4,0,0,7,1,6},
// // 							{9,0,0,8,0,0,0,0,2},
// // 							{0,0,3,5,0,0,0,6,7},
// // 							{7,2,0,0,0,4,3,8,0}};
// // 		solve_sudoku(S,0,0);
// // }

// // void solve_sudoku(int S[][9], int x, int y){
// // 	if(y == 9){
// // 		if(x == 8){
// // 			printSolution(S);
// // 			exit(0);
// // 		} else {
// // 			solve_sudoku(S, x+1,0);
// // 		}
// // 	} else if(S[x][y] == 0){
// // 		int k = 0;
// // 		for (k = 1; k <=9; k++){
// // 			if(feasible(S,x,y,k)){
// // 				S[x][y] = k;
// // 				solve_sudoku(S, x, y+1);
// // 				S[x][y] = 0;
// // 			}
// // 		}
// // 	} else {
// // 		solve_sudoku(S,x,y+1);
// // 	}
// // }


// // int feasible(int S[][9], int x, int y, int k){
// // 	int i = 0, j = 0;
// // 	for(i = 0; i <9 ; i++){
// // 		if(S[x][i] == k) return 0;
// // 	}
// // 	for(i = 0; i <9 ; i++){
// // 			if(S[i][y] == k) return 0;
// // 		}
// // 	int a = x/3, b = y/3;
// // 	for(i = 3*a; i < 3*a+3; i++){
// // 		for(j = 3*b; j < 3*b+3; j++){
// // 			if(S[i][j] == k) return 0;
// // 		}
// // 	}
// // 	return 1;

// // }
// // void printSolution(int S[][9]){
// // 	int i = 0, j = 0;
// // 	for(i = 0; i <  9; i++){
// // 		for(j = 0; j <  9; j++){
// // 			printf("%d   ",S[i][j]);
// // 		}
// // 		printf("\n");
// // 	}
// // }
