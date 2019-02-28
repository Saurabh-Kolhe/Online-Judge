#include "iostream"
using namespace std;

int main() {
	int n,sum;
	for(int i=0;i<2;i++) {
		cin>>n;
		sum = ((n*(n+11))/2)/n;
		cout<<sum<<endl;
	}
}