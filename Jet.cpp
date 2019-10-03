#include "Jet.h"

Jet::Jet() {
	//myEngineSize = "unknown";
	setBrand("Custom");
	setModel("VTx");
	setEngineCount(1);
}

Jet::Jet(string brand, string model, string fuelType, /*string engineSize,*/ 
		int numberOfEngines) {
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	//setEngineSize(engineSize);
	setEngineCount(numberOfEngines);
}

Jet::~Jet() = default;

/*string Jet::getEngineSize() {
	return myEngineSize;
}*/

int Jet::getEngineCount(){
	return myNumberOfEngines;
}

/*void Jet::setEngineSize(string engineSize) {
	if (engineSize == "unknown" || engineSize == "small" ||
		engineSize == "medium" || engineSize == "grande") {
		myEngineSize = engineSize;
	} 
	else{
		myEngineSize = "unknown";
						    }

}*/

void Jet::setEngineCount(int numberOfEngines){
	myNumberOfEngines = numberOfEngines;
}

double Jet::mileageEstimate(double time) {
	double mileage = (rand() % 100 + 40) * time;
	int engineCount = getEngineCount();
	if (fuelType == "Rocket" && engineCount > 2) {
		mileage += mileage * (0.055 * engineCount);
	}
	return mileage;
}

string Jet::toString() {
	string engineCountString = to_string(getEngineCount());
	return "-> Jet\n" + PoweredVehicle::toString()/* + "\n\tEngine Size: " + getEngineSize()*/
		+"\n\tEngine Count: " + engineCountString;
}
