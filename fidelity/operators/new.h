#include <cstdio>
#include <memory>
#include "../system/log.h"
#define fidelity_new new
#define fidelity_delete delete
void *operator new(size_t _Size)
{
    using std::printf;
    fidelity::DebugTools::Log(LogLevel::INFO, "called new");
    return malloc(_Size);
}

void operator delete(void *_Block)
{
    using std::printf;
    fidelity::DebugTools::Log(LogLevel::INFO, "called delete");
    free(_Block);
}