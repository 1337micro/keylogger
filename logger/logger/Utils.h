#pragma once
#include <Windows.h>
#include <string>
#include <bitset>

class Utils {
public:

	static int getMostSignificantBit(SHORT i) {
		std::string binary = std::bitset<16>(i).to_string();
		return std::stoi(std::to_string(binary[0]));
	}
};
