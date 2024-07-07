#ifndef VIVE_WHEEL_H
#define VIVE_WHEEL_H

#include "scene/3d/ray_cast.h"

#include "wheel_stats/tyre_settings.h"
#include "wheel_stats/axle.hpp"
#include "wheel_stats/compound_settings.hpp"
#include "wheel_stats/suspension.h"

class ViVeWheel : public RayCast {
	GDCLASS(ViVeWheel, RayCast);
private:

protected:
	static void _bind_methods();

public:


};

#endif // VIVE_WHEEL_H
