#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
	string myEngineSize;
	int myNumberOfEngines;

public:
	Jet();

	explicit Jet(string brand, string model, string fuelType, 
			string engineSize, int numberOfEngines);
	virtual ~Jet();
	string getEngineSize();
	void setEngineSize(string engineSize);
	virtual double mileageEstimate(double time);
	virtual string toString();
};


#endif //DRIVINGSIMULATOR_JET_H
