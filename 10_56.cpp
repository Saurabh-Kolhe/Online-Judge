#include<iostream>

using namespace std;

int main() {
	
	int tests;
	cin>>tests;
	
	int daySize, iceCreamAmt;

	for (int i = 1; i <= tests; i++) {
		cin>>daySize>>iceCreamAmt;
		int iceCreamEaten = 0;
		int previousDay = -1;	
		int today = -1;
		for (int i = 0; i < daySize; i++) {
			cin>>today;
			
			
			if (today == previousDay) {

				if (today > 0) {
					
					if ((iceCreamEaten + today - 1) > iceCreamAmt) 	
						continue;

					iceCreamEaten += (today - 1);
					previousDay = today - 1;
				} else {
					previousDay = 0;
				}
				
			}else {
				if (iceCreamEaten + today > iceCreamAmt)	
					continue;

				iceCreamEaten += today;
				previousDay = today;
			}

		}
		cout<<iceCreamEaten<<endl;
	}


	return 0;
}


