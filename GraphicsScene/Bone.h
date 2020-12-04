#pragma once
#include "Actor.h"

class Bone : public Actor
{
public:
	Bone(Actor startFrame, Actor endFrame);//!<Create a Bone With a starting position and a ending position
	~Bone() {}

	bool update(double deltaTime) override; //!< Interpolate between Staring Frame and Ending Frame
	bool draw() override; //!< Draw each frame of animation

private:
	Actor m_startFrame;//!< The actor at the start of the animation
	Actor m_endFrame; //!< Actor at the end of the animation
};

