#include "suspension.h"

double ViVeWheelSuspension::get_elasticity(double influence){
    return spring_stiffness * (sway_bar_elasticity * influence + 1.0);
}

double ViVeWheelSuspension::get_total_compression_dampening(double influence){
    return compression_dampening * (sway_bar_stiffness * influence + 1.0);
}

double ViVeWheelSuspension::get_total_rebound_dampening(double influence){
    return rebound_dampening * (sway_bar_stiffness * influence + 1.0);
}

//binding
void ViVeWheelSuspension::_bind_methods(){

    
    ClassDB::bind_method(D_METHOD("get_spring_stiffness"), &ViVeWheelSuspension::get_spring_stiffness);
    ClassDB::bind_method(D_METHOD("set_spring_stiffness", "spring_stiffness"), &ViVeWheelSuspension::set_spring_stiffness);
    ClassDB::bind_method(D_METHOD("get_compression_dampening"), &ViVeWheelSuspension::get_compression_dampening);
    ClassDB::bind_method(D_METHOD("set_compression_dampening", "compression_dampening"), &ViVeWheelSuspension::set_compression_dampening);
    ClassDB::bind_method(D_METHOD("get_rebound_dampening"), &ViVeWheelSuspension::get_rebound_dampening);
    ClassDB::bind_method(D_METHOD("set_rebound_dampening", "rebound_dampening"), &ViVeWheelSuspension::set_rebound_dampening);
    ClassDB::bind_method(D_METHOD("get_deadzone"), &ViVeWheelSuspension::get_deadzone);
    ClassDB::bind_method(D_METHOD("set_deadzone", "deadzone"), &ViVeWheelSuspension::set_deadzone);
    ClassDB::bind_method(D_METHOD("get_max_compression"), &ViVeWheelSuspension::get_max_compression);
    ClassDB::bind_method(D_METHOD("set_max_compression", "max_compression"), &ViVeWheelSuspension::set_max_compression);
    ClassDB::bind_method(D_METHOD("get_sway_bar_stiffness"), &ViVeWheelSuspension::get_sway_bar_stiffness);
    ClassDB::bind_method(D_METHOD("set_sway_bar_stiffness", "sway_bar_stiffness"), &ViVeWheelSuspension::set_sway_bar_stiffness);
    ClassDB::bind_method(D_METHOD("get_sway_bar_elasticity"), &ViVeWheelSuspension::get_sway_bar_elasticity);
    ClassDB::bind_method(D_METHOD("set_sway_bar_elasticity", "sway_bar_elasticity"), &ViVeWheelSuspension::set_sway_bar_elasticity);
    ClassDB::bind_method(D_METHOD("get_incline_area"), &ViVeWheelSuspension::get_incline_area);
    ClassDB::bind_method(D_METHOD("set_incline_area", "incline_area"), &ViVeWheelSuspension::set_incline_area);
    ClassDB::bind_method(D_METHOD("get_impact_force"), &ViVeWheelSuspension::get_impact_force);
    ClassDB::bind_method(D_METHOD("set_impact_force", "impact_force"), &ViVeWheelSuspension::set_impact_force);
    ClassDB::bind_method(D_METHOD("get_rest_position"), &ViVeWheelSuspension::get_rest_position);
    ClassDB::bind_method(D_METHOD("set_rest_position", "rest_position"), &ViVeWheelSuspension::set_rest_position);

    ADD_PROPERTY(PropertyInfo(Variant::REAL, "spring_stiffness"), "set_spring_stiffness", "get_spring_stiffness");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "compression_dampening"), "set_compression_dampening", "get_compression_dampening");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "rebound_dampening"), "set_rebound_dampening", "get_rebound_dampening");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "deadzone"), "set_deadzone", "get_deadzone");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "max_compression"), "set_max_compression", "get_max_compression");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "sway_bar_stiffness"), "set_sway_bar_stiffness", "get_sway_bar_stiffness");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "sway_bar_elasticity"), "set_sway_bar_elasticity", "get_sway_bar_elasticity");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "incline_area"), "set_incline_area", "get_incline_area");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "impact_force"), "set_impact_force", "get_impact_force");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "rest_position"), "set_rest_position", "get_rest_position");
}

//set gets
double ViVeWheelSuspension::get_spring_stiffness(){
    return spring_stiffness;
}

void ViVeWheelSuspension::set_spring_stiffness(double new_spring_stiffness){
    spring_stiffness = new_spring_stiffness;
}

double ViVeWheelSuspension::get_compression_dampening(){
    return compression_dampening;
}

void ViVeWheelSuspension::set_compression_dampening(double new_compression_dampening){
    compression_dampening = new_compression_dampening;
}

double ViVeWheelSuspension::get_rebound_dampening(){
    return rebound_dampening;
}

void ViVeWheelSuspension::set_rebound_dampening(double new_rebound_dampening){
    rebound_dampening = new_rebound_dampening;
}

double ViVeWheelSuspension::get_deadzone(){
    return deadzone;
}

void ViVeWheelSuspension::set_deadzone(double new_deadzone){
    deadzone = new_deadzone;
}

double ViVeWheelSuspension::get_max_compression(){
    return max_compression;
}

void ViVeWheelSuspension::set_max_compression(double new_max_compression){
    max_compression = new_max_compression;
}

double ViVeWheelSuspension::get_sway_bar_stiffness(){
    return sway_bar_stiffness;
}

void ViVeWheelSuspension::set_sway_bar_stiffness(double new_sway_bar_stiffness){
    sway_bar_stiffness = new_sway_bar_stiffness;
}

double ViVeWheelSuspension::get_sway_bar_elasticity(){
    return sway_bar_elasticity;
}

void ViVeWheelSuspension::set_sway_bar_elasticity(double new_sway_bar_elasticity){
    sway_bar_elasticity = new_sway_bar_elasticity;
}

double ViVeWheelSuspension::get_incline_area(){
    return incline_area;
}

void ViVeWheelSuspension::set_incline_area(double new_incline_area){
    incline_area = new_incline_area;
}

double ViVeWheelSuspension::get_impact_force(){
    return impact_force;
}

void ViVeWheelSuspension::set_impact_force(double new_impact_force){
    impact_force = new_impact_force;
}

double ViVeWheelSuspension::get_rest_position(){
    return rest_position;
}

void ViVeWheelSuspension::set_rest_position(double new_rest_position){
    rest_position = new_rest_position;
    if (parent_wheel.is_valid()){
        parent_wheel->target_position.y = new_rest_position;
    }
}