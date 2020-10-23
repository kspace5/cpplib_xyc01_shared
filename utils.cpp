
#include "xyc_utils.h"

namespace xyc {

	using namespace std;
	//
	// STRING UTILS
	//

	// Splits line into a vector or ints
	vector<int> split_to_ints(string str, char delimiter) {
		vector<int> result;
		stringstream ss(str); // Turn the string into a stream.
		string tok;

		while (getline(ss, tok, delimiter)) {
			result.push_back(stoi(tok));
		}

		return result;
	}

	// Splits line into a vector or floats
	vector<float> split_to_floats(string str, char delimiter) {
		vector<float> result;
		stringstream ss(str); // Turn the string into a stream.
		string tok;

		while (getline(ss, tok, delimiter)) {
			result.push_back(stof(tok));
		}

		return result;
	}

	string ping(string str) {
		return "Hello from abc " + str;
	}
}