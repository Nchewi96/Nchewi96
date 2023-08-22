#include<iostream>
#include<cmath>
using namespace std;
int main() {
int a=1, b=2, c=1;
float discriminant, realPart, imaginaryPart, x1, x2;
cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
if (a == 0) {
 cout << "This is not a quadratic equation";
}else {
 discriminant = b*b - 4*a*c; 
//first the discriminant is calculated. If it is greater than 0, then both the roots are real and different.
 if (discriminant > 0) {
x1 = (-b + sqrt(discriminant)) / (2*a);
x2 = (-b - sqrt(discriminant)) / (2*a);
cout << "Roots are real and different." << endl;
cout << "Root 1 = " << x1 << endl;
cout << "Root 2 = " << x2 << endl;
//If the discriminant is equal to 0, then both the roots are real and same.
 } else if (discriminant == 0) {
cout << "Roots are real and same." << endl;
x1 = (-b + sqrt(discriminant)) / (2*a);
cout << "Root 1 = Root 2 =" << x1 << endl;
//If the discriminant is less than 0, then both the roots are complex and different.
 }else {
realPart = (float) -b/(2*a);
imaginaryPart =sqrt(-discriminant)/(2*a);
cout << "Roots are complex and different." << endl;
cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" <<endl;
cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" <<endl;
 }
}
return 0;
}
