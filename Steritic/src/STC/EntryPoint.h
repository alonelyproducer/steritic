#pragma once


#ifdef STC_PLAT_WIN

extern STC::Application* STC::CreateApplication();

int main(int argc, char** argv)
{
	const char* d = "D";
	STC::Log::Init();
	STC_CORE_INFO("hello");
	STC_CRITICAL("ERROR, please contact admin");
	STC_CORE_TRACE(d);
	auto app = STC::CreateApplication();
	app->run();
	delete app;
}
#endif