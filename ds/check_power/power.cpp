#include <iostream>
using namespace std;

int main() {
	int d, s, b;
	float bw, t;
	cout << "Calculate You Power Score" << endl;
	cout << "Body Weight: ";
	cin >> bw;
	cout << "Dead Lift: ";
	cin >> d;
	cout << "Squat: ";
	cin >> s;
	cout << "Bench: ";
	cin >> b;
	t = (d + s + b)/bw;
	cout << "Score: " << t << endl;
	cout << endl << "Good Bye ... !" << endl;
	return 0;
}

