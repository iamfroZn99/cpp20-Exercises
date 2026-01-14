#include <iostream>
#include <format>
#include <numbers>
#include <cmath>

int main() {
	double fish_const = 2 / 0.5; // Area(in sqft) occupied by a fish of 1 feet.

	//The number of fishes to keep
	int fish{};
	std::cout << "Enter the number of fishes you wish to keep: ";
	std::cin >> fish;

	//Average length of one fish
	double fish_length{};
	std::cout << "Enter the average fish length: ";
	std::cin >> fish_length;

	//Calculating the diameter of the pond 
	const double area{ fish * fish_const * (fish_length/12) };
	
	double radius{ std::sqrt(area / std::numbers::pi_v<double>) };

	double diameter{ 2 * radius };
	
	std::cout << std::format("The diameter of the pond that is required is {}", diameter);
	return 0;
}
