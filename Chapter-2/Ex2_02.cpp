#include <iostream>
#include <format>    // For user input and output through std::cin / cout

int main() {
	unsigned int yards{}, feet{}, inches{};

	// Convert a distance in yards, feet, and inches to inches
	std::cout << "Enter a distance as yards, feet and inches with the values separated by spaces:";
	std::cin >> yards >> feet >> inches;

	const unsigned feet_per_yard{ 3 };
	const unsigned inches_per_foot{ 12 };

	unsigned total_inches{};
	total_inches = inches + inches_per_foot * (yards * feet_per_yard + feet);

	std::cout << std::format("This distance corresponds to {} in inches.\n", total_inches);

	// Convert a distance in inches to yards, feet, and inches
	std::cout << "Enter a distance in inches: ";
	std::cin >> total_inches;
	feet = total_inches / inches_per_foot;
	inches = total_inches % inches_per_foot;
	yards = feet / feet_per_yard;
	feet = feet % feet_per_yard;

	std::cout << std::format("This distance corresponds to {} yards {} feets and {} inches", yards, feet, inches);
  return 0
}
