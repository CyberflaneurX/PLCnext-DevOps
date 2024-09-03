#pragma once

/* Class that will allow error catching*/

namespace Utils
{

class Error
{
  public:
    virtual bool hasWarning()    = 0;
    virtual bool hasError()      = 0;
    virtual void clearWarnings() = 0;
    virtual void clear()         = 0;
};

} // namespace Utils