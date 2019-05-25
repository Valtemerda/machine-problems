//Machine Problem 2 ~~~Mabeza, Bayog, De Leon~~~
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float a, b, c;
	float angle1, angle1D, angle2, angle2D, angle3, angle3D, cosA, cosB;
	float perimeter, area, base, height;
	float hypotenuse, side, max;
	float opp, adj, tan, apothem, n, circumcenter;
	
	//user inputs the sides
	cout << "This program will compute the following based on the sides of the triangles\n";
	cout << "This will show all the:\n";
	cout << "\n1. Interior angles \n" << "2. Classify whether it is scalene, isosceles, or equilateral\n" << "3. Determine the area and perimeter\n" << "4. Classify whether it is an acute triangle, right triangle, or obtuse triangle\n" << "5. Compute for length of apothem and circumcenter.\n\n";
	cout << "Enter first side: "; cin >> a;
	cout << "Enter second side: "; cin >> b;
	cout << "Enter third side: "; cin >> c;
	
	//~~~Created By Joshua Mabeza~~~
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
	
	//outputs the interior angles 
	cout << "\nFirst Angle Is: " << setw(20) << "Second Angle Is: " << setw(20) << "Third Angle Is: " << endl;
	cout << angle1 << " Radians" << setw(11) << angle2 << " Radians" << setw(13) << angle3D << " Radians" << endl;
	cout << angle1D << " Degrees" << setw(11) << angle2D << " Degrees" << setw(13) << angle3 << " Degrees" << "\n\n";
	
	//classification of triangle based on given side
	if (a == c && b == a && b == c)
	{
		cout << "The Triangle based on the sides given by the user is: Equilateral\n";
	}
	else if (a == c || a == b || b == c)
	{
		cout << "The Triangle based on the sides given by the user is: Isosceles\n";
	}
	else if (a != c && a != b && b != c)
	{
		cout << "The Triangle based on the sides given by the user is: Scalene\n";
	}
	
	// to solve for the perimeter and area
	perimeter = a + b + c;
	base = c / 2;
	height = sqrt(abs((pow(base, 2) - pow(a, 2)))); 
	area = (base * height) / 2;
	cout << "The perimeter of the triangle is: " << perimeter << endl;
	cout << "The area of the triangle is: " << height;
	
	//just to determine which side is the hypotenuse
	if (a > b && a > c)
	{
		max = a;
		hypotenuse = pow(max, 2);
		side = pow(b, 2) + pow(c, 2);
	}
	else if (b > c && b > a)
	{
		max = b;
		hypotenuse = pow(max, 2);
		side = pow(c, 2) + pow(a, 2);
	}
	else if (c > a && c > b)
	{
		max = c;
		hypotenuse = pow(c, 2);
		side = pow(a, 2) + pow(b, 2);
	}
	else if (a == b && a == c && b == c)
	{
		max = a;
		hypotenuse = pow(max, 2);
		side = pow(b, 2) + pow(c, 2);
	}
	
	cout << endl;
	// to classify whether it is an obtuse, acute, or a right triangle
	if (hypotenuse > side)
	{
		cout << "The triangle is an: obtuse triangle";
	}
	else if (hypotenuse < side)
	{
		cout << "The triangle is an: acute triangle";
	}
	else if (hypotenuse == side)
	{
		cout << "The triangle is a: right triangle";
	}
	
	//created by Bayog, De Leon
	opp = a;
	adj = b;
    
    tan = opp/adj; 
    tan = pow(tan,-1.0); 
    apothem = a/(3.46);
    circumcenter = (a*b*c)/sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)); 
    
    cout << "\n\nThe apothem is: " << apothem << endl;
    cout << "The circumcenter is: "<< circumcenter << endl;
	
	return 0;
}
