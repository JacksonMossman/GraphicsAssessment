#pragma once
#include <gl_core_4_4.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <Gizmos.h>
#include <Texture.h>
#include "OBJMesh.h"
#include "Shader.h"
#include "Mesh.h"
#include "Light.h"
#include "Ball.h"
#include "Bone.h"
#include "Skeleton.h"
#include "Earth.h"
#include <vector>

class Camera;

class Game
{
public:
	Game();
	Game(int width, int height, const char* title);
	~Game();

	int run();//!< Runs Program

	bool start();//!< Returns if the program started successfully
	bool update(double deltaTime); //!< Returns if the game updated successfully
	bool draw();//!< Returns if the game Drew Successfully
	bool end();//!< Returns if the game ended Successfully

	GLFWwindow* getWindow() { return m_window; } //!< returns a refrence to the window
	int getWidth() { return m_width; }//!< returns the windows width
	int getHeight() { return m_height; }//!< Return the windows height
	const char* getTitle() { return m_title; } //!< return windows title
	int NumberOfTrees = 10; //!< The number of tree that will be generated
	std::vector<aie::OBJMesh> trees;//!< the list of all trees
protected:
	GLFWwindow*	m_window;//!< The programs window
	Camera*		m_camera;//!< The Games Camera

	aie::ShaderProgram	m_shader;//!< this programs Shader

	Light m_light;//!< The First Light
	Light m_light2;//!< The Second Light

	aie::OBJMesh		m_objMesh; //!< the mesh of the Normal looking tree

	glm::mat4			m_meshTransform;//!<  The Transform of the Normal looking Tree

	Earth* m_earth;//!< Not Rendered

	Mesh				m_mesh; //!< Not Rendered
	aie::Texture		m_texture;//!< Not Rendered

	Bone*		m_hipBone;//!< Not Rendered
	Bone*		m_kneeBone;//!< Not Rendered
	Bone*		m_ankleBone;//!< Not Rendered
	Skeleton*	m_skeleton;//!< Not rendered


private:
	int m_width, m_height; //!< The Windows width and height
	const char* m_title; //!< Title of the window
	
};

