#include <iostream>
#include <format>

int main() {
	int apple_count{ 15 };                            
	int orange_count{ 5 }; 
	int total_fruit{ apple_count + orange_count };

	std::cout << std::format("The value of apple count is {}\n", apple_count);
	std::cout << std::format("The value of orange count is {}\n", orange_count);
	std::cout << std::format("The value of total fruit count is {}\n", total_fruit);
}
