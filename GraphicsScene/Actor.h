#pragma once
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtx/quaternion.hpp>

class Actor
{
public:
	Actor() {}
	Actor(glm::vec3 position, glm::quat rotation, glm::vec3 scale = { 1.0f, 1.0f, 1.0f });
	~Actor() {}

	virtual bool start() { return true; }//!< Starts This Actor
	virtual bool update(double deltaTime) { return true; }//!< Updates This Actor
	virtual bool draw() { return true; }//!< Draws this actor
	virtual bool end() { return true; }//!< delete this actor

	glm::vec3 getPosition() { return m_position; }//!< Return the Position 
	void setPosition(glm::vec3 position) { m_position = position; } //!< set Position
	glm::quat getRotation() { return m_rotation; } //!< Return th Rotation
	void setRotation(glm::quat rotation) { m_rotation = rotation; }//!< set Rotation
	glm::vec3 getScale() { return m_scale; }//!< Return Scale
	void setScale(glm::vec3 scale) { m_scale = scale; }//!< set Scale
	glm::mat4 getTransform();//!< Return the transform

	Actor* getParent() { return m_parent; } //!< This Actor Parent 
	void setParent(Actor* parent) { m_parent = parent; } //!< Set this actors parent
	glm::vec3 getParentPosition();//!< Return the Parents Position
	glm::quat getParentRotation();//!< Return the parents Rotation

protected:
	glm::vec3 m_position{ 0.0f, 0.0f, 0.0f };//!<Objects Postion
	glm::quat m_rotation{ 1.0f, 0.0f, 0.0f, 0.0f };//!< Actors Rotation
	glm::vec3 m_scale{ 1.0f, 1.0f, 1.0f };//!< Actors Scale

private:
	Actor* m_parent = nullptr;//!< Actors Parent
};

