#pragma once
#include "Actor.h"

class Ball : public Actor
{
public:
	Ball();
	Ball(glm::vec4 color, float radius);
	~Ball() {}

	bool draw() override;

protected:
	glm::vec4 m_color;
	float m_radius;
};

