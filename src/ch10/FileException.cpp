#include "FileException.h"

FileException::FileException(const char* error) :
    m_error(error)
{
}

const char* FileException::What() const{
    return m_error.c_str();
}

OpenFileException::OpenFileException(const char* filename):
    FileException("can't open file.")
{
    m_error += "\n filename:";
    m_error += filename;
}

ReadFileException::ReadFileException():
    FileException("can't read file.")
{
}

