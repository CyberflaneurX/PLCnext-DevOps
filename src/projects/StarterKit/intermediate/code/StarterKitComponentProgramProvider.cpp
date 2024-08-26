#include "StarterKitComponentProgramProvider.hpp"
#include "StarterKitProgram.hpp"

namespace StarterKit
{

IProgram::Ptr StarterKitComponentProgramProvider::CreateProgramInternal(const String& programName, const String& programType)
{
    if (programType == "StarterKitProgram")
    { 
        return std::make_shared<::StarterKit::StarterKitProgram>(this->starterKitComponent, programName);
    }

    // else unknown program
    return nullptr;
}

} // end of namespace StarterKit
