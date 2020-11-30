#include "Skeleton.h"

Skeleton::Skeleton()
{
	m_bones = {};
}

bool Skeleton::update(double deltaTime)
{
	for each (Bone* b in m_bones)
	{
		b->update(deltaTime);
	}
	return true;
}

bool Skeleton::draw()
{
	for each (Bone* b in m_bones)
	{
		b->draw();
	}
	return true;
}

void Skeleton::addBone(Bone* bone)
{
	m_bones.push_back(bone);
}
