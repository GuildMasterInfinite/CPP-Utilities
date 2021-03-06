#if defined _WIN32
extern "C"
{
	// If you build an .exe with this file, the application
	// will use the high performance GPU in a notebook system with 2 graphics cards.
	// Source: StackOverflow, GLFW

	// NVIDIA Optimus
	__declspec(dllexport) unsigned int NvOptimusEnablement = 1;

	// AMD Power XPress
	__declspec(dllexport) int AmdPowerXpressRequestHighPerformance = 1;
}
#endif
