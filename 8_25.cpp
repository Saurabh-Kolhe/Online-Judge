#include "iostream"
using namespace std;

int main() {
    int n;
    for(int i=0;i<2;i++) {    
    cin>>n;
    int sum=0;
    sum = ((n*(n+1))/2)%500;
    cout<<sum<<"\n";
    }
}