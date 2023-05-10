#include <array>
#include <iostream>
#include <string>
constexpr int Ninety = 90;
namespace StudentNames {
enum StudentNames {
	kenny,       // 0
	kyle,        // 1
	stan,        // 2
	butters,     // 3
	cartman,     // 4
	wendy,       // 5
	GONGYUE,     // 6
	max_students // 7
};
} // namespace StudentNames
int main() {
	std::array<int, StudentNames::max_students> Scores{};
	Scores[StudentNames::StudentNames::stan] = Ninety;
	std::cout << Scores[2] << '\n';
	std::cout << "The array has: " << std::size(Scores) << " elements\n";
	return 0;
} // namespace StudentNamesenum StudentNames
