#pragma once
#include "Actor.h"

class Ball : public Actor
{
public:
	Ball();
	Ball(glm::vec4 color, float radius);//!< Create Ball Based off Given Color and Radius
	~Ball() {}

	bool draw() override;

protected:
	glm::vec4 m_color;//!< This Ball's Color
	float m_radius; //!< Radius of the Ball
};

