#include <string>

class PricingStrategy {
 public:
 	int calculateAirlinePricing(std::string source, std::string destination) {
		return source.length() + destination.length();
 	}

  int calculatePropertyValuation(std::string location) {
    return (location.length() * 150 % 40 + 12345 - 50) >> 1;
  }

  int calculateOilValuation(std::string location) {
  	int arbitrary_oil_weight = 87;
  	int complex_oil_expression = (arbitrary_oil_weight * 13) * 321;
  	return (complex_oil_expression * location.length()) << 2;
  }
};