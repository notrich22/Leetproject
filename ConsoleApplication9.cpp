#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout << "Enter adress: ";
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '.') {
			s.insert(i, "[");
			i++;
		}
		
		if(i != 0)
			if (s[i-1] == '.') {
			s.insert(i, "]");
			i++;
		}
	}
	cout << s;
}