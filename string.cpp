#include "string.h"

String::String(const char* string)
{
	m_Size = strlen(string);
	m_Buffer = new char[m_Size+1];
    memcpy(m_Buffer, string, m_Size);
	m_Buffer[m_Size] = '\0';
}

String::~String()
{
    delete[] m_Buffer;
}
unsigned int String::length() const
{
	return m_Size;
}

char& String::operator[](unsigned int index)
{
    return m_Buffer[index];
}

// To make this class able to work with cout <<
std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.m_Buffer;
    return stream;
}