#include "system/log.h"
#include "operators/new.h"

int main() {

	int* a = fidelity_new int(5);
	// or
	int* b = new int(5);
	fidelity::DebugTools::Log(LogLevel::INFO, "1");
	fidelity::DebugTools::Log(LogLevel::WARNING, "2");
	fidelity::DebugTools::Log(LogLevel::_ERROR, "3");
	fidelity_delete a;
	delete b;
	return 0;
}