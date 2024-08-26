#pragma once
#include "Arp/System/Core/Arp.h"
#include "Arp/Plc/Commons/Esm/ProgramProviderBase.hpp"

namespace StarterKit
{

using namespace Arp;
using namespace Arp::Plc::Commons::Esm;

//forwards
class StarterKitComponent;

class StarterKitComponentProgramProvider : public ProgramProviderBase
{

public:   // construction/destruction
    StarterKitComponentProgramProvider(StarterKitComponent& starterKitComponentArg);
    virtual ~StarterKitComponentProgramProvider() = default;

public:   // IProgramProvider operations
    IProgram::Ptr CreateProgramInternal(const String& programName, const String& programType) override;

private:   // deleted methods
    StarterKitComponentProgramProvider(const StarterKitComponentProgramProvider& arg) = delete;
    StarterKitComponentProgramProvider& operator=(const StarterKitComponentProgramProvider& arg) = delete;

private: // fields
    StarterKitComponent& starterKitComponent;
};

///////////////////////////////////////////////////////////////////////////////
// inline methods of class StarterKitComponentProgramProvider

inline StarterKitComponentProgramProvider::StarterKitComponentProgramProvider(StarterKitComponent& starterKitComponentArg)
    : starterKitComponent(starterKitComponentArg)
{
}

} // end of namespace StarterKit
