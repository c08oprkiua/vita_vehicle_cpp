#ifndef VIVE_SINGLETON_H
#define VIVE_SINGLETON_H

#include "core/object.h"

class VitaVehicleSimulation : public Object {
    GDCLASS(VitaVehicleSimulation, Object);

private:
    double clock_mult = 1.0;
    VitaVehicleSimulation *singleton;
public:
    VitaVehicleSimulation *get_singleton();

    double get_sim_speed_multiplier();
};

#endif