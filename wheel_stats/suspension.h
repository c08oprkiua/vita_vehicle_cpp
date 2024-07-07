#ifndef VIVE_WHEEL_SUSPENSION_H
#define VIVE_WHEEL_SUSPENSION_H

#include "../vive_wheel.hpp"

class ViVeWheelSuspension : public Resource {
    GDCLASS(ViVeWheelSuspension, Resource);

private:
    double spring_stiffness = 47.0;
    double compression_dampening = 3.5;
    double rebound_dampening = 3.5;
    double deadzone = 0.0;
    double max_compression = 0.5;
    double sway_bar_stiffness = 0.5;
    double sway_bar_elasticity = 0.1;
    double incline_area = 0.2;
    double impact_force = 1.5;
    double rest_position = -2.7;

    Ref<ViVeWheel> parent_wheel;

protected:
    static void _bind_methods();

public:

    //These haven't been registered to the export API
    double get_elasticity(double sway_bar_influence = 0.0);
    double get_total_compression_dampening(double sway_bar_influence = 0.0);
    double get_total_rebound_dampening(double sway_bar_influence = 0.0);


    double get_spring_stiffness();
    void set_spring_stiffness(double new_spring_stiffness); 

    double get_compression_dampening();
    void set_compression_dampening(double new_compression_dampening); 

    double get_rebound_dampening();
    void set_rebound_dampening(double new_rebound_dampening); 

    double get_deadzone();
    void set_deadzone(double new_deadzone); 

    double get_max_compression();
    void set_max_compression(double new_max_compression); 

    double get_sway_bar_stiffness();
    void set_sway_bar_stiffness(double new_sway_bar_stiffness); 

    double get_sway_bar_elasticity();
    void set_sway_bar_elasticity(double new_sway_bar_elasticity); 

    double get_incline_area();
    void set_incline_area(double new_incline_area); 

    double get_impact_force();
    void set_impact_force(double new_impact_force); 

    double get_rest_position();
    void set_rest_position(double new_rest_position); 
};

#endif