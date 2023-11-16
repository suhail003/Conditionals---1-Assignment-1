#include <iostream>
using namespace std;
int main() {
int ra;
cout << "Enter the radius : ";
cin >> ra;
float area = 3.14 * ra * ra;
float circumference = 2 * 3.14 * ra;
if (area > circumference) cout << "Area is greater than circumference." << endl;
else cout << "Circumference is greater than area." << endl;
return 0;
}
