#include "Ball.h"
#include <Gizmos.h>
#include <glm/gtx/transform.hpp>

Ball::Ball()
{
	m_color = glm::vec4(0.5f, 0.5f, 0.5f, 1.0f);
	m_radius = 1.0f;
}

Ball::Ball(glm::vec4 color, float radius)
{
	m_color = color;
	m_radius = radius;
}

bool Ball::draw()
{
	//Build a transform matrix
	glm::mat4 transform = getTransform();
	//Draw the transform
	aie::Gizmos::addTransform(transform, m_radius * 2.0f);
	//Draw the ball
	aie::Gizmos::addSphere(glm::vec3(0.0f), m_radius, 6 * m_radius, 6 * m_radius, m_color, &transform);

	return true;
}
