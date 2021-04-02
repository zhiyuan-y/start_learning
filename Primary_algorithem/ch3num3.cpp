#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter a latitude in degrees,minutes,and seconds:\n";
	cout << "First,entre the degrees:";
	double degrees, minutes, seconds;
	cin >> degrees;
	cout << "Next,entre the minutes of arc:";
	cin >> minutes;
	cout << "Finally,entre the seconds of arc:";
	cin >> seconds;
	cout <<"\n"<<degrees << " " << "degrees, "
		<< minutes << " " << "minutes, "
		<< seconds << " " << "seconds, "
		<< "= " << degrees + minutes / 60 + seconds / 3600<<" degrees\n\n";
	return 0;
}