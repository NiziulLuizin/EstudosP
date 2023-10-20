/*
	[ description of the third review exercise ] :
		- Given a constant (wl) indicating the workload of a subject (e.g. 60H),
		the final average (fa), the grade of the 4th assessment (g4) and the number
		of absences (ab) of a student, construct a logical expression to say:

		a - when the student has passed;
		b - when the student has failed.

	[ output ] :
		```v1
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			constants:
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			value_wl:
					'60'
			value_fa:
					'5.4'
			value_g4:
					'7.3'
			value_ab:
					'7'


			-

			] passed!

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```

		```v2
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			constants:
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			value_wl:
					'60'
			value_fa:
					'5.4'
			value_g4:
					'7.3'
			value_ab:
					'10'


			-

			] failed!

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
	auto const value_wl
		= 60;

	auto const value_fa
		= 5.4;

	auto const value_g4
		= 7.3;

	auto const value_ab
		= 10;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "constants:" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "value_wl: \n\t\'" << value_wl << "\'" << endl;
	cout << "value_fa: \n\t\'" << value_fa << "\'" << endl;
	cout << "value_g4: \n\t\'" << value_g4 << "\'" << endl;
	cout << "value_ab: \n\t\'" << value_ab << "\'" << endl;

	cout << endl;

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	if (value_wl * 0.15f > value_ab
		&&
		(value_fa + value_g4) / 2 >= 6.0)
	{
		cout << "] passed!" << endl;
	}
	else
	{
		cout << "] failed!" << endl;
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
	cin
		.get();
}