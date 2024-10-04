#ifndef VIVE_TRANSMISSION_H
#define VIVE_TRANSMISSION_H

#include "core/resource.h"

class ViVeCar;

class ViVeTransmission : public Resource {
    GDCLASS(ViVeTransmission, Resource);
protected:
    static void _bind_methods();

public:
    enum {
        NEUTRAL = 0,
        REVERSE = -1,
        DRIVE = -2,
    };


	//Not exposed to scripting
    ViVeCar *installed_car;

    //virtual functions
    virtual double _run_transmission(double crankshaft_rpm);
    virtual int _current_gear();

};

#endif
