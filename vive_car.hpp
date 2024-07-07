

#ifndef VIVE_CAR_H
#define VIVE_CAR_H

#include "scene/3d/physics_body.h"
#include "scene/3d/position_3d.h"

#include "car_stats/controls.hpp"
#include "car_stats/transmission.hpp"

#include "vive_wheel.hpp"

//#A class representing a car in VitaVehicle.
class ViVeCar : public RigidBody {
	GDCLASS(ViVeCar, RigidBody);
protected:
	static void _bind_methods();

public:
	void scene_tree_ready(); //_ready
	void simulation_process(); // _physics_process()
	void debug_process(); //_process()

	/** Custom performance monitors aren't in Godot 3 (yet?)
	void setup_performance_monitors(); //_enter_tree
	void remove_performance_monitors(); //_exit_tree
	*/

	double get_turbo();

	void update_wheel_arrays();

	void fix_engine_stall();

	void controls(float analog_axis = 0.0);

	void transmission();

	void drivetrain();

	void aerodynamics();

	double multivariate(double external_rpm = 0.0);
};

#endif // VIVE_CAR_H
