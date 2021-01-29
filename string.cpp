#include "string.h"

String::String(const char* string)
{
	m_Size = strlen(string);
	m_Buffer = new char[m_Size+1];
    memcpy(m_Buffer, string, m_Size);
	m_Buffer[m_Size] = '\0';
}

unsigned int String::length() const
{
	return m_Size;
}

// To make this class able to work with cout <<
std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.m_Buffer;
    return stream;
}