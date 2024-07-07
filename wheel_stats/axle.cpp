#include "axle.hpp"

//binding
void ViVeWheelAxle::_bind_methods(){
    ClassDB::bind_method(D_METHOD("get_vertical_mount"), &ViVeWheelAxle::get_vertical_mount);
    ClassDB::bind_method(D_METHOD("set_vertical_mount", "vertical_mount"), &ViVeWheelAxle::set_vertical_mount);
    ClassDB::bind_method(D_METHOD("get_camber_gain"), &ViVeWheelAxle::get_camber_gain);
    ClassDB::bind_method(D_METHOD("set_camber_gain", "camber_gain"), &ViVeWheelAxle::set_camber_gain);
    ClassDB::bind_method(D_METHOD("get_lateral_mount_pos"), &ViVeWheelAxle::get_lateral_mount_pos);
    ClassDB::bind_method(D_METHOD("set_lateral_mount_pos", "lateral_mount_pos"), &ViVeWheelAxle::set_lateral_mount_pos);
    ClassDB::bind_method(D_METHOD("get_geometry4"), &ViVeWheelAxle::get_geometry4);
    ClassDB::bind_method(D_METHOD("set_geometry4", "geometry4"), &ViVeWheelAxle::set_geometry4);

    ADD_PROPERTY(PropertyInfo(Variant::REAL, "vertical_mount"), "set_vertical_mount", "get_vertical_mount");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "camber_gain"), "set_camber_gain", "get_camber_gain");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "lateral_mount_pos"), "set_lateral_mount_pos", "get_lateral_mount_pos");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "geometry4"), "set_geometry4", "get_geometry4");
}

//set gets
double ViVeWheelAxle::get_vertical_mount(){
    return vertical_mount;
}

void ViVeWheelAxle::set_vertical_mount(double new_vertical_mount){
    vertical_mount = new_vertical_mount;
}

double ViVeWheelAxle::get_camber_gain(){
    return camber_gain;
}

void ViVeWheelAxle::set_camber_gain(double new_camber_gain){
    camber_gain = new_camber_gain;
}

double ViVeWheelAxle::get_lateral_mount_pos(){
    return lateral_mount_pos;
}

void ViVeWheelAxle::set_lateral_mount_pos(double new_lateral_mount_pos){
    lateral_mount_pos = new_lateral_mount_pos;
}

double ViVeWheelAxle::get_geometry4(){
    return geometry4;
}

void ViVeWheelAxle::set_geometry4(double new_geometry4){
    geometry4 = new_geometry4;
}

