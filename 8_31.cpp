#include "iostream"
using namespace std;

int main() {
	int n,sum;
	auto lambda = [](auto x, auto y) {return x + y;};
	for(auto i=0;i<2;i++) {
		cin>>n;
		sum = ((n*(n+1))/25)%500;
		cout<<sum<<endl;
	}
}