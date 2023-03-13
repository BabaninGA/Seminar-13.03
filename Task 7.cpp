#include <iostream>
using namespace std;
#include <string> 

int main() {
	string s = "";
	cout << "Enter words: ";
	getline(cin, s);
	int p = s.find(" ");
	int l = p;
	int pr = 0;
	int lc = 0;
	int pb = 0;
	while (s.find(" ", p + 1) != -1) {
		pb = p;
		p = s.find(" ", p + 1);
		lc = p - pb - 1;
		if (lc > l){
			l = lc;
			pr = pb + 1;
		}
	}
	if (s.size() - p - 1 > l) {
		l = s.size() - p - 1;
		pr = p + 1;
	}
	cout << "The longest word: " << s.substr(pr, l);
	return 0;
}