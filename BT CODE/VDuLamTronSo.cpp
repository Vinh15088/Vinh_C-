#include <iostream>
#include <math.h>
using namespace std;

/*Tạo hàm làm tròn n chữ số trong C++*/
double take_decimal_number(double num, int n){
    int base = pow(10,n);
    double result = round(num * base) /base; 

  
    return result;    
}
int main()
{
    double num = 124.4677;

    cout << take_decimal_number(num, 2) <<endl;
    cout << take_decimal_number(num, 3) <<endl;
    return 0;
}
