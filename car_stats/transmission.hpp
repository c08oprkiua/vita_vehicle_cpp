#ifndef VIVE_TRANSMISSION_H
#define VIVE_TRANSMISSION_H

#include "core/resource.h"

class ViVeTransmission : public Resource {
    GDCLASS(ViVeTransmission, Resource);
private:
    //Ref<ViVeCar> installed_car;
protected:
    static void _bind_methods();

public:
    enum {
        NEUTRAL = 0,
        REVERSE = -1,
        DRIVE = -2,
    };

    //virtual functions
    double _run_transmission(double crankshaft_rpm);
    int _current_gear();

    /**
    Ref<ViVeCar> get_installed_car();
    void set_installed_car(Ref<ViVeCar>);
     */
};


#endif