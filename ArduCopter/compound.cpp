/// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-

// Compound heli variables and functions

#include "Copter.h"

#if COMPOUND == ENABLED

void Copter::compound_radio_passthrough()
{
    compound.passthrough_to_servos(channel_roll->control_in, channel_pitch->control_in, channel_yaw->control_in);
}

void Copter::compound_thrust_passthrough()
{
    compound.passthrough_to_thrust(g.rc_7.control_in);
}
#endif  // COMPOUND == ENABLED