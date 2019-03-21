#include<iostream>
using namespace std;

int getsum(int n){
	int s=0,dig;
	while(n!=0){
		dig=n%10;
		s+=dig;
		n=n/10;
	}
	return s;
}

int getpro(int n){
	int s=0,dig;
	while(n!=0){
		dig=n%10;
		s*=dig;
		n=n/10;
	}
	return s;
}

int main(){
	int t,num1,num2,num;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>num;
		num1=num;
		num2=num;
		while(num1>=10){
			num1=getsum(num1);
		}
		while(num2>=10){
			num2=getpro(num2);
		}
		if(num1>num2)
			cout<<num1<<endl;
		else
			cout<<num2<<endl;
	}
	return 0;
}