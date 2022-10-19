
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

float i1, i2, i3, i4, g1, g2, g3, g4;
string n1, n2, n3, n4;

int main()
{
		cout << "Please enter 4 name: " << endl;
		cin >> n1;
		cin >> n2;
		cin >> n3;
		cin >> n4;
		cout << "Please enter income level for each name : " << endl;
		cin >> i1;
		cin >> i2;
		cin >> i3;
		cin >> i4;
		cout << "Please enter GPA for each name: " << endl;
		cin >> g1;
		cin >> g2;
		cin >> g3;
		cin >> g4;
		cout << n1 << " has an income level of " << i1 << " and a GPA of " << g1 << endl;
		cout << n2 << " has an income level of " << i2 << " and a GPA of " << g2 << endl;
		cout << n3 << " has an income level of " << i3 << " and a GPA of " << g3 << endl;
		cout << n4 << " has an income level of " << i4 << " and a GPA of " << g4 << endl;
}