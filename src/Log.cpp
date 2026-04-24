#include "Log.h"

namespace Log {

	LOG_LEVEL logLevel = INFO;

	void info(std::string msg) {
		if (logLevel == INFO || logLevel == WARNING || logLevel == ERROR || logLevel == SECRET) {
			std::cout << "INFO: " << msg << std::endl;
		}
	}

	void warning(std::string msg) {
		if (logLevel == WARNING || logLevel == ERROR || logLevel == SECRET) {
			std::cout << "WARNING: " << msg << std::endl;
		}
	}

	void error(std::string msg) {
		if (logLevel == ERROR || logLevel == SECRET) {
			std::cout << "ERROR: " << msg << std::endl;
		}
	}

	void secret(std::string msg) {
		if (logLevel == SECRET) {
			std::cout << "SECRET: " << msg << std::endl;
		}
	}

	void setLogLevel(LOG_LEVEL option) {
		logLevel = option;
	}
}