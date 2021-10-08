#include <STC.h>


class Sandbox : public STC::Application
{
public:
	Sandbox()
	{
		
	}

	~Sandbox()
	{
		
	}
};

STC::Application* STC::CreateApplication()
{
	return new Sandbox();
}