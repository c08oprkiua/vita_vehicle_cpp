#include "controls.hpp"

void ViVeCarControls::_bind_methods(){
    ClassDB::bind_method(D_METHOD("get_control_map_name"), &ViVeCarControls::get_control_map_name);
    ClassDB::bind_method(D_METHOD("set_control_map_name", "control_map_name"), &ViVeCarControls::set_control_map_name);

    ClassDB::bind_method(D_METHOD("get_action_name_shift_up"), &ViVeCarControls::get_action_name_shift_up);
    ClassDB::bind_method(D_METHOD("set_action_name_shift_up", "action_name_shift_up"), &ViVeCarControls::set_action_name_shift_up);
    ClassDB::bind_method(D_METHOD("get_action_name_shift_down"), &ViVeCarControls::get_action_name_shift_down);
    ClassDB::bind_method(D_METHOD("set_action_name_shift_down", "action_name_shift_down"), &ViVeCarControls::set_action_name_shift_down);
    ClassDB::bind_method(D_METHOD("get_shifting_assistance"), &ViVeCarControls::get_shifting_assistance);
    ClassDB::bind_method(D_METHOD("set_shifting_assistance", "shifting_assistance"), &ViVeCarControls::set_shifting_assistance);
    
    ClassDB::bind_method(D_METHOD("get_use_analog_steering"), &ViVeCarControls::get_use_analog_steering);
    ClassDB::bind_method(D_METHOD("set_use_analog_steering", "use_analog_steering"), &ViVeCarControls::set_use_analog_steering);
    
    ClassDB::bind_method(D_METHOD("get_steer_sensitivity"), &ViVeCarControls::get_steer_sensitivity);
    ClassDB::bind_method(D_METHOD("set_steer_sensitivity", "steer_sensitivity"), &ViVeCarControls::set_steer_sensitivity);

    ClassDB::bind_method(D_METHOD("get_action_name_steer_left"), &ViVeCarControls::get_action_name_steer_left);
    ClassDB::bind_method(D_METHOD("set_action_name_steer_left", "action_name_steer_left"), &ViVeCarControls::set_action_name_steer_left);
    ClassDB::bind_method(D_METHOD("get_action_name_steer_right"), &ViVeCarControls::get_action_name_steer_right);
    ClassDB::bind_method(D_METHOD("set_action_name_steer_right", "action_name_steer_right"), &ViVeCarControls::set_action_name_steer_right);
    ClassDB::bind_method(D_METHOD("get_button_steer_speed"), &ViVeCarControls::get_button_steer_speed);
    ClassDB::bind_method(D_METHOD("set_button_steer_speed", "button_steer_speed"), &ViVeCarControls::set_button_steer_speed);
    ClassDB::bind_method(D_METHOD("get_button_return_speed"), &ViVeCarControls::get_button_return_speed);
    ClassDB::bind_method(D_METHOD("set_button_return_speed", "button_return_speed"), &ViVeCarControls::set_button_return_speed);
    ClassDB::bind_method(D_METHOD("get_button_compensate_speed"), &ViVeCarControls::get_button_compensate_speed);
    ClassDB::bind_method(D_METHOD("set_button_compensate_speed", "button_compensate_speed"), &ViVeCarControls::set_button_compensate_speed);

    ClassDB::bind_method(D_METHOD("get_steer_amount_decay"), &ViVeCarControls::get_steer_amount_decay);
    ClassDB::bind_method(D_METHOD("set_steer_amount_decay", "steer_amount_decay"), &ViVeCarControls::set_steer_amount_decay);

    ClassDB::bind_method(D_METHOD("get_enable_steering_assistance"), &ViVeCarControls::get_enable_steering_assistance);
    ClassDB::bind_method(D_METHOD("set_enable_steering_assistance", "enable_steering_assistance"), &ViVeCarControls::set_enable_steering_assistance);

    ClassDB::bind_method(D_METHOD("get_steering_assistance"), &ViVeCarControls::get_steering_assistance);
    ClassDB::bind_method(D_METHOD("set_steering_assistance", "steering_assistance"), &ViVeCarControls::set_steering_assistance);

    ClassDB::bind_method(D_METHOD("get_loose_steering"), &ViVeCarControls::get_loose_steering);
    ClassDB::bind_method(D_METHOD("set_loose_steering", "loose_steering"), &ViVeCarControls::set_loose_steering);

    ClassDB::bind_method(D_METHOD("get_action_name_throttle"), &ViVeCarControls::get_action_name_throttle);
    ClassDB::bind_method(D_METHOD("set_action_name_throttle", "action_name_throttle"), &ViVeCarControls::set_action_name_throttle);
    ClassDB::bind_method(D_METHOD("get_is_throttle_digital"), &ViVeCarControls::get_is_throttle_digital);
    ClassDB::bind_method(D_METHOD("set_is_throttle_digital", "is_throttle_digital"), &ViVeCarControls::set_is_throttle_digital);
    ClassDB::bind_method(D_METHOD("get_on_throttle_rate"), &ViVeCarControls::get_on_throttle_rate);
    ClassDB::bind_method(D_METHOD("set_on_throttle_rate", "on_throttle_rate"), &ViVeCarControls::set_on_throttle_rate);
    ClassDB::bind_method(D_METHOD("get_off_throttle_rate"), &ViVeCarControls::get_off_throttle_rate);
    ClassDB::bind_method(D_METHOD("set_off_throttle_rate", "off_throttle_rate"), &ViVeCarControls::set_off_throttle_rate);
    ClassDB::bind_method(D_METHOD("get_minimum_throttle"), &ViVeCarControls::get_minimum_throttle);
    ClassDB::bind_method(D_METHOD("set_minimum_throttle", "minimum_throttle"), &ViVeCarControls::set_minimum_throttle);
    ClassDB::bind_method(D_METHOD("get_maximum_throttle"), &ViVeCarControls::get_maximum_throttle);
    ClassDB::bind_method(D_METHOD("set_maximum_throttle", "maximum_throttle"), &ViVeCarControls::set_maximum_throttle);

    ClassDB::bind_method(D_METHOD("get_action_name_brake"), &ViVeCarControls::get_action_name_brake);
    ClassDB::bind_method(D_METHOD("set_action_name_brake", "action_name_brake"), &ViVeCarControls::set_action_name_brake);
    ClassDB::bind_method(D_METHOD("get_is_brake_digital"), &ViVeCarControls::get_is_brake_digital);
    ClassDB::bind_method(D_METHOD("set_is_brake_digital", "is_brake_digital"), &ViVeCarControls::set_is_brake_digital);
    ClassDB::bind_method(D_METHOD("get_on_brake_rate"), &ViVeCarControls::get_on_brake_rate);
    ClassDB::bind_method(D_METHOD("set_on_brake_rate", "on_brake_rate"), &ViVeCarControls::set_on_brake_rate);
    ClassDB::bind_method(D_METHOD("get_off_brake_rate"), &ViVeCarControls::get_off_brake_rate);
    ClassDB::bind_method(D_METHOD("set_off_brake_rate", "off_brake_rate"), &ViVeCarControls::set_off_brake_rate);
    ClassDB::bind_method(D_METHOD("get_minimum_brake"), &ViVeCarControls::get_minimum_brake);
    ClassDB::bind_method(D_METHOD("set_minimum_brake", "minimum_brake"), &ViVeCarControls::set_minimum_brake);
    ClassDB::bind_method(D_METHOD("get_maximum_brake"), &ViVeCarControls::get_maximum_brake);
    ClassDB::bind_method(D_METHOD("set_maximum_brake", "maximum_brake"), &ViVeCarControls::set_maximum_brake);

    ClassDB::bind_method(D_METHOD("get_action_name_handbrake"), &ViVeCarControls::get_action_name_handbrake);
    ClassDB::bind_method(D_METHOD("set_action_name_handbrake", "action_name_handbrake"), &ViVeCarControls::set_action_name_handbrake);
    ClassDB::bind_method(D_METHOD("get_is_handbrake_digital"), &ViVeCarControls::get_is_handbrake_digital);
    ClassDB::bind_method(D_METHOD("set_is_handbrake_digital", "is_handbrake_digital"), &ViVeCarControls::set_is_handbrake_digital);
    ClassDB::bind_method(D_METHOD("get_on_handbrake_rate"), &ViVeCarControls::get_on_handbrake_rate);
    ClassDB::bind_method(D_METHOD("set_on_handbrake_rate", "on_handbrake_rate"), &ViVeCarControls::set_on_handbrake_rate);
    ClassDB::bind_method(D_METHOD("get_off_handbrake_rate"), &ViVeCarControls::get_off_handbrake_rate);
    ClassDB::bind_method(D_METHOD("set_off_handbrake_rate", "off_handbrake_rate"), &ViVeCarControls::set_off_handbrake_rate);
    ClassDB::bind_method(D_METHOD("get_minimum_handbrake"), &ViVeCarControls::get_minimum_handbrake);
    ClassDB::bind_method(D_METHOD("set_minimum_handbrake", "minimum_handbrake"), &ViVeCarControls::set_minimum_handbrake);
    ClassDB::bind_method(D_METHOD("get_maximum_handbrake"), &ViVeCarControls::get_maximum_handbrake);
    ClassDB::bind_method(D_METHOD("set_maximum_handbrake", "maximum_handbrake"), &ViVeCarControls::set_maximum_handbrake);

    ClassDB::bind_method(D_METHOD("get_action_name_clutch"), &ViVeCarControls::get_action_name_clutch);
    ClassDB::bind_method(D_METHOD("set_action_name_clutch", "action_name_clutch"), &ViVeCarControls::set_action_name_clutch);
    ClassDB::bind_method(D_METHOD("get_is_clutch_digital"), &ViVeCarControls::get_is_clutch_digital);
    ClassDB::bind_method(D_METHOD("set_is_clutch_digital", "is_clutch_digital"), &ViVeCarControls::set_is_clutch_digital);
    ClassDB::bind_method(D_METHOD("get_on_clutch_rate"), &ViVeCarControls::get_on_clutch_rate);
    ClassDB::bind_method(D_METHOD("set_on_clutch_rate", "on_clutch_rate"), &ViVeCarControls::set_on_clutch_rate);
    ClassDB::bind_method(D_METHOD("get_off_clutch_rate"), &ViVeCarControls::get_off_clutch_rate);
    ClassDB::bind_method(D_METHOD("set_off_clutch_rate", "off_clutch_rate"), &ViVeCarControls::set_off_clutch_rate);
    ClassDB::bind_method(D_METHOD("get_minimum_clutch"), &ViVeCarControls::get_minimum_clutch);
    ClassDB::bind_method(D_METHOD("set_minimum_clutch", "minimum_clutch"), &ViVeCarControls::set_minimum_clutch);
    ClassDB::bind_method(D_METHOD("get_maximum_clutch"), &ViVeCarControls::get_maximum_clutch);
    ClassDB::bind_method(D_METHOD("set_maximum_clutch", "maximum_clutch"), &ViVeCarControls::set_maximum_clutch);


    ADD_PROPERTY(PropertyInfo(Variant::STRING, "control_map_name"), "set_control_map_name", "get_control_map_name");
    
    ADD_GROUP("Shifting", "");
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "action_name_shift_up"), "set_action_name_shift_up", "get_action_name_shift_up");
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "action_name_shift_down"), "set_action_name_shift_down", "get_action_name_shift_down");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "shifting_assistance", PROPERTY_HINT_ENUM, "None, Auto-clutch, Full Assist"), "set_shifting_assistance", "get_shifting_assistance");
    
    ADD_GROUP("Steering", "");
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "use_analog_steering"), "set_use_analog_steering", "get_use_analog_steering");
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "loose_steering"), "set_loose_steering", "get_loose_steering");

    ADD_GROUP("Analog", "Steering");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "steer_sensitivity"), "set_steer_sensitivity", "get_steer_sensitivity");
    
    ADD_GROUP("Digital", "Steering");
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "action_name_steer_left"), "set_action_name_steer_left", "get_action_name_steer_left");
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "action_name_steer_right"), "set_action_name_steer_right", "get_action_name_steer_right");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "button_steer_speed"), "set_button_steer_speed", "get_button_steer_speed");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "button_return_speed"), "set_button_return_speed", "get_button_return_speed");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "button_compensate_speed"), "set_button_compensate_speed", "get_button_compensate_speed");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "steer_amount_decay"), "set_steer_amount_decay", "get_steer_amount_decay");
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "enable_steering_assistance"), "set_enable_steering_assistance", "get_enable_steering_assistance");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "steering_assistance"), "set_steering_assistance", "get_steering_assistance");

    ADD_GROUP("Throttle", "");
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "action_name_throttle"), "set_action_name_throttle", "get_action_name_throttle");
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "is_throttle_digital"), "set_is_throttle_digital", "get_is_throttle_digital");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "on_throttle_rate"), "set_on_throttle_rate", "get_on_throttle_rate");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "off_throttle_rate"), "set_off_throttle_rate", "get_off_throttle_rate");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "minimum_throttle"), "set_minimum_throttle", "get_minimum_throttle");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "maximum_throttle"), "set_maximum_throttle", "get_maximum_throttle");

    ADD_GROUP("Brake", "");
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "action_name_brake"), "set_action_name_brake", "get_action_name_brake");
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "is_brake_digital"), "set_is_brake_digital", "get_is_brake_digital");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "on_brake_rate"), "set_on_brake_rate", "get_on_brake_rate");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "off_brake_rate"), "set_off_brake_rate", "get_off_brake_rate");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "minimum_brake"), "set_minimum_brake", "get_minimum_brake");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "maximum_brake"), "set_maximum_brake", "get_maximum_brake");

    ADD_GROUP("Handbrake", "");
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "action_name_handbrake"), "set_action_name_handbrake", "get_action_name_handbrake");
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "is_handbrake_digital"), "set_is_handbrake_digital", "get_is_handbrake_digital");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "on_handbrake_rate"), "set_on_handbrake_rate", "get_on_handbrake_rate");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "off_handbrake_rate"), "set_off_handbrake_rate", "get_off_handbrake_rate");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "minimum_handbrake"), "set_minimum_handbrake", "get_minimum_handbrake");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "maximum_handbrake"), "set_maximum_handbrake", "get_maximum_handbrake");

    ADD_GROUP("Clutch", "");
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "action_name_clutch"), "set_action_name_clutch", "get_action_name_clutch");
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "is_clutch_digital"), "set_is_clutch_digital", "get_is_clutch_digital");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "on_clutch_rate"), "set_on_clutch_rate", "get_on_clutch_rate");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "off_clutch_rate"), "set_off_clutch_rate", "get_off_clutch_rate");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "minimum_clutch"), "set_minimum_clutch", "get_minimum_clutch");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "maximum_clutch"), "set_maximum_clutch", "get_maximum_clutch");

    BIND_ENUM_CONSTANT(NONE);
    BIND_ENUM_CONSTANT(AUTOMATIC_CLUTCH);
    BIND_ENUM_CONSTANT(FULL_ASSISTANCE);
}
