#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

private:

public:
	explicit Skateboard(string brand, string model);
	virtual ~Skateboard();
	double random_doubles(double min, double max);
	virtual double mileageEstimate(double time);
	virtual string toString();
};


#endif //DRIVINGSIMULATOR_SKATEBOARD_H
