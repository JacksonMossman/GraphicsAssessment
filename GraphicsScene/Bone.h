#pragma once
#include "Actor.h"

class Bone : public Actor
{
public:
	Bone(Actor startFrame, Actor endFrame);
	~Bone() {}

	bool update(double deltaTime) override;
	bool draw() override;

private:
	Actor m_startFrame;
	Actor m_endFrame;
};

