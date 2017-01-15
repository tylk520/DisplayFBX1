#pragma once
#ifdef FBXMANAGER_EXPORTS
	#define dlllib __declspec(dllexport)
#else
	#define dlllib __declspec(dllimport)
#endif // FBXMANAGER_EXPORTS

struct Vertex4f
{
	float x;
	float y;
	float z;
	float w;
};
class dlllib FBXManager
{
public:
	FBXManager();
	~FBXManager();

	bool ImportFbx(char*);
	int GetVertexs(Vertex4f**);

private:


};

