#pragma once
#include <iostream>

namespace Log
{
	enum LOG_LEVEL {
		NONE,
		INFO,
		WARNING,
		ERROR,
		SECRET
	};
	
	extern LOG_LEVEL logLevel;

	void info(std::string msg);
	void warning(std::string msg);
	void error(std::string msg);
	void secret(std::string msg);
	void setLogLevel(LOG_LEVEL);
}