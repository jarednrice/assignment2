//Created by Jared Rice on 10/4/19
#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
	//string myEngineSize;
	int myNumberOfEngines;

public:
	Jet();

	explicit Jet(string brand, string model, string fuelType, 
			/*string engineSize,*/ int numberOfEngines);
	virtual ~Jet();
	string getEngineSize();
	int getEngineCount();
	//void setEngineSize(string engineSize);
	void setEngineCount(int numberOfEngines);
	virtual double mileageEstimate(double time);
	virtual string toString();
};


#endif //DRIVINGSIMULATOR_JET_H
