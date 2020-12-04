#pragma once
#include <Texture.h>
#include "Actor.h"
#include "Mesh.h"

class Earth : public Actor
{
public:
	Earth(glm::vec3 position, glm::quat rotation, glm::vec3 scale = { 1.0f, 1.0f, 1.0f });

	bool start() override;//!< Starts earth
	bool draw() override;//!< Draws Earth

private:
	Mesh m_mesh; //!<Earths Mesh
	aie::Texture m_texture;//!< Earths Texture
};

