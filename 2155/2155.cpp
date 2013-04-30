#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double num,t,e;
	double nextGuess,lastGuess;
	cin >> t;
	while(t--){
		cin >> num >> e;
		lastGuess = num;
		while(1){
			nextGuess = (lastGuess + (num / lastGuess)) /2;
			if(abs(nextGuess - lastGuess) < e)
				break;
			lastGuess = nextGuess;
		}
		cout << fixed << setprecision(8) << nextGuess << endl;
	}
	return 0;
}
