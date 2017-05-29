#ifndef FILEEXCEPTION_H_
#define FILEEXCEPTION_H_

#include "Exception.h"
#include <string>

class FileException : public Exception 
{
 public:
    FileException(const char* error);
 public:
    virtual const char* What() const;
 protected:
    std::string m_error;
};

class OpenFileException:
public FileException
{
 public:
    OpenFileException(const char* filename);
};

class ReadFileException:
public FileException
{
 public:
    ReadFileException();
};

#endif
