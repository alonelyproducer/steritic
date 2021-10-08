#include "Log.h"


namespace STC
{
	 std::shared_ptr<spdlog::logger> Log::s_core_logger;
	 std::shared_ptr<spdlog::logger> Log::s_client_logger;

	void Log::Init()
	{
		spdlog::set_pattern("%^>>> %c <<< --- [%t | %P] - %n -> %v <<<%$");

		s_core_logger = spdlog::stdout_color_mt("Steritic");
		s_core_logger->set_level(spdlog::level::trace);

		s_client_logger = spdlog::stdout_color_mt("Client");
		s_client_logger->set_level(spdlog::level::trace);

	}


}
