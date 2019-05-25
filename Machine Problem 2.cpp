//Machine Problem 2 Group 4
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float a, b, c;
	float angle1, angle1D, angle2, angle2D, angle3, angle3D, cosA, cosB;
	
	//user inputs the sides
	cout << "Enter first side: "; cin >> a;
	cout << "Enter second side: "; cin >> b;
	cout << "Enter third side: "; cin >> c;
	
	//first angle
	cout << setprecision(2) << fixed;
	cosA = ((pow(b, 2) + pow(c, 2)) - pow(a, 2)) / (2*(b*c));
	angle1 = acos(cosA);
	angle1D = (angle1 * 180) / 3.1415;
	
	//second angle
	cosB = ((pow(c, 2) + pow(a, 2)) - pow(b, 2)) / (2*(c*a));
	angle2 = acos(cosB);
	angle2D = (angle2 * 180) / 3.1415;
	
	//third angle of given sides
	angle3 = 180 - angle1D - angle2D;
	angle3D = angle3 * (3.1415/180);
	
	cout << "\nFirst Angle Is: " << setw(20) << "Second Angle Is: " << setw(20) << "Third Angle Is: " << endl;
	cout << angle1 << " Radians" << setw(11) << angle2 << " Radians" << setw(13) << angle3D << " Radians" << endl;
	cout << angle1D << " Degrees" << setw(11) << angle2D << " Degrees" << setw(13) << angle3 << " Degrees";
	
	
	return 0;
}
