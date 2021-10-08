#pragma once

#ifdef STC_PLAT_WIN
	#ifdef STC_BUILD_DLL
		#define STC_API __declspec(dllexport)
	#else
		#define STC_API __declspec(dllimport)
	#endif
#else
	#error Steritic does only support Windows at the moment

#endif