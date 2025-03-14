#version 330 core
out vec4 FragColor;

in vec3 ourColor;
in vec2 TexCoord;

uniform sampler2D text1;
uniform sampler2D text2;

void main()
{
//    FragColor = vec4(ourColor, 1.0f);
    FragColor = mix(texture(text1, TexCoord) * vec4(ourColor, 1.0), texture(text2, TexCoord), 0.2);
}