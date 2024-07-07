#ifndef VIVE_CAR_CONTROLS_H
#define VIVE_CAR_CONTROLS_H

#include "core/resource.h"
#include "main/input_default.h"

class ViVeCarControls : public Resource {
    GDCLASS(ViVeCarControls, Resource);

    enum AssistLevel {
        NONE,
        AUTOMATIC_CLUTCH,
        FULL_ASSISTANCE,
    };

private:
    StringName control_map_name;
    StringName action_name_shift_up;
    StringName action_name_shift_down;
    AssistLevel shifting_assistance;
    
    bool use_analog_steering;

    double steer_sensitivity;

    StringName action_name_steer_left;
    StringName action_name_steer_right;
    double button_steer_speed;
    double button_return_speed;
    double button_compensate_speed;
    double steer_amount_decay;
    bool enable_steering_assistance;
    double steering_assistance;
    bool loose_steering;

    class PedalWrapper {
    private:
        double strength;
        bool pressed;
    public:
        
        StringName action_name;
        bool is_digital = true;
        double on_rate = 0.2;
        double off_rate = 0.2;
        double minimum = 0.0;
        double maximum = 1.0;

        bool update_press(bool just);
        float poll(bool condition);
    };

    PedalWrapper throttle;
    PedalWrapper brake;
    PedalWrapper handbrake;
    PedalWrapper clutch;

    static Input *input_singleton;
    float steer_axis_amount;

protected:
    static void _bind_methods();
public:

    float get_steer_direction();
    float get_steer_axis(float external_analog = 0.0);

    float get_throttle(bool condition);
    float get_brake(bool condition);
    float get_handbrake(bool condition);
    float get_clutch(bool condition);

    bool is_throttle_pressed(bool just = false);
    bool is_brake_pressed(bool just = false);
    bool is_handbrake_pressed(bool just = false);
    bool is_clutch_pressed(bool just = false);

    bool is_shift_up_pressed(bool just = true);
    bool is_shift_down_pressed(bool just = true);
    
    //set gets
    StringName get_control_map_name();
    void set_control_map_name(StringName new_control_map_name); 

    StringName get_action_name_shift_up();
    void set_action_name_shift_up(StringName new_action_name_shift_up); 

    StringName get_action_name_shift_down();
    void set_action_name_shift_down(StringName new_action_name_shift_down); 

    AssistLevel get_shifting_assistance();
    void set_shifting_assistance(AssistLevel new_shifting_assistance); 

    bool get_use_analog_steering();
    void set_use_analog_steering(bool new_use_analog_steering); 

    double get_steer_sensitivity();
    void set_steer_sensitivity(double new_steer_sensitivity); 

    StringName get_action_name_steer_left();
    void set_action_name_steer_left(StringName new_action_name_steer_left); 

    StringName get_action_name_steer_right();
    void set_action_name_steer_right(StringName new_action_name_steer_right); 

    double get_button_steer_speed();
    void set_button_steer_speed(double new_button_steer_speed); 

    double get_button_return_speed();
    void set_button_return_speed(double new_button_return_speed); 

    double get_button_compensate_speed();
    void set_button_compensate_speed(double new_button_compensate_speed); 

    double get_steer_amount_decay();
    void set_steer_amount_decay(double new_steer_amount_decay); 

    bool get_enable_steering_assistance();
    void set_enable_steering_assistance(bool new_enable_steering_assistance); 

    double get_steering_assistance();
    void set_steering_assistance(double new_steering_assistance); 

    bool get_loose_steering();
    void set_loose_steering(bool new_loose_steering); 

    StringName get_action_name_throttle();
    void set_action_name_throttle(StringName new_action_name_throttle); 

    bool get_is_throttle_digital();
    void set_is_throttle_digital(bool new_is_throttle_digital); 

    double get_on_throttle_rate();
    void set_on_throttle_rate(double new_on_throttle_rate); 

    double get_off_throttle_rate();
    void set_off_throttle_rate(double new_off_throttle_rate); 

    double get_minimum_throttle();
    void set_minimum_throttle(double new_minimum_throttle); 

    double get_maximum_throttle();
    void set_maximum_throttle(double new_maximum_throttle); 

    StringName get_action_name_brake();
    void set_action_name_brake(StringName new_action_name_brake); 

    bool get_is_brake_digital();
    void set_is_brake_digital(bool new_is_brake_digital); 

    double get_on_brake_rate();
    void set_on_brake_rate(double new_on_brake_rate); 

    double get_off_brake_rate();
    void set_off_brake_rate(double new_off_brake_rate); 

    double get_minimum_brake();
    void set_minimum_brake(double new_minimum_brake); 

    double get_maximum_brake();
    void set_maximum_brake(double new_maximum_brake); 

    StringName get_action_name_handbrake();
    void set_action_name_handbrake(StringName new_action_name_handbrake); 

    bool get_is_handbrake_digital();
    void set_is_handbrake_digital(bool new_is_handbrake_digital); 

    double get_on_handbrake_rate();
    void set_on_handbrake_rate(double new_on_handbrake_rate); 

    double get_off_handbrake_rate();
    void set_off_handbrake_rate(double new_off_handbrake_rate); 

    double get_minimum_handbrake();
    void set_minimum_handbrake(double new_minimum_handbrake); 

    double get_maximum_handbrake();
    void set_maximum_handbrake(double new_maximum_handbrake); 

    StringName get_action_name_clutch();
    void set_action_name_clutch(StringName new_action_name_clutch); 

    bool get_is_clutch_digital();
    void set_is_clutch_digital(bool new_is_clutch_digital); 

    double get_on_clutch_rate();
    void set_on_clutch_rate(double new_on_clutch_rate); 

    double get_off_clutch_rate();
    void set_off_clutch_rate(double new_off_clutch_rate); 

    double get_minimum_clutch();
    void set_minimum_clutch(double new_minimum_clutch); 

    double get_maximum_clutch();
    void set_maximum_clutch(double new_maximum_clutch); 

};

#endif