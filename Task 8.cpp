#include <iostream>
using namespace std;
#include <string> 

int main() {
	string s = "";
	string sold = "";
	string snew = "";
	cout << "Enter string: ";
	getline(cin, s);
	cout << "Enter substring which you want to delete: ";
	getline(cin, sold);
	cout << "Enter substring which you want to insert instead of deleted substrings: ";
	getline(cin, snew);
	int p1 = s.find(sold);
	while (p1 != -1) {
		int l = sold.size();
		s = s.erase(p1, l);
		s = s.insert(p1, snew);
		p1 = s.find(sold, p1 + 1);
	}
	
	cout <<"Modified text: " << s;
	return 0;
}