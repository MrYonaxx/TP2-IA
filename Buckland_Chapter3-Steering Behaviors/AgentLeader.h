#pragma once
#include "Vehicle.h"
#include "SteeringBehaviors.h"

#include "MovingEntity.h"
#include "2d/Vector2D.h"


class GameWorld;
class SteeringBehavior;

class AgentLeader : public Vehicle
{
public:
    AgentLeader(GameWorld* world,
        Vector2D position,
        double    rotation,
        Vector2D velocity,
        double    mass,
        double    max_force,
        double    max_speed,
        double    max_turn_rate,
        double    scale);


};

