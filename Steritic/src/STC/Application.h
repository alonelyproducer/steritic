#pragma once

#include "Core.h"

namespace STC
{
	class STC_API Application
	{

	public:
		Application();

		virtual ~Application();
		static auto run() -> void; 
	};

	//DEFINED IN CLIENT!
	Application* CreateApplication();


}

