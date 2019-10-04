#ifndef DRIVINGSIMULATOR_SEGWAY_H
#define DRIVINGSIMULATOR_SEGWAY_H

#include "PoweredVehicle.h"

class Segway : public PoweredVehicle {

private:

public:
	Segway();
	explicit Segway(string brand, string model, string fuelType);
	virtual ~Segway();
	virtual double mileageEstimate(double time);
	virtual string toString();
};


#endif //DRIVINGSIMULATOR_SEGWAY_H
