#pragma once


#ifdef STC_PLAT_WIN

extern STC::Application* STC::CreateApplication();

int main(int argc, char** argv)
{

	auto app = STC::CreateApplication();
	app->run();
	delete app;
}
#endif