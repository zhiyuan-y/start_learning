#include<iostream>
#include<math.h>
const double foot2metre = 0.305,pound2Kg=0.45;
using namespace std;
void Index(double,double);
int main()
{
	double weight, hight;
	cout << "please input your hight\n";
	cout << "how many foots:__\b\b";
	double foots, inch;
	cin >> foots;
	cout << "how many inchs:__\b\b";
	cin >> inch;
	cout << "please input your weight (pound):___\b\b\b";
	cin >> weight;
	double hightInFoot;
	hightInFoot = foots + inch / 12;
	Index(hightInFoot, weight);
}
void Index(double h,double w)
{
	double hightInFoot,hightInMetre, weightInKg;
	hightInFoot = h;
	hightInMetre = hightInFoot * foot2metre;
	cout << "\nyour hight is:" << hightInFoot << " foots\t or " << hightInMetre << " meter" << endl;
	double BMI;
	weightInKg = w * pound2Kg;
	BMI = weightInKg / pow(hightInMetre, 2); //can't use h^2 to replace pow()
	cout << "\nthe BMI is:" << BMI << endl;
}
