#include <iostream>
#include <string>
#include <fstream>  // (1)

using namespace std;

int main()
{
	fstream f;                    // (2)
	f.open("input.txt", ios::in); // (2)

	string data;                  // (3)
    string line;
	while(!f.eof()){  // f.eof() kiem tra xem da ket thuc file chua
        getline(f,line);
        data += line;
    }

	f.close();                    // (4)

	cout << data;
}
