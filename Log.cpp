#include "Log.h"

void Log::SetLogLevel(int level)
{
    m_LogLevel = level;
}

void Log::info(const String& msg, int priority) // const means this method is not going to modify any data inside this class
    const
{
    if (m_LogLevel >= LOG_INFO)
        std::cout << "[Info]: " << msg << std::endl;
}

void Log::warn(const String& msg, int priority) const
{
    if (m_LogLevel >= LOG_WARN)
        std::cout << "[Warning]: " << msg << std::endl;
}

void Log::error(const String& msg, int priority) const
{
    if (m_LogLevel >= LOG_ERROR)
        std::cout << "[Error]: " << msg << std::endl;
}
