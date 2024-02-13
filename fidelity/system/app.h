#include "freeglut/include/GL/freeglut.h"

class App
{
    public:
        App();
        virtual ~App();
        void Init(int argc, char** argv);
        const char* m_title;
        static void Display();
};