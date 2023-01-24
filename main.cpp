#include<iostream>
#include<math.h>
#include<string>
using namespace std;


float blackhole(double mass) {
	float c = 2.998e8;
	float G = 6.67e-11;

	float R = ((2*G)* mass) / pow(c, 2);
	return R;


}


int main() {
	double MASS;
	char input;
	cout << "press a letter to start except q" << endl;
	cin >> input;
	while (input != 'q') {
		cout << "Enter mass in Kilograms:" << endl;
		cin >> MASS;
		cout <<"Radius is " << blackhole(MASS) << " meters " << endl;
		cout << "press any letter to continue but if you want to quit press q" << endl;
		cin >> input;
	}

}
