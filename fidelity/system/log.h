#pragma once

enum class LogLevel {
	INFO,
	WARNING,
	_ERROR // gotta to use _ because ERROR is used i think
};

namespace fidelity {
	namespace DebugTools {
		void Log(LogLevel level, const char* message);
	}
}
