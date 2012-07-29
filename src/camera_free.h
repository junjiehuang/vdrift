/************************************************************************/
/*                                                                      */
/* This file is part of VDrift.                                         */
/*                                                                      */
/* VDrift is free software: you can redistribute it and/or modify       */
/* it under the terms of the GNU General Public License as published by */
/* the Free Software Foundation, either version 3 of the License, or    */
/* (at your option) any later version.                                  */
/*                                                                      */
/* VDrift is distributed in the hope that it will be useful,            */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of       */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        */
/* GNU General Public License for more details.                         */
/*                                                                      */
/* You should have received a copy of the GNU General Public License    */
/* along with VDrift.  If not, see <http://www.gnu.org/licenses/>.      */
/*                                                                      */
/************************************************************************/

#ifndef _CAMERA_FREE_H
#define _CAMERA_FREE_H

#include "camera.h"

class CAMERA_FREE : public CAMERA
{
public:
	CAMERA_FREE(const std::string & name);

	void SetOffset(const MATHVECTOR <float, 3> & value);

	void Reset(const MATHVECTOR <float, 3> & newpos, const QUATERNION <float> & newquat);

	void Rotate(float up, float left);

	void Move(float dx, float dy, float dz);

private:
	MATHVECTOR <float, 3> offset;
	float leftright_rotation;
	float updown_rotation;
};

#endif // _CAMERA_FREE_H
