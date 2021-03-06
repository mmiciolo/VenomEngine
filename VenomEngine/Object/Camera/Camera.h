/*
File : Camera.h
Author: Matthew Micciolo

A base class for a camera. Provides some very basic functions.
The user will have to extend this to add input.
*/

#ifndef __CAMERA_
#define __CAMERA_

#include "../VenomObject.h"
#include "../../Graphics/Direct3D10Includes.h"

namespace VenomEngine {
	class Camera : public VenomObject {
	public:
		Camera();
		void Init();
		void Update();
		void Render();
		D3DXMATRIX GetView();
		D3DXMATRIX GetProjection();
	protected:
	private:
		D3DXVECTOR3 Target;
		D3DXVECTOR3 Up;
		D3DXMATRIX View;
		D3DXMATRIX Projection;
	};
}

#endif