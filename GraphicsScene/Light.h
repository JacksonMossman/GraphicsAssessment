#pragma once
#include "Actor.h"

class Light
{
public:
	glm::vec3 getDirection() { return m_direction; } //!< Return Direction of light
	void setDirection(glm::vec3 direction) { m_direction = direction; }//!< set Direction of light
	glm::vec3 getAmbient() { return m_ambient; }//!< Return Ambient value
	void setAmbient(glm::vec3 ambient) { m_ambient = ambient; }//!< Set Ambient Value
	glm::vec3 getDiffuse() { return m_diffuse; } //!< Return diffuse Value
	void setDiffuse(glm::vec3 diffuse) { m_diffuse = diffuse; }//!< Set Diffuse Values
	glm::vec3 getSpecular() { return m_specular; }//!< Return Specular
	void setSpecular(glm::vec3 specular) { m_specular = specular; }//!< set Specular

private:
	glm::vec3 m_direction;//!< The direction this light is facing 
	glm::vec3 m_ambient;//!< The amount this light will spread from its hit point
	glm::vec3 m_diffuse;//!< Affects how a light Reflects off a surface
	glm::vec3 m_specular;//!<  Affects how a light Reflects off a surface and where the View is 
};

