#pragma once
#include <iostream>
#include "glad/glad.h"
#include "Mesh.h"
#include "Material.h"


class Triangle

{
	Mesh* mesh;
	Material* material;

public:
	Triangle(Mesh* _mesh, Material* _material) {
		mesh = _mesh;
		material = _material;


	}

	void render() {

		material->use();
		mesh->render();
	}

};

