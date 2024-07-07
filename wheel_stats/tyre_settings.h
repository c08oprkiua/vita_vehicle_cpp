#ifndef VIVE_TYRE_SETTINGS_H
#define VIVE_TYRE_SETTINGS_H

#include "../vive_wheel.hpp"

class ViVeTyreSettings : public Resource {
    GDCLASS(ViVeTyreSettings, Resource);
private:

    double grip_influence = 1.0;
    int width_mm = 185;
    double aspect_ratio = 60.0;
    int rim_size_in = 14;
    double air_pressure = 30.0;


    Ref<ViVeWheel> parent_wheel;
    double static_wheel_stiffness;
    double size;

protected:
    static void _bind_methods();
public:
    ViVeTyreSettings();

    double get_size();
    double get_stiffness();
    
    double get_grip_influence();
    void set_grip_influence(double new_grip_influence); 

    int get_width_mm();
    void set_width_mm(int new_width_mm); 

    double get_aspect_ratio();
    void set_aspect_ratio(double new_aspect_ratio); 

    int get_rim_size_in();
    void set_rim_size_in(int new_rim_size_in); 

    double get_air_pressure();
    void set_air_pressure(double new_air_pressure); 
};
#endif