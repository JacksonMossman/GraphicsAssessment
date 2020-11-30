// A simple color shader
#version 410

in vec4 vColor;
in vec2 vTexCoord;

uniform sampler2D diffuseTexture;

out vec4 FragColor;

void main() {
	FragColor = texture(diffuseTexture, vTexCoord) + vColor;
}