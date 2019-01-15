#include <glm/glm.hpp>

namespace Stormcloud {

	enum class ObjectType3D: unsigned int {
		Rectangle,Sphere,Plane 
	};
	enum class ObjectType2D: unsigned int {
		Circle, Rectangle
	};



#pragma once
class GameObject
{
public:
	GameObject();
	~GameObject();
	glm::vec3 getPosition();
	glm::vec3 getSize();
	glm::vec3 getRotation();
	virtual void setPosition(glm::vec3 Position);
	virtual void setRotation(glm::vec3 Rotation);
	virtual void setSize(glm::vec3 Size);
protected:
	glm::vec3 Position = glm::vec3();
	glm::vec3 Size = glm::vec3();
	glm::vec3 Rotation = glm::vec3();
};

}