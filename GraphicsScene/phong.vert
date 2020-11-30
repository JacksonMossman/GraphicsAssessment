//Classic Phong vertex shader
#version 410

layout (location = 0) in vec4 aPosition;
layout (location = 1) in vec4 aNormal;
layout (location = 2) in vec2 aTexCoord;
layout (location = 4) in vec4 aColor;

out vec4 vPosition;
out vec3 vNormal;
out vec4 vColor;
out vec2 vTexCoord;

uniform mat4 ProjectionViewModel;
uniform mat4 ModelMatrix;
uniform mat3 NormalMatrix;
uniform float time;

void main() {
	//move the tree a bit and mess with normal over time
	vec4 VarianceV4 = vec4(cos(12.0-time*2.0)*0.13,cos(12.0-time*7.0)*0.07,cos(12.0-time*4.0)*0.23,1);
	vec3 VarianceV3 = vec3(cos(12.0-time*2.0)*0.06,cos(12.0-time*7.0)*0.06,cos(12.0-time*4.0)*0.503);
	vPosition = ModelMatrix * aPosition;
	vNormal = NormalMatrix * aNormal.xyz + VarianceV3;
	vColor = aColor;
	vTexCoord = aTexCoord;
	gl_Position = ProjectionViewModel * aPosition + VarianceV4;
	
}