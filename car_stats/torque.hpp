#ifndef VIVE_TORQUE_H
#define VIVE_TORQUE_H

#include "core/resource.h"

class ViVeCarTorque : public Resource {
    GDCLASS(ViVeCarTorque, Resource);
private:
    double build_up_torque;
    double torque_rise;
    double rise_rpm;
    double offset_torque;
    double float_rate;
    double decline_rate;
    double decline_rpm;
    double decline_sharpness;

protected:
    static void _bind_methods();
public:

    double get_build_up_torque();
    void set_build_up_torque(double new_build_up_torque); 

    double get_torque_rise();
    void set_torque_rise(double new_torque_rise); 

    double get_rise_rpm();
    void set_rise_rpm(double new_rise_rpm); 

    double get_offset_torque();
    void set_offset_torque(double new_offset_torque); 

    double get_float_rate();
    void set_float_rate(double new_float_rate); 

    double get_decline_rate();
    void set_decline_rate(double new_decline_rate); 

    double get_decline_rpm();
    void set_decline_rpm(double new_decline_rpm); 

    double get_decline_sharpness();
    void set_decline_sharpness(double new_decline_sharpness); 
};

#endif