#include<iostream>
#include<string>
using namespace std;

	int main(){
		int T;
		int i, j, k = -1;
		string S;
		string S1;
		cin>>T;
		while(T != 0){
			cin>>S;
			i = 0;
			j = 1;
			k = -1;
		
			while(S[j] != '\n'){
				if(S[i] == S[j]){
					S1[++k] = S[i];
					S1[++k] = '*';
					S1[++k] = S[j];
				}
				else{
					S1[++k] = S[j];
				}
				
				i++;
				j++;
			}
			S1[++k] = '\0';
			
			for(int z = 0; z != '\0'; z++){
				cout<<S1[z];
			}
			T--;
		}
	}