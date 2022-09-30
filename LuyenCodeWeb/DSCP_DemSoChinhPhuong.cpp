#include <bits/stdc++.h>

int main()
{
    long long a, b;
    std::cin >> a >> b;
    std::cout << floor(sqrt(b)) - ceil(sqrt(a)) + 1;
    // ceil làm tròn số nguyên gần nhất
    // floor làm tròn xuống bội số gần nhất
    return 0;
}