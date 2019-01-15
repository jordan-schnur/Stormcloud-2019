#include "GameObject.h"

using namespace Stormcloud;


GameObject::GameObject()
{
	

}


GameObject::~GameObject()
{
}

glm::vec3 GameObject::getPosition()
{
	return this->Position;
}

glm::vec3 GameObject::getSize()
{
	return this->Size;
}

glm::vec3 GameObject::getRotation() {
	return this->Rotation;
}
