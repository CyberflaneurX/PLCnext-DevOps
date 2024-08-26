#pragma once
#include "Arp/System/Core/Arp.h"
#include "Arp/Plc/Commons/Esm/ProgramBase.hpp"
#include "Arp/System/Commons/Logging.h"
#include "StarterKitComponent.hpp"

namespace StarterKit
{

using namespace Arp;
using namespace Arp::System::Commons::Diagnostics::Logging;
using namespace Arp::Plc::Commons::Esm;

//#program
//#component(StarterKit::StarterKitComponent)
class StarterKitProgram : public ProgramBase, private Loggable<StarterKitProgram>
{
public: // typedefs

public: // construction/destruction
    StarterKitProgram(StarterKit::StarterKitComponent& starterKitComponentArg, const String& name);
    StarterKitProgram(const StarterKitProgram& arg) = delete;
    virtual ~StarterKitProgram() = default;

public: // operators
    StarterKitProgram&  operator=(const StarterKitProgram& arg) = delete;

public: // properties

public: // operations
    void    Execute() override;

public: /* Ports
           =====
           Ports are defined in the following way:
           //#port
           //#attributes(Input|Retain)
           //#name(NameOfPort)
           boolean portField;

           The attributes comment define the port attributes and is optional.
           The name comment defines the name of the port and is optional. Default is the name of the field.
        */

private: // fields
    StarterKit::StarterKitComponent& starterKitComponent;

};

///////////////////////////////////////////////////////////////////////////////
// inline methods of class ProgramBase
inline StarterKitProgram::StarterKitProgram(StarterKit::StarterKitComponent& starterKitComponentArg, const String& name)
: ProgramBase(name)
, starterKitComponent(starterKitComponentArg)
{
}

} // end of namespace StarterKit
