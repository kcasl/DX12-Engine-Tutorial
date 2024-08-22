#pragma once


#ifdef DX12E_EXPORTS

#define YT_API __declspec(dllexport)

#else

#define YT_API __declspec(dllimport)

#endif // DX12E_EXPORTS