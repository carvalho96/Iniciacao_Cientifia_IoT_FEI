#pragma once
#include "Vertex.h"
class VertexPerson :	public Vertex
{
private:
	std::string name;

public:
    void setname(string nome) ;
    std::string getname();
	bool operator>(VertexPerson a);
    bool operator==(VertexPerson a);
	VertexPerson();
	~VertexPerson();
};

