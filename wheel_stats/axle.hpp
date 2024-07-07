#ifndef VIVE_WHEEL_AXLE
#define VIVE_WHEEL_AXLE

#include "../vive_wheel.hpp"

class ViVeWheelAxle: public Resource {
    GDCLASS(ViVeWheelAxle, Resource);

private:
    double vertical_mount = 1.15;
    double camber_gain = 1.0;
    double lateral_mount_pos = 0.0;
    double geometry4 = 0.0;

protected:
	static void _bind_methods();
public:

    double get_vertical_mount();
    void set_vertical_mount(double new_vertical_mount); 

    double get_camber_gain();
    void set_camber_gain(double new_camber_gain); 

    double get_lateral_mount_pos();
    void set_lateral_mount_pos(double new_lateral_mount_pos); 

    double get_geometry4();
    void set_geometry4(double new_geometry4);
};

#endif