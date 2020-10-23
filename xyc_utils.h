#ifndef XYC_UTILS_H
#define XYC_UTILS_H

#include <math.h>
#include <map>
#include <vector>
#include <string>

#include <sstream>

namespace xyc {
		//
		// STRING UTILS
		//

		// Splits line into a vector or ints
		std::vector<int> split_to_ints(std::string str, char delimiter);

		// Splits line into a vector or floats
		std::vector<float> split_to_floats(std::string str, char delimiter);

		std::string ping(std::string str);
}

#endif