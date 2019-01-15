#include "GameObject3D.h"

using namespace Stormcloud;


GameObject3D::GameObject3D()
{
}

void GameObject3D::setSize(glm::vec3 Size) {
	this->Size = Size;
	calculateMatrix();
}

void GameObject3D::setPosition(glm::vec3 Position)
{
	this->Position = Position;
	calculateMatrix();
}

void GameObject3D::setRotation(glm::vec3 Rotation)
{
	this->Position = Position;
	calculateMatrix();
}

void Stormcloud::GameObject3D::calculateMatrix()
{
	glm::mat4 newModelMatrix = glm::mat4();

	glm::scale(newModelMatrix, Size);
	if (Rotation.x != 0)
		glm::rotate(newModelMatrix, Rotation.x, glm::vec3(1, 0, 0));
	if (Rotation.y != 0)
		glm::rotate(newModelMatrix, Rotation.y, glm::vec3(0, 1, 0));
	if (Rotation.z != 0)
		glm::rotate(newModelMatrix, Rotation.z, glm::vec3(0, 0, 1));
	glm::translate(newModelMatrix, Position);
}




GameObject3D::~GameObject3D()
{
}
