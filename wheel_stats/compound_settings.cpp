#include "compound_settings.hpp"

//binding
void ViVeCompoundSettings::_bind_methods(){
    ClassDB::bind_method(D_METHOD("get_optimum_temp"), &ViVeCompoundSettings::get_optimum_temp);
    ClassDB::bind_method(D_METHOD("set_optimum_temp", "optimum_temp"), &ViVeCompoundSettings::set_optimum_temp);
    ClassDB::bind_method(D_METHOD("get_stiffness"), &ViVeCompoundSettings::get_stiffness);
    ClassDB::bind_method(D_METHOD("set_stiffness", "stiffness"), &ViVeCompoundSettings::set_stiffness);
    ClassDB::bind_method(D_METHOD("get_traction_factor"), &ViVeCompoundSettings::get_traction_factor);
    ClassDB::bind_method(D_METHOD("set_traction_factor", "traction_factor"), &ViVeCompoundSettings::set_traction_factor);
    ClassDB::bind_method(D_METHOD("get_deform_factor"), &ViVeCompoundSettings::get_deform_factor);
    ClassDB::bind_method(D_METHOD("set_deform_factor", "deform_factor"), &ViVeCompoundSettings::set_deform_factor);
    ClassDB::bind_method(D_METHOD("get_fore_friction"), &ViVeCompoundSettings::get_fore_friction);
    ClassDB::bind_method(D_METHOD("set_fore_friction", "fore_friction"), &ViVeCompoundSettings::set_fore_friction);
    ClassDB::bind_method(D_METHOD("get_fore_stiffness"), &ViVeCompoundSettings::get_fore_stiffness);
    ClassDB::bind_method(D_METHOD("set_fore_stiffness", "fore_stiffness"), &ViVeCompoundSettings::set_fore_stiffness);
    ClassDB::bind_method(D_METHOD("get_ground_drag_affection"), &ViVeCompoundSettings::get_ground_drag_affection);
    ClassDB::bind_method(D_METHOD("set_ground_drag_affection", "ground_drag_affection"), &ViVeCompoundSettings::set_ground_drag_affection);
    ClassDB::bind_method(D_METHOD("get_buildup_affection"), &ViVeCompoundSettings::get_buildup_affection);
    ClassDB::bind_method(D_METHOD("set_buildup_affection", "buildup_affection"), &ViVeCompoundSettings::set_buildup_affection);
    ClassDB::bind_method(D_METHOD("get_cool_rate"), &ViVeCompoundSettings::get_cool_rate);
    ClassDB::bind_method(D_METHOD("set_cool_rate", "cool_rate"), &ViVeCompoundSettings::set_cool_rate);

    ADD_PROPERTY(PropertyInfo(Variant::REAL, "optimum_temp"), "set_optimum_temp", "get_optimum_temp");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "stiffness"), "set_stiffness", "get_stiffness");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "traction_factor"), "set_traction_factor", "get_traction_factor");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "deform_factor"), "set_deform_factor", "get_deform_factor");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "fore_friction"), "set_fore_friction", "get_fore_friction");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "fore_stiffness"), "set_fore_stiffness", "get_fore_stiffness");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "ground_drag_affection"), "set_ground_drag_affection", "get_ground_drag_affection");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "buildup_affection"), "set_buildup_affection", "get_buildup_affection");
    ADD_PROPERTY(PropertyInfo(Variant::REAL, "cool_rate"), "set_cool_rate", "get_cool_rate");

}

//set gets
double ViVeCompoundSettings::get_optimum_temp(){
    return optimum_temp;
}

void ViVeCompoundSettings::set_optimum_temp(double new_optimum_temp){
    optimum_temp = new_optimum_temp;
}

double ViVeCompoundSettings::get_stiffness(){
    return stiffness;
}

void ViVeCompoundSettings::set_stiffness(double new_stiffness){
    stiffness = new_stiffness;
}

double ViVeCompoundSettings::get_traction_factor(){
    return traction_factor;
}

void ViVeCompoundSettings::set_traction_factor(double new_traction_factor){
    traction_factor = new_traction_factor;
}

double ViVeCompoundSettings::get_deform_factor(){
    return deform_factor;
}

void ViVeCompoundSettings::set_deform_factor(double new_deform_factor){
    deform_factor = new_deform_factor;
}

double ViVeCompoundSettings::get_fore_friction(){
    return fore_friction;
}

void ViVeCompoundSettings::set_fore_friction(double new_fore_friction){
    fore_friction = new_fore_friction;
}

double ViVeCompoundSettings::get_fore_stiffness(){
    return fore_stiffness;
}

void ViVeCompoundSettings::set_fore_stiffness(double new_fore_stiffness){
    fore_stiffness = new_fore_stiffness;
}

double ViVeCompoundSettings::get_ground_drag_affection(){
    return ground_drag_affection;
}

void ViVeCompoundSettings::set_ground_drag_affection(double new_ground_drag_affection){
    ground_drag_affection = new_ground_drag_affection;
}

double ViVeCompoundSettings::get_buildup_affection(){
    return buildup_affection;
}

void ViVeCompoundSettings::set_buildup_affection(double new_buildup_affection){
    buildup_affection = new_buildup_affection;
}

double ViVeCompoundSettings::get_cool_rate(){
    return cool_rate;
}

void ViVeCompoundSettings::set_cool_rate(double new_cool_rate){
    cool_rate = new_cool_rate;
}
