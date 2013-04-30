#include <iostream>

using namespace std;

void printChars(char ch1, char ch2, int numberPerLine)
{
	int c = 0;
	if(ch2 < ch1){
		char t = ch1;
		ch1 = ch2;
		ch2 = t;
	}
	for(char i = ch1; i <= ch2; i++){
		cout << i;
		c++;
		if(c % numberPerLine == 0)
			cout << endl;
	}
}

int main()
{
	printChars('D','1',10);
}
