#include <windows.h>
#include <stdio.h>
#define DARK_GRAY "\033[1;30m"
#define RESET "\033[0m"
#define RED "\033[1;31m"
enum class LogLevel {
	INFO,
	WARNING,
	_ERROR // gotta to use _ because ERROR is used i think
};

namespace fidelity
{
	typedef unsigned char u8;
	typedef unsigned short u16;
}

namespace fidelity
{
	namespace DebugTools
	{
		/*void __open_console() {
			AllocConsole();
			freopen("CONOUT$", "w", stdout);
		}*/
		void Log(LogLevel level, const char* message) {
			switch (level) {
			case LogLevel::INFO:
				printf("%s[", DARK_GRAY);
				printf("%sinfo", RESET);
				printf("%s]%s ", DARK_GRAY, RESET);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				break;
			case LogLevel::WARNING:
				printf("%s[", DARK_GRAY);
				printf("%swarning", RESET);
				printf("%s]%s ", DARK_GRAY, RESET);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				break;
			case LogLevel::_ERROR:
				printf("%s[", DARK_GRAY);
				printf("%serror", RED);
				printf("%s]%s ", DARK_GRAY, RESET);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				break;
			}
			printf("%s\n", message);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		}

	}
}

int main() {
	fidelity::DebugTools::Log(LogLevel::INFO, "1");
	fidelity::DebugTools::Log(LogLevel::WARNING, "2");
	fidelity::DebugTools::Log(LogLevel::_ERROR, "3");
	return 0;
}