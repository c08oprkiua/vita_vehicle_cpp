#ifndef VIVE_COMPOUND_SETTINGS_H
#define VIVE_COMPOUND_SETTINGS_H

#include "../vive_wheel.hpp"

class ViVeCompoundSettings : public Resource {
    GDCLASS(ViVeCompoundSettings, Resource)
private:
    double optimum_temp = 50.0;
    double stiffness = 1.0;
    double traction_factor = 1.0;
    double deform_factor = 1.0;
    double fore_friction = 0.125;
    double fore_stiffness = 0.0;
    double ground_drag_affection = 1.0;
    double buildup_affection = 1.0;
    double cool_rate = 0.000075;

    Ref<ViVeWheel> wheel_parent;

protected:
    static void _bind_methods();
public:

    double get_optimum_temp();
    void set_optimum_temp(double new_optimum_temp); 

    double get_stiffness();
    void set_stiffness(double new_stiffness); 

    double get_traction_factor();
    void set_traction_factor(double new_traction_factor); 

    double get_deform_factor();
    void set_deform_factor(double new_deform_factor); 

    double get_fore_friction();
    void set_fore_friction(double new_fore_friction); 

    double get_fore_stiffness();
    void set_fore_stiffness(double new_fore_stiffness); 

    double get_ground_drag_affection();
    void set_ground_drag_affection(double new_ground_drag_affection); 

    double get_buildup_affection();
    void set_buildup_affection(double new_buildup_affection); 

    double get_cool_rate();
    void set_cool_rate(double new_cool_rate); 
};


#endif