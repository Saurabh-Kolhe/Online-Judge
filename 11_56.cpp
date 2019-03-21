#include<iostream>

using namespace std;

string formatWord(string word) {
	string result = "";
	for (int i = 0 ; i < word.length(); i++) {
		result += word[i];
		if (i+1 != word.length() - 1) {
			if (word[i] == word[i+1]) {
				result += '*';
			}
		}
	}
	return result;
}

int main() {

	int tests;
	string word;
	
	for (int i = 0; i < tests; i++) {
		cin>>word;
		cout<<formatWord(word)<<endl;
	}


	return 0;
}










