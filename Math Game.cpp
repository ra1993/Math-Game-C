// Math Tutor problem 6
#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{

	
	
	int SEED = 500;
	int num1;
	int num2;
	int result;
	int answer;
	int choice;
	srand(time(NULL));
	
	do
	{ 
		num1 = 1 + rand() % SEED;
		num2 = 1 + rand() % SEED;

		
		cout << setprecision(2) << fixed << endl;

		
		cout << " Math Game " << endl;
		cout << " 1. Addition problem\n";
		cout << " 2. Subtraction problem\n";
		cout << " 3. Multiplication problem\n";
		cout << " 4. Division problem\n";
		cout << " 5. Exit math game\n";
		cout << "Make sure to select by number!" << endl;
		cout << "Choose a problem:" << endl;
		cin >> choice;


		
		if (choice <= 0 || choice >= 6)

		{
			cout << "Wrong, PLAY AGAIN!!!" << endl;
			cout << " Math Game " << endl;
			cout << " 1. Addition problem\n";
			cout << " 2. Subtraction problem\n";
			cout << " 3. Multiplication problem\n";
			cout << " 4. Division problem\n";
			cout << " 5. Exit the game\n";
			cout << "Choose a problem!" << endl;
			cin >> choice;

		}


		switch (choice)
		{ //Addition
		case 1: cout << num1 << " + " << num2 << " = " << endl;
			result = num1 + num2;
			break;
			//Subtraction 
		case 2: cout << num1 << " - " << num2 << " = " << endl;
			result = num1 - num2;
			break;
			//Multiplication 
		case 3: cout << num1 << " * " << num2 << " = " << endl;
			result = num1 * num2;
			break;
			//Division 
		case 4: cout << num1 << " / " << num2 << " = " << endl;
			result = (float)num1 / (float)num2;
			break;
			//Exit program
		case 5: exit(0);
			break;

		}
		
		cout << "What is your answer?" << endl;
		cin >> answer;

		answer = ceil(answer * 10 + 0.5) / 10;
		result = ceil(result * 10 + 0.5) / 10;

		
		if (answer == result)
			cout << "Awesome! "<< endl;

		else
			cout << "Wrong, the answer is " << result << endl;

	} while (choice != 5);

	return 0;
}
