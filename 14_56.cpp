#include<iostream>

using namespace std;

int main() {

	long problemSize, examTime;
	cin>>problemSize>>examTime;
	long *problems = new long[problemSize];
	long *time = new long[problemSize];


	for (int i = 0; i < problemSize; i++) {
		cin>>problems[i];
	}

	for (int i = 0; i < problemSize; i++) {
		cin>>time[i];
	}
	
	long previousMarks = -1;
	long previousTime = -1;
	int index;
	
	for (int j = 0; j < problemSize; j++) {
		long currentMarks = problems[j];
		long currentTime = time[j];
		if (currentMarks > previousMarks && currentTime <= examTime) {
			previousMarks = currentMarks;
			previousTime = currentTime;
			index = j;
		}else if (currentMarks == previousMarks && currentTime <= examTime) {
			if (currentTime < previousTime) {
				previousTime = currentTime;
				index = j;
			}
		} 
	}

	long timeLeft = examTime - previousTime;
	long marks = 2 * previousMarks;

	for (int i = 0; i < problemSize; i++) {
		if (i == index)
			continue;
		if (previousTime + time[i] <= examTime) {
			previousMarks += problems[i];
			previousTime += time[i];
		}	
	
	}		
	
	cout<<(2*previousTime)<<endl;
	

	return 0;
}	

