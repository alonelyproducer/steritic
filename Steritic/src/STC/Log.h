#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
namespace STC
{
	class STC_API Log
	{
	public:
		static void Init();

		inline static auto get_core_logger() -> std::shared_ptr<spdlog::logger>& { return s_core_logger; }
		inline static auto get_client_logger() -> std::shared_ptr<spdlog::logger>& { return s_client_logger; }
	private:
		static std::shared_ptr<spdlog::logger> s_core_logger;
		static std::shared_ptr<spdlog::logger> s_client_logger;

	};
}


#define STC_CORE_TRACE(...) ::STC::Log::get_core_logger()->trace(__VA_ARGS__)
#define STC_CORE_DEBUG(...) ::STC::Log::get_core_logger()->debug(__VA_ARGS__)
#define STC_CORE_INFO(...) ::STC::Log::get_core_logger()->info(__VA_ARGS__)
#define STC_CORE_ERROR(...) ::STC::Log::get_core_logger()->error(__VA_ARGS__)
#define STC_CORE_WARN(...) ::STC::Log::get_core_logger()->warn(__VA_ARGS__)
#define STC_CORE_CRITICAL(...) ::STC::Log::get_core_logger()->critical(__VA_ARGS__)

#define STC_TRACE(...) ::STC::Log::get_client_logger()->trace(__VA_ARGS__)
#define STC_DEBUG(...) ::STC::Log::get_client_logger()->debug(__VA_ARGS__)
#define STC_INFO(...) ::STC::Log::get_client_logger()->info(__VA_ARGS__)
#define STC_ERROR(...) ::STC::Log::get_client_logger()->error(__VA_ARGS__)
#define STC_WARN(...) ::STC::Log::get_client_logger()->warn(__VA_ARGS__)
#define STC_CRITICAL(...) ::STC::Log::get_client_logger()->critical(__VA_ARGS__)
