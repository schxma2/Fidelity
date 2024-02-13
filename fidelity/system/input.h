#pragma once


#include "freeglut/include/GL/freeglut.h"
#include "types.h"
#include "log.h"


namespace fidelity
{
	namespace Input
	{
		static void Keyboard(unsigned char key, int x, int y)
		{
			using namespace fidelity;
			int vkey = 'E';
			// check is e is pressed
			if (GetAsyncKeyState(vkey))
				DebugTools::Log(LogLevel::INFO, "Pressed key with ASCII code %d", vkey);

		}
	}
} // namespace fidelity