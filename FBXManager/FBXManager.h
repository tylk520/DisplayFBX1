#pragma once

struct Vertex4f
{
	float x;
	float y;
	float z;
	float w;
};
class FBXManager
{
public:
	FBXManager();
	~FBXManager();

	bool ImportFbx(char*);
	int GetVertexs(Vertex4f**);

private:


};

