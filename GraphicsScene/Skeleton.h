#pragma once
#include "Actor.h"
#include "Bone.h"
#include <vector>

class Skeleton : public Actor
{
public:
	Skeleton();
	~Skeleton() {}

	bool update(double deltaTime) override;
	bool draw() override;

	void addBone(Bone* bone);

private:
	std::vector<Bone*> m_bones;
};

