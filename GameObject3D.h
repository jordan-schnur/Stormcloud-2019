#pragma once
#include "GameObject.h"
#include "glm/glm.hpp"
#include <GL/gl3w.h>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

namespace Stormcloud {
	const GLchar* vertexSource = R"glsl(
    #version 150 core
    in vec2 position;
    in vec3 color;
    out vec3 Color;
    void main()
    {
        Color = color;
        gl_Position = vec4(position, 0.0, 1.0);
    }
)glsl";
	const GLchar* fragmentSource = R"glsl(
    #version 150 core
    in vec3 Color;
    out vec4 outColor;
    void main()
    {
        outColor = vec4(Color, 1.0);
    }
)glsl";

	GLfloat vertices[] = {
			-0.5f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f,  0.5f, -0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f,  0.5f, -0.5f, 1.0f, 1.0f, 1.0f,
			-0.5f,  0.5f, -0.5f, 1.0f, 1.0f, 1.0f,
			-0.5f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f,

			-0.5f, -0.5f,  0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f, -0.5f,  0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f,  0.5f,  0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f,  0.5f,  0.5f, 1.0f, 1.0f, 1.0f,
			-0.5f,  0.5f,  0.5f, 1.0f, 1.0f, 1.0f,
			-0.5f, -0.5f,  0.5f, 1.0f, 1.0f, 1.0f,

			-0.5f,  0.5f,  0.5f, 1.0f, 1.0f, 1.0f,
			-0.5f,  0.5f, -0.5f, 1.0f, 1.0f, 1.0f,
			-0.5f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f,
			-0.5f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f,
			-0.5f, -0.5f,  0.5f, 1.0f, 1.0f, 1.0f,
			-0.5f,  0.5f,  0.5f, 1.0f, 1.0f, 1.0f,

			 0.5f,  0.5f,  0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f,  0.5f, -0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f, -0.5f,  0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f,  0.5f,  0.5f, 1.0f, 1.0f, 1.0f,

			-0.5f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f, -0.5f,  0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f, -0.5f,  0.5f, 1.0f, 1.0f, 1.0f,
			-0.5f, -0.5f,  0.5f, 1.0f, 1.0f, 1.0f,
			-0.5f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f,

			-0.5f,  0.5f, -0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f,  0.5f, -0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f,  0.5f,  0.5f, 1.0f, 1.0f, 1.0f,
			 0.5f,  0.5f,  0.5f, 1.0f, 1.0f, 1.0f,
			-0.5f,  0.5f,  0.5f, 1.0f, 1.0f, 1.0f,
			-0.5f,  0.5f, -0.5f, 1.0f, 1.0f, 1.0f,
	};

class GameObject3D :
	public GameObject
{
public:
	GameObject3D();
	~GameObject3D();
	void setSize(glm::vec3 Size);
	void setPosition(glm::vec3 Position);
	void setRotation(glm::vec3 Rotation);
	void calculateMatrix();
private:
	glm::mat4 modelMatrix = glm::mat4();
};

}