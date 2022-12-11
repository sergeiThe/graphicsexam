#ifndef TEXTURE_H
#define TEXTURE_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <string>

class Texture
{
	unsigned rendererID;
	std::string filePath;
	unsigned char *localBuffer;
	int width, height, bpp;

public:
	Texture(const std::string &path);
	~Texture();

	void bind(unsigned int slot = 0) const;
	void unbind() const;

	inline int getWidth() { return width; }
	inline int getHeight() { return height; }
};

#endif
