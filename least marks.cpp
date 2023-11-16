#include <iostream>
using namespace std;
int main() {
cout << "Enter marks of the students : ";
int a, b, c;
cin >> a >> b >> c;
if (a <= b && a <= c)
cout << "A scores  least marks";
else if (b <= a && b <= c)
cout << "B scores least marks";
else
cout << "C scores least marks";
return 0;
}

