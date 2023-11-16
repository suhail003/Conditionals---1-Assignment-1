#include<iostream>
using namespace std;
int main() {
int s1,s2,s3;
cout << "Please Enter Three Sides of a Triangle = ";
cin >>s1>>s2>>s3;
if (s1 == 2 && s2 == s3) {
cout << "This is an Equilateral Triangle";
} else if (s1 == s2 || s2 == s3 || s1 == s3) {
cout << "This is an Isosceles Triangle";
} else
cout << "This is a Scalene Triangle";
return 0;
}
