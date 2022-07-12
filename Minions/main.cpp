#include "Includes.h"
#include "Render.hpp"
int main()
{
	g_Globals.Title = "Minions";
	std::thread MoveThread(Render::MoveWindow);
	Render::Start();
}
