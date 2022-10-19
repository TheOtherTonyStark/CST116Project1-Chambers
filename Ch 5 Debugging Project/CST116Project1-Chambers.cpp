
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;

float n1, n2, n3, n4, I1, I2, I3, I4, g1, g2, g3, g4;

int main()
{
		cout << "Please enter a name: ";
		cin >> n1;
		cout << "Please enter another name: ";
		cin >> n2;
		cout << "Please enter another name: ";
		cin >> n3;
		cout << "Please enter a final name: ";
		cin >> n4;
		cout << "Please enter income level for each name : ";
		cin >> I1;
		cin >> I2;
		cin >> I3;
		cin >> I4;
		cout << "Please enter GPA for each name: ";
		cin >> g1;
		cin >> g2;
		cin >> g3;
		cin >> g4;
		cout << n1 << " has an income level of " << I1 << " and a GPA of " << g1;
		cout << n2 << " has an income level of " << I2 << " and a GPA of " << g2;
		cout << n3 << " has an income level of " << I3 << " and a GPA of " << g3;
		cout << n4 << " has an income level of " << I4 << " and a GPA of " << g4;
}