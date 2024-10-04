
#include "core/class_db.h"
#include "register_types.h"

#include "vive_car.hpp" //includes basically everything in ViVe implicitly

void register_vita_vehicle_types() {
	ClassDB::register_class<ViVeWheel>();

	ClassDB::register_class<ViVeCompoundSettings>();
	ClassDB::register_class<ViVeTyreSettings>();
	ClassDB::register_class<ViVeWheelSuspension>();
	ClassDB::register_class<ViVeWheelAxle>();

	ClassDB::register_class<ViVeCarControls>();
	ClassDB::register_class<ViVeTransmission>();
	ClassDB::register_class<ViVeCarTorque>();

	ClassDB::register_class<ViVeCar>();


}

void unregister_vita_vehicle_types() {
}
