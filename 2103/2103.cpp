/* AdditionTutorLoop.cpp */
#include <iostream>
using namespace std;
int main()
{
  int correctCount = 0; // Count the number of correct answers
  int count = 0; // Count the number of questions
  int number1, number2, answer;
  while (count < 4)
  {
    // 1. Generate two random single-digit integers
    cin >> number1 >> number2;

	int t;
	if(number1 < number2){
		t = number1;
		number1 = number2;
		number2 = t;
	}
    // 2. Prompt the student to answer the question
    cout << "What is " << number1 << " - " << number2 << "? ";
    cin >> answer;
    // 3. Grade the answer and display the result

    if (number1 - number2 == answer) {
      cout << "You are correct!\n";
      correctCount++;
    }
    else
      cout << "Your answer is wrong.\n" << number1 << " - " <<
        number2 << " should be " << (number1 - number2) << endl;
    // Increase the count
    count++;
  }
  cout << "Correct count is " << correctCount << endl; 
  return 0;
}
