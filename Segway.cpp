#include "Segway.h"
#include <math.h>

Segway::Segway() {
	setBrand("Custom");
	setModel("VTx");
}

Segway::Segway(string brand, string model, string fuelType) {
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
}

Segway::~Segway() = default;

//mileage when fuel type is rocket and time is less than ten minutes
//is an exponential function of time/5 minus 1-5%
double Segway::mileageEstimate(double time) {
	double mileage = 0.2 * time;
	if (fuelType == "Rocket" && time < 10) 
		mileage = exp(time/5) - (rand() % 6 + 1)/100;			    
	return mileage;
}

string Segway::toString() {
	return "-> Segway\n" + PoweredVehicle::toString(); 
}
