#include "tyre_settings.h"

static const double inch_to_millimeters = 25.4;
static const double magic_number_a = 1.5;
static const double magic_number_d = 0.003269;

//specific class stuff

ViVeTyreSettings::ViVeTyreSettings(){
    static_wheel_stiffness = get_stiffness();
    size = get_size();
}

double ViVeTyreSettings::get_size(){
    return ((width_mm * (aspect_ratio * 0.02) + rim_size_in * inch_to_millimeters) * magic_number_d) * 0.5;
}

double ViVeTyreSettings::get_stiffness(){
    return width_mm / (aspect_ratio / magic_number_a);
}

//binding
void ViVeTyreSettings::_bind_methods(){

    

    ClassDB::bind_method(D_METHOD("get_grip_influence"), &ViVeTyreSettings::get_grip_influence);
    ClassDB::bind_method(D_METHOD("set_grip_influence", "grip_influence"), &ViVeTyreSettings::set_grip_influence);
    ClassDB::bind_method(D_METHOD("get_width_mm"), &ViVeTyreSettings::get_width_mm);
    ClassDB::bind_method(D_METHOD("set_width_mm", "width_mm"), &ViVeTyreSettings::set_width_mm);
    ClassDB::bind_method(D_METHOD("get_aspect_ratio"), &ViVeTyreSettings::get_aspect_ratio);
    ClassDB::bind_method(D_METHOD("set_aspect_ratio", "aspect_ratio"), &ViVeTyreSettings::set_aspect_ratio);
    ClassDB::bind_method(D_METHOD("get_rim_size_in"), &ViVeTyreSettings::get_rim_size_in);
    ClassDB::bind_method(D_METHOD("set_rim_size_in", "rim_size_in"), &ViVeTyreSettings::set_rim_size_in);
    ClassDB::bind_method(D_METHOD("get_air_pressure"), &ViVeTyreSettings::get_air_pressure);
    ClassDB::bind_method(D_METHOD("set_air_pressure", "air_pressure"), &ViVeTyreSettings::set_air_pressure);

    ADD_PROPERTY(PropertyInfo(Variant::REAL, "grip_influence"), "set_grip_influence", "get_grip_influence");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "width_mm"), "set_width_mm", "get_width_mm");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "aspect_ratio"), "set_aspect_ratio", "get_aspect_ratio");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "rim_size_in"), "set_rim_size_in", "get_rim_size_in");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "air_pressure"), "set_air_pressure", "get_air_pressure");
}


//set gets
double ViVeTyreSettings::get_grip_influence(){
    return grip_influence;
}

void ViVeTyreSettings::set_grip_influence(double new_grip_influence){
    grip_influence = new_grip_influence;
}

int ViVeTyreSettings::get_width_mm(){
    return width_mm;
}

void ViVeTyreSettings::set_width_mm(int new_width_mm){
    width_mm = new_width_mm;
    static_wheel_stiffness = get_stiffness();
    size = get_size();
}

double ViVeTyreSettings::get_aspect_ratio(){
    return aspect_ratio;
}

void ViVeTyreSettings::set_aspect_ratio(double new_aspect_ratio){
    aspect_ratio = new_aspect_ratio;
    static_wheel_stiffness = get_stiffness();
    size = get_size();
}

int ViVeTyreSettings::get_rim_size_in(){
    return rim_size_in;
}

void ViVeTyreSettings::set_rim_size_in(int new_rim_size_in){
    rim_size_in = new_rim_size_in;
    size = get_size();
}

double ViVeTyreSettings::get_air_pressure(){
    return air_pressure;
}

void ViVeTyreSettings::set_air_pressure(double new_air_pressure){
    air_pressure = new_air_pressure;
}

