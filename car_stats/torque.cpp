#include "torque.hpp"

//binding
void ViVeCarTorque::_bind_methods(){
    ClassDB::bind_method(D_METHOD("get_build_up_torque"), &ViVeCarTorque::get_build_up_torque);
    ClassDB::bind_method(D_METHOD("set_build_up_torque", "build_up_torque"), &ViVeCarTorque::set_build_up_torque);
    ClassDB::bind_method(D_METHOD("get_torque_rise"), &ViVeCarTorque::get_torque_rise);
    ClassDB::bind_method(D_METHOD("set_torque_rise", "torque_rise"), &ViVeCarTorque::set_torque_rise);
    ClassDB::bind_method(D_METHOD("get_rise_rpm"), &ViVeCarTorque::get_rise_rpm);
    ClassDB::bind_method(D_METHOD("set_rise_rpm", "rise_rpm"), &ViVeCarTorque::set_rise_rpm);
    ClassDB::bind_method(D_METHOD("get_offset_torque"), &ViVeCarTorque::get_offset_torque);
    ClassDB::bind_method(D_METHOD("set_offset_torque", "offset_torque"), &ViVeCarTorque::set_offset_torque);
    ClassDB::bind_method(D_METHOD("get_float_rate"), &ViVeCarTorque::get_float_rate);
    ClassDB::bind_method(D_METHOD("set_float_rate", "float_rate"), &ViVeCarTorque::set_float_rate);
    ClassDB::bind_method(D_METHOD("get_decline_rate"), &ViVeCarTorque::get_decline_rate);
    ClassDB::bind_method(D_METHOD("set_decline_rate", "decline_rate"), &ViVeCarTorque::set_decline_rate);
    ClassDB::bind_method(D_METHOD("get_decline_rpm"), &ViVeCarTorque::get_decline_rpm);
    ClassDB::bind_method(D_METHOD("set_decline_rpm", "decline_rpm"), &ViVeCarTorque::set_decline_rpm);
    ClassDB::bind_method(D_METHOD("get_decline_sharpness"), &ViVeCarTorque::get_decline_sharpness);
    ClassDB::bind_method(D_METHOD("set_decline_sharpness", "decline_sharpness"), &ViVeCarTorque::set_decline_sharpness);
    
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "build_up_torque"), "set_build_up_torque", "get_build_up_torque");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "torque_rise"), "set_torque_rise", "get_torque_rise");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "rise_rpm"), "set_rise_rpm", "get_rise_rpm");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "offset_torque"), "set_offset_torque", "get_offset_torque");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "float_rate"), "set_float_rate", "get_float_rate");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "decline_rate"), "set_decline_rate", "get_decline_rate");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "decline_rpm"), "set_decline_rpm", "get_decline_rpm");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "decline_sharpness"), "set_decline_sharpness", "get_decline_sharpness");
}

double ViVeCarTorque::get_build_up_torque(){
    return build_up_torque;
}

void ViVeCarTorque::set_build_up_torque(double new_build_up_torque){
    build_up_torque = new_build_up_torque;
}

double ViVeCarTorque::get_torque_rise(){
    return torque_rise;
}

void ViVeCarTorque::set_torque_rise(double new_torque_rise){
    torque_rise = new_torque_rise;
}

double ViVeCarTorque::get_rise_rpm(){
    return rise_rpm;
}

void ViVeCarTorque::set_rise_rpm(double new_rise_rpm){
    rise_rpm = new_rise_rpm;
}

double ViVeCarTorque::get_offset_torque(){
    return offset_torque;
}

void ViVeCarTorque::set_offset_torque(double new_offset_torque){
    offset_torque = new_offset_torque;
}

double ViVeCarTorque::get_float_rate(){
    return float_rate;
}

void ViVeCarTorque::set_float_rate(double new_float_rate){
    float_rate = new_float_rate;
}

double ViVeCarTorque::get_decline_rate(){
    return decline_rate;
}

void ViVeCarTorque::set_decline_rate(double new_decline_rate){
    decline_rate = new_decline_rate;
}

double ViVeCarTorque::get_decline_rpm(){
    return decline_rpm;
}

void ViVeCarTorque::set_decline_rpm(double new_decline_rpm){
    decline_rpm = new_decline_rpm;
}

double ViVeCarTorque::get_decline_sharpness(){
    return decline_sharpness;
}

void ViVeCarTorque::set_decline_sharpness(double new_decline_sharpness){
    decline_sharpness = new_decline_sharpness;
}
