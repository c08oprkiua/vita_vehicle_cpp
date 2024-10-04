#ifndef VIVE_CAR_CONTROLS_H
#define VIVE_CAR_CONTROLS_H

#include "core/resource.h"
#include "main/input_default.h"

class ViVeCarControls : public Resource {
    GDCLASS(ViVeCarControls, Resource);

    enum AssistLevel {
        NONE = 0,
        AUTOMATIC_CLUTCH = 1,
        FULL_ASSISTANCE = 2,
    };

private:
    StringName control_map_name;
    StringName action_name_shift_up;
    StringName action_name_shift_down;
    AssistLevel shifting_assistance;

    bool use_analog_steering;

    float steer_sensitivity;

    StringName action_name_steer_left;
    StringName action_name_steer_right;
    float button_steer_speed;
    float button_return_speed;
    float button_compensate_speed;
    float steer_amount_decay;
    bool enable_steering_assistance;
    float steering_assistance;
    bool loose_steering;

    class PedalWrapper {
    private:
        float strength;
        bool pressed;
    public:

        StringName action_name;
        bool is_digital = true;
        float on_rate = 0.2;
        float off_rate = 0.2;
        float minimum = 0.0;
        float maximum = 1.0;

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
	ViVeCarControls();

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

    float get_steer_sensitivity();
    void set_steer_sensitivity(float new_steer_sensitivity);

    StringName get_action_name_steer_left();
    void set_action_name_steer_left(StringName new_action_name_steer_left);

    StringName get_action_name_steer_right();
    void set_action_name_steer_right(StringName new_action_name_steer_right);

    float get_button_steer_speed();
    void set_button_steer_speed(float new_button_steer_speed);

    float get_button_return_speed();
    void set_button_return_speed(float new_button_return_speed);

    float get_button_compensate_speed();
    void set_button_compensate_speed(float new_button_compensate_speed);

    float get_steer_amount_decay();
    void set_steer_amount_decay(float new_steer_amount_decay);

    bool get_enable_steering_assistance();
    void set_enable_steering_assistance(bool new_enable_steering_assistance);

    float get_steering_assistance();
    void set_steering_assistance(float new_steering_assistance);

    bool get_loose_steering();
    void set_loose_steering(bool new_loose_steering);

    StringName get_action_name_throttle();
    void set_action_name_throttle(StringName new_action_name_throttle);
    bool get_is_throttle_digital();
    void set_is_throttle_digital(bool new_is_throttle_digital);
    float get_on_throttle_rate();
    void set_on_throttle_rate(float new_on_throttle_rate);
    float get_off_throttle_rate();
    void set_off_throttle_rate(float new_off_throttle_rate);
    float get_minimum_throttle();
    void set_minimum_throttle(float new_minimum_throttle);
    float get_maximum_throttle();
    void set_maximum_throttle(float new_maximum_throttle);

    StringName get_action_name_brake();
    void set_action_name_brake(StringName new_action_name_brake);
    bool get_is_brake_digital();
    void set_is_brake_digital(bool new_is_brake_digital);
    float get_on_brake_rate();
    void set_on_brake_rate(float new_on_brake_rate);
    float get_off_brake_rate();
    void set_off_brake_rate(float new_off_brake_rate);
    float get_minimum_brake();
    void set_minimum_brake(float new_minimum_brake);
    float get_maximum_brake();
    void set_maximum_brake(float new_maximum_brake);

    StringName get_action_name_handbrake();
    void set_action_name_handbrake(StringName new_action_name_handbrake);
    bool get_is_handbrake_digital();
    void set_is_handbrake_digital(bool new_is_handbrake_digital);
    float get_on_handbrake_rate();
    void set_on_handbrake_rate(float new_on_handbrake_rate);
    float get_off_handbrake_rate();
    void set_off_handbrake_rate(float new_off_handbrake_rate);
    float get_minimum_handbrake();
    void set_minimum_handbrake(float new_minimum_handbrake);
    float get_maximum_handbrake();
    void set_maximum_handbrake(float new_maximum_handbrake);

    StringName get_action_name_clutch();
    void set_action_name_clutch(StringName new_action_name_clutch);
    bool get_is_clutch_digital();
    void set_is_clutch_digital(bool new_is_clutch_digital);
    float get_on_clutch_rate();
    void set_on_clutch_rate(float new_on_clutch_rate);
    float get_off_clutch_rate();
    void set_off_clutch_rate(float new_off_clutch_rate);
    float get_minimum_clutch();
    void set_minimum_clutch(float new_minimum_clutch);
    float get_maximum_clutch();
    void set_maximum_clutch(float new_maximum_clutch);

};

#endif
