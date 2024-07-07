#include "controls.hpp"

static const double clock_mult = 1.0; //todo: Move this to singleton

ViVeCarControls::ViVeCarControls(){
    input_singleton = InputDefault::get_singleton();
}

bool ViVeCarControls::PedalWrapper::update_press(bool just){
    if (is_digital){
        if (just){
            pressed = input_singleton->is_action_just_pressed(action_name);
        }
        else {
            pressed = input_singleton->is_action_pressed(action_name);
        }
    }
    else {
        pressed = !Math::is_zero_approx(input_singleton->get_action_strength(action_name));
    }
    return pressed;
}

float ViVeCarControls::PedalWrapper::poll(bool cond){
    if (cond){
        if (is_digital){
            strength += on_rate / clock_mult;
        }
        else {
            strength = input_singleton->get_action_strength(action_name);
        }
    }
    else {
        strength -= off_rate / clock_mult;
    }
    strength = CLAMP(strength, minimum, maximum);
    return strength;
}

float ViVeCarControls::get_steer_direction(){
    return input_singleton->get_axis(action_name_steer_left, action_name_steer_right);
}

float ViVeCarControls::get_steer_axis(float external_analog){
    float analog_axis = get_steer_direction();

    if (use_analog_steering){
        analog_axis = external_analog;
        steer_axis_amount = CLAMP(analog_axis * steer_sensitivity, -1.0f, +1.0f);
        steer_axis_amount = MIN(Math::absf(steer_axis_amount) + 0.5f, +1.0f);
    }
    else {
        float steer_direction = SGN(analog_axis);
        bool should_compensate = Math::is_equal_approx(steer_direction, SGN(steer_axis_amount));

        if (!Math::is_zero_approx(steer_direction)){
            if (should_compensate){
                steer_axis_amount += steer_direction * button_compensate_speed;
            } 
            else {
                steer_axis_amount += steer_direction * button_steer_speed;
            }
        }
        else {
            if (Math::absf(steer_axis_amount) > button_return_speed){
                steer_axis_amount = Math::move_toward(steer_axis_amount, 0.0, button_return_speed);
            } 
            else {
                steer_axis_amount = 0.0;
            }
        }
    }
    steer_axis_amount = CLAMP(steer_axis_amount, 1.0f, +1.0f);
    return steer_axis_amount;
}

float ViVeCarControls::get_throttle(bool condition){
    return throttle.poll(condition);
}

float ViVeCarControls::get_brake(bool condition){
    return brake.poll(condition);
}

float ViVeCarControls::get_handbrake(bool condition){
    return handbrake.poll(condition);
}

float ViVeCarControls::get_clutch(bool condition){
    return clutch.poll(condition);
}

bool ViVeCarControls::is_throttle_pressed(bool just){
    return throttle.update_press(just);
}

bool ViVeCarControls::is_brake_pressed(bool just){
    return brake.update_press(just);
}

bool ViVeCarControls::is_handbrake_pressed(bool just){
    return handbrake.update_press(just);
}

bool ViVeCarControls::is_clutch_pressed(bool just){
    return clutch.update_press(just);
}

bool ViVeCarControls::is_shift_up_pressed(bool just){
    if (just){
        return input_singleton->is_action_just_pressed(action_name_shift_up);
    }
    else{
        return input_singleton->is_action_pressed(action_name_shift_up);
    }
}

bool ViVeCarControls::is_shift_down_pressed(bool just){
    if (just){
        return input_singleton->is_action_just_pressed(action_name_shift_down);
    }
    else{
        return input_singleton->is_action_pressed(action_name_shift_down);
    }
}