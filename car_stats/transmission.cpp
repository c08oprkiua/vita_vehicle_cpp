#include "transmission.hpp"

#include "scene/scene_string_names.h"
#include "core/script_language.h"

double ViVeTransmission::_run_transmission(double rpm){
    if (get_script_instance()) {
		return get_script_instance()->call(StringName("_run_transmission"), rpm);
	}
    else {
        return rpm;
    }
}

int ViVeTransmission::_current_gear(){
    if (get_script_instance()) {
		return get_script_instance()->call(StringName("_current_gear"));
	}
    else {
        return NEUTRAL;
    }
}

void ViVeTransmission::_bind_methods(){


    //guessing
	BIND_VMETHOD(MethodInfo("_current_gear"));
	BIND_VMETHOD(MethodInfo("_run_transmission", PropertyInfo(Variant::REAL, "crankshaft_rpm")));
}