#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{	
	string n[3];
	double pg[3], fg[3], ng[3], sg[3], bg[3], bgh[3], bgraw[3], max, csraw[3], qpfraw[3], final[3];
	double q1[3], q2[3], q3[3], q4[3];
	double s1[3], s2[3], s3[3], s4[3], s5[3], s6[3], s7[3], s8[3], s9[3], s10[3], sgr[3], sgraw[3], ngraw[3];
	double qraw[3], q1raw[3], q2raw[3], q3raw[3], q4raw[3], pgraw[3], fgraw[3], finalg[3];
	int a, b, c;
	
	//input grades of students; loops to how many students there are
	cout << "Enter grade information of student: \n";
	for (a = 0; a < 3; a++)
	{ 
		cout << "\n\nEnter name of student: "; cin >> n[a];
	cout << "Enter " << n[a] << "'s quiz grade" << endl;
		cout << setw(10) << "Quiz 1: "; cin >> q1[a];
		cout << setw(10) << "Quiz 2: "; cin >> q2[a];
		cout << setw(10) << "Quiz 3: "; cin >> q3[a];
		cout << setw(10) << "Quiz 4: "; cin >> q4[a];
	cout << "Enter " << n[a] << "'s Preliminary grade: "; cin >> pg[a];
	cout << "Enter " << n[a] << "'s Finals grade: "; cin >> fg[a];
	//class standing
	cout << "Enter " << n[a] << "'s notebook grade: "; cin >> ng[a];
	cout << "Enter " << n[a] << "'s Seatwork grade: " << endl;
		cout << setw(10) << "SW 1: "; cin >> s1[a];
		cout << setw(10) << "SW 2: "; cin >> s2[a];
		cout << setw(10) << "SW 3: "; cin >> s3[a];
		cout << setw(10) << "SW 4: "; cin >> s4[a];
		cout << setw(10) << "SW 5: "; cin >> s5[a];
		cout << setw(10) << "SW 6: "; cin >> s6[a];
		cout << setw(10) << "SW 7: "; cin >> s7[a];
		cout << setw(10) << "SW 8: "; cin >> s8[a];
		cout << setw(10) << "SW 9: "; cin >> s9[a];
		cout << setw(10) << "SW 10: "; cin >> s10[a];		
	cout << "Enter " << n[a] << "'s Boardwork/recitation grade: "; cin >> bg[a];
	}
	
	cout << endl;
	
	//quizzes, prelims, finals
	for (a = 0; a < 3; a++)
	{
	q1raw[a] = q1[a] * 0.15;
	q2raw[a] = q2[a] * 0.15;
	q3raw[a] = q3[a] * 0.15;
	q4raw[a] = q4[a] * 0.15;
	qraw[a] = q1raw[a] + q2raw[a] + q3raw[a] + q4raw[a];
	pgraw[a] = pg[a] * 0.2;
	fgraw[a] = fg[a] * 0.2;
	qpfraw[a] = qraw[a] + pgraw[a] + fgraw[a];}
	
	//class standing grade computation (notebook, sw, boardwork)
	for (a = 0; a < 3; a++)
	{
	ngraw[a] = ng[a] * 0.01;
	sgr[a] = (s1[a] + s2[a] + s3[a] + s4[a] + s5[a] + s6[a] + s7[a] + s8[a] + s9[a] + s10[a])/10;
	sgraw[a] = sgr[a] * 0.2;}
	
	//boardwork computation
	max = bg[0];
	for (a = 0; a < 3; a++)
		{
			if (max < bg[a])
			max = bg[a];
		}
	
	for (a = 0; a < 3; a++)
	{
		if(max)
		{
			bgraw[a] = 2;
		}
		if (bg[a] < max)
		{
			bgraw[a] = (bg[a]/max) * 2;
		}
	}
	
	//final, class standing grade
	for (a = 0; a < 3; a++)
	{
	csraw[a] = ngraw[a] + sgraw[a] + bgraw[a];}
	
	//final grade to be transmuted
	for (a = 0; a < 3; a++)
	{
	final[a] = qpfraw[a] + csraw[a];}
	
		
	cout << "Class record\n";
	for (a = 0; a < 3; a++)
	{//final raw grade and transmuted grade. also shows if passed or failed
		if (final[a] >= 95.57 && final[a] <= 105)
		{
			cout << n[a] << " - " << "Final Raw grade: " << final[a] << setw(20) << "Transmuted grade: " << "1.00" << " - " << "Passed" << endl;
		}	
		else if (final[a] >= 91.12 && final[a] <= 95.56)
		{
			cout << n[a] << " - " << "Final Raw grade: " << final[a] << setw(20) << "Transmuted grade: " << "1.25" << " - " << "Passed" << endl;
		}
		else if (final[a] >= 86.68 && final[a] <= 91.11)
		{
			cout << n[a] << " - " << "Final Raw grade: " << final[a] << setw(20) << "Transmuted grade: " << "1.50" << " - " << "Passed" << endl;
		}
		else if (final[a] >= 82.23 && final[a] <= 86.67)
		{
			cout << n[a] << " - " << "Final Raw grade: " << final[a] << setw(20) << "Transmuted grade: " << "1.75" << " - " << "Passed" << endl;
		}
		else if (final[a] >= 77.79 && final[a] <= 82.22)
		{
			cout << n[a] << " - " << "Final Raw grade: " << final[a] << setw(20) << "Transmuted grade: " << "2.00" << " - " << "Passed" << endl;
		}
		else if (final[a] >= 73.34 && final[a] <= 77.78)
		{
			cout << n[a] << " - " << "Final Raw grade: " << final[a] << setw(20) << "Transmuted grade: " << "2.25" << " - " << "Passed" << endl;
		}
		else if (final[a] >= 68.90 && final[a] <= 73.33)
		{
			cout << n[a] << " - " << "Final Raw grade: " << final[a] << setw(20) << "Transmuted grade: " << "2.50" << " - " << "Passed" << endl;
		}
		else if (final[a] >= 64.45 && final[a] <= 68.89)
		{
			cout << n[a] << " - " << "Final Raw grade: " << final[a] << setw(20) << "Transmuted grade: " << "2.75" << " - " << "Passed" << endl;
		}
		else if (final[a] >= 60 && final[a] <= 64.44)
		{
			cout << n[a] << " - " << "Final Raw grade: " << final[a] << setw(20) << "Transmuted grade: " << "3.00" << " - " << "Passed" << endl;
		}
		else if (final[a] >= 0 && final[a] <= 59.99)
		{
			cout << n[a] << " - " << "Final Raw grade: " << final[a] << setw(20) << "Transmuted grade: " << "5.00" << " - " << "Failed" << endl;
		}
	 }
	 
	//bubble sort grades
	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 3 - b - 1; b++)
	 		{
	 			if (final[b] < final[b+1])
	 			{
	 				c = final[b];
	 				final[b] = final[b+1];
					final[b+1] = c;				 
				}
			}
	}
	//top 10 students
	cout << "\n\nTop 10 students: " << endl;
	for (a = 0; a < 3; a++)
	{
		cout << a + 1 << ". " << n[a] << " - " << final[a] << endl;
	}
	return 0;
}
