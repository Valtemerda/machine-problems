#include <iostream>
using namespace std;

int main()
{	
	char n[30];
	double pg, fg, ng, sg, bg, bgh, bgraw, csraw, qpfraw, final;
	double q1, q2, q3, q4;
	double s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, sgr, sgraw, ngraw;
	double qraw, q1raw, q2raw, q3raw, q4raw, pgraw, fgraw, finalg;
	int num, a, b, c;
	
	//to determine number of students
	cout << "Enter number of students: "; cin >> num;
	//input grades of students; loops to how many students there are
	for (a = 1; a <= num; a++)
	{
		cout << "\nEnter grade information of student: \n"; 
		cout << "Enter name of student: "; cin >> n;
	cout << "\nEnter " << n << "'s quiz grade" << endl;
		cout << "Quiz 1: "; cin >> q1;
		cout << "Quiz 2: "; cin >> q2;
		cout << "Quiz 3: "; cin >> q3;
		cout << "Quiz 4: "; cin >> q4;
	cout << "Enter " << n << "'s Preliminary grade: "; cin >> pg;
	cout << "Enter " << n << "'s Finals grade: "; cin >> fg;
	//class standing
	cout << "Enter " << n << "'s notebook grade: "; cin >> ng;
	cout << "Enter " << n << "'s Seatwork grade: " << endl;
		cout << "SW 1: "; cin >> s1;
		cout << "SW 2: "; cin >> s2;
		cout << "SW 3: "; cin >> s3;
		cout << "SW 4: "; cin >> s4;
		cout << "SW 5: "; cin >> s5;
		cout << "SW 6: "; cin >> s6;
		cout << "SW 7: "; cin >> s7;
		cout << "SW 8: "; cin >> s8;
		cout << "SW 9: "; cin >> s9;
		cout << "SW 10: "; cin >> s10;		
	cout << "Enter " << n << "'s Boardwork/recitation grade: "; cin >> bg;
	}
	
	cout << endl;
	
	//quizzes, prelims, finals
	q1raw = q1 * 0.15;
	q2raw = q2 * 0.15;
	q3raw = q3 * 0.15;
	q4raw = q4 * 0.15;
	qraw = q1raw + q2raw + q3raw + q4raw;
	pgraw = pg * 0.2;
	fgraw = fg * 0.2;
	qpfraw = qraw + pgraw + fgraw;
	
	//class standing grades
	ngraw = ng * 0.01;
	sgr = (s1 + s2 + s3 + s4 + s5 + s6 + s7 + s8 + s9 + s10)/10;
	sgraw = sgr * 0.02;
	
	//bubble sort bg grades
	
	//algorithm for lower bg grade
	
	//class standing grade
	csraw = ngraw + sgraw + bgraw;
	
	//final grade to be transmuted
	final = qpfraw + csraw;
	
		
	cout << "Class record\n";
	for (a = 1; a <= num; a++)
	{//transmuted grade when displayed, also shows if passed or failed
		if (final >= 95.57 && final <= 100)
		{
			cout << n << " - " << "1.00" << " - " << "Passed" << endl;
		}	
		else if (final >= 91.12 && final <= 95.56)
		{
			cout << n << " - " << "1.25" << " - " << "Passed" << endl;
		}
		else if (final >= 86.68 && final <= 91.11)
		{
			cout << n << " - " << "1.50" << " - " << "Passed" << endl;
		}
		else if (final >= 82.23 && final <= 86.67)
		{
			cout << n << " - " << "1.75" << " - " << "Passed" << endl;
		}
		else if (final >= 77.79 && final <= 82.22)
		{
			cout << n << " - " << "2.00" << " - " << "Passed" << endl;;
		}
		else if (final >= 73.34 && final <= 77.78)
		{
			cout << n << " - " << "2.25" << " - " << "Passed" << endl;
		}
		else if (final >= 68.90 && final <= 73.33)
		{
			cout << n << " - " << "2.50" << " - " << "Passed" << endl;
		}
		else if (final >= 64.45 && final <= 68.89)
		{
			cout << n << " - " << "2.75" << " - " << "Passed" << endl;
		}
		else if (final >= 60 && final <= 64.44)
		{
			cout << n << " - " << "3.00" << " - " << "Passed" << endl;
		}
		else if (final >= 0 && final <= 59.99)
		{
			cout << n << " - " << "5.00" << " - " << "Failed" << endl;
		}
		
	 } 
	return 0;
}
