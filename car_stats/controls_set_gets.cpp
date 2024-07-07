#include "controls.hpp"

StringName ViVeCarControls::get_control_map_name(){
    return control_map_name;
}

void ViVeCarControls::set_control_map_name(StringName new_control_map_name){
    control_map_name = new_control_map_name;
}

StringName ViVeCarControls::get_action_name_shift_up(){
    return action_name_shift_up;
}

void ViVeCarControls::set_action_name_shift_up(StringName new_action_name_shift_up){
    action_name_shift_up = new_action_name_shift_up;
}

StringName ViVeCarControls::get_action_name_shift_down(){
    return action_name_shift_down;
}

void ViVeCarControls::set_action_name_shift_down(StringName new_action_name_shift_down){
    action_name_shift_down = new_action_name_shift_down;
}

ViVeCarControls::AssistLevel ViVeCarControls::get_shifting_assistance(){
    return shifting_assistance;
}

void ViVeCarControls::set_shifting_assistance(AssistLevel new_shifting_assistance){
    shifting_assistance = new_shifting_assistance;
}

bool ViVeCarControls::get_use_analog_steering(){
    return use_analog_steering;
}

void ViVeCarControls::set_use_analog_steering(bool new_use_analog_steering){
    use_analog_steering = new_use_analog_steering;
}

double ViVeCarControls::get_steer_sensitivity(){
    return steer_sensitivity;
}

void ViVeCarControls::set_steer_sensitivity(double new_steer_sensitivity){
    steer_sensitivity = new_steer_sensitivity;
}

StringName ViVeCarControls::get_action_name_steer_left(){
    return action_name_steer_left;
}

void ViVeCarControls::set_action_name_steer_left(StringName new_action_name_steer_left){
    action_name_steer_left = new_action_name_steer_left;
}

StringName ViVeCarControls::get_action_name_steer_right(){
    return action_name_steer_right;
}

void ViVeCarControls::set_action_name_steer_right(StringName new_action_name_steer_right){
    action_name_steer_right = new_action_name_steer_right;
}

double ViVeCarControls::get_button_steer_speed(){
    return button_steer_speed;
}

void ViVeCarControls::set_button_steer_speed(double new_button_steer_speed){
    button_steer_speed = new_button_steer_speed;
}

double ViVeCarControls::get_button_return_speed(){
    return button_return_speed;
}

void ViVeCarControls::set_button_return_speed(double new_button_return_speed){
    button_return_speed = new_button_return_speed;
}

double ViVeCarControls::get_button_compensate_speed(){
    return button_compensate_speed;
}

void ViVeCarControls::set_button_compensate_speed(double new_button_compensate_speed){
    button_compensate_speed = new_button_compensate_speed;
}

double ViVeCarControls::get_steer_amount_decay(){
    return steer_amount_decay;
}

void ViVeCarControls::set_steer_amount_decay(double new_steer_amount_decay){
    steer_amount_decay = new_steer_amount_decay;
}

bool ViVeCarControls::get_enable_steering_assistance(){
    return enable_steering_assistance;
}

void ViVeCarControls::set_enable_steering_assistance(bool new_enable_steering_assistance){
    enable_steering_assistance = new_enable_steering_assistance;
}

double ViVeCarControls::get_steering_assistance(){
    return steering_assistance;
}

void ViVeCarControls::set_steering_assistance(double new_steering_assistance){
    steering_assistance = new_steering_assistance;
}

bool ViVeCarControls::get_loose_steering(){
    return loose_steering;
}

void ViVeCarControls::set_loose_steering(bool new_loose_steering){
    loose_steering = new_loose_steering;
}

StringName ViVeCarControls::get_action_name_throttle(){
    return throttle.action_name;
}

void ViVeCarControls::set_action_name_throttle(StringName new_action_name_throttle){
    throttle.action_name = new_action_name_throttle;
}

bool ViVeCarControls::get_is_throttle_digital(){
    return throttle.is_digital;
}

void ViVeCarControls::set_is_throttle_digital(bool new_is_throttle_digital){
    throttle.is_digital = new_is_throttle_digital;
}

double ViVeCarControls::get_on_throttle_rate(){
    return throttle.on_rate;
}

void ViVeCarControls::set_on_throttle_rate(double new_on_throttle_rate){
    throttle.on_rate = new_on_throttle_rate;
}

double ViVeCarControls::get_off_throttle_rate(){
    return throttle.off_rate;
}

void ViVeCarControls::set_off_throttle_rate(double new_off_throttle_rate){
    throttle.off_rate = new_off_throttle_rate;
}

double ViVeCarControls::get_minimum_throttle(){
    return throttle.minimum;
}

void ViVeCarControls::set_minimum_throttle(double new_minimum_throttle){
    throttle.minimum = new_minimum_throttle;
}

double ViVeCarControls::get_maximum_throttle(){
    return throttle.maximum;
}

void ViVeCarControls::set_maximum_throttle(double new_maximum_throttle){
    throttle.maximum = new_maximum_throttle;
}

StringName ViVeCarControls::get_action_name_brake(){
    return brake.action_name;
}

void ViVeCarControls::set_action_name_brake(StringName new_action_name_brake){
    brake.action_name = new_action_name_brake;
}

bool ViVeCarControls::get_is_brake_digital(){
    return brake.is_digital;
}

void ViVeCarControls::set_is_brake_digital(bool new_is_brake_digital){
    brake.is_digital = new_is_brake_digital;
}

double ViVeCarControls::get_on_brake_rate(){
    return brake.on_rate;
}

void ViVeCarControls::set_on_brake_rate(double new_on_brake_rate){
    brake.on_rate = new_on_brake_rate;
}

double ViVeCarControls::get_off_brake_rate(){
    return brake.off_rate;
}

void ViVeCarControls::set_off_brake_rate(double new_off_brake_rate){
    brake.off_rate = new_off_brake_rate;
}

double ViVeCarControls::get_minimum_brake(){
    return brake.minimum;
}

void ViVeCarControls::set_minimum_brake(double new_minimum_brake){
    brake.minimum = new_minimum_brake;
}

double ViVeCarControls::get_maximum_brake(){
    return brake.maximum;
}

void ViVeCarControls::set_maximum_brake(double new_maximum_brake){
    brake.maximum = new_maximum_brake;
}

StringName ViVeCarControls::get_action_name_handbrake(){
    return handbrake.action_name;
}

void ViVeCarControls::set_action_name_handbrake(StringName new_action_name_handbrake){
    handbrake.action_name = new_action_name_handbrake;
}

bool ViVeCarControls::get_is_handbrake_digital(){
    return handbrake.is_digital;
}

void ViVeCarControls::set_is_handbrake_digital(bool new_is_handbrake_digital){
    handbrake.is_digital = new_is_handbrake_digital;
}

double ViVeCarControls::get_on_handbrake_rate(){
    return handbrake.on_rate;
}

void ViVeCarControls::set_on_handbrake_rate(double new_on_handbrake_rate){
    handbrake.on_rate = new_on_handbrake_rate;
}

double ViVeCarControls::get_off_handbrake_rate(){
    return handbrake.off_rate;
}

void ViVeCarControls::set_off_handbrake_rate(double new_off_handbrake_rate){
    handbrake.off_rate = new_off_handbrake_rate;
}

double ViVeCarControls::get_minimum_handbrake(){
    return handbrake.minimum;
}

void ViVeCarControls::set_minimum_handbrake(double new_minimum_handbrake){
    handbrake.minimum = new_minimum_handbrake;
}

double ViVeCarControls::get_maximum_handbrake(){
    return handbrake.maximum;
}

void ViVeCarControls::set_maximum_handbrake(double new_maximum_handbrake){
    handbrake.maximum = new_maximum_handbrake;
}

StringName ViVeCarControls::get_action_name_clutch(){
    return clutch.action_name;
}

void ViVeCarControls::set_action_name_clutch(StringName new_action_name_clutch){
    clutch.action_name = new_action_name_clutch;
}

bool ViVeCarControls::get_is_clutch_digital(){
    return clutch.is_digital;
}

void ViVeCarControls::set_is_clutch_digital(bool new_is_clutch_digital){
    clutch.is_digital = new_is_clutch_digital;
}

double ViVeCarControls::get_on_clutch_rate(){
    return clutch.on_rate;
}

void ViVeCarControls::set_on_clutch_rate(double new_on_clutch_rate){
    clutch.on_rate = new_on_clutch_rate;
}

double ViVeCarControls::get_off_clutch_rate(){
    return clutch.off_rate;
}

void ViVeCarControls::set_off_clutch_rate(double new_off_clutch_rate){
    clutch.off_rate = new_off_clutch_rate;
}

double ViVeCarControls::get_minimum_clutch(){
    return clutch.minimum;
}

void ViVeCarControls::set_minimum_clutch(double new_minimum_clutch){
    clutch.minimum = new_minimum_clutch;
}

double ViVeCarControls::get_maximum_clutch(){
    return clutch.minimum;
}

void ViVeCarControls::set_maximum_clutch(double new_maximum_clutch){
    clutch.maximum = new_maximum_clutch;
}

