#include "Skateboard.h"
#include <random>

Skateboard::Skateboard(string brand, string model) {
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::random_doubles(double min, double max){
	default_random_engine generator;
	uniform_real_distribution<double> distribution(min, max);
	double rando_double = distribution(generator);
	return rando_double;
}

double Skateboard::mileageEstimate(double time) {
	double mileage = random_doubles(0.1, 0.5) * time;
	if(time > 25 && time < 250)
		mileage += random_doubles(1.0, time/3);
	return mileage;
}

string Skateboard::toString() {
	string s = "-> Skateboard\n\t";
	return "-> Skateboard\n" + Vehicle::toString(); 
}
