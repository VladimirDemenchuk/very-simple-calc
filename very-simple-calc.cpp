#include <iostream>

int main() {
	int firstNum = 0;
	int secondNum = 0;
	char operator_ = '+';

	std::cout << "Enter your first number" << std::endl;
	std::cin >> firstNum;
	std::cout << "Enter your second number" << std::endl;
	std::cin >> secondNum;
	std::cout << "Enter operator" << std::endl << "Example: " << std::endl << "* for multiplication" << std::endl << "+ for addition" << std::endl << "- for subtraction" << std::endl << "/ for division" << std::endl;
	std::cin >> operator_;

	switch (operator_){
	case '+':
		std::cout << firstNum + secondNum;
		break;
	case '-':
		std::cout << firstNum - secondNum;
		break;
	case '*':
		std::cout << firstNum * secondNum;
		break;
	case '/':
		if (secondNum != 0 && firstNum != 0) {
			std::cout << firstNum / secondNum;
		}
		else {
			std::cout << "division by zero is forbidden";
		}
		break;
	default:
		std::cout << "Incorrect input";
	}
	return 0;
}