#pragma once
#include "Arp/System/Core/Arp.h"
#include "Arp/Plc/Commons/Esm/ProgramBase.hpp"
#include "Arp/System/Commons/Logging.h"
#include "StaterKitComponent.hpp"

namespace StaterKit
{

using namespace Arp;
using namespace Arp::System::Commons::Diagnostics::Logging;
using namespace Arp::Plc::Commons::Esm;

//#program
//#component(StaterKit::StaterKitComponent)
class StaterKitProgram : public ProgramBase, private Loggable<StaterKitProgram>
{
public: // typedefs

public: // construction/destruction
    StaterKitProgram(StaterKit::StaterKitComponent& staterKitComponentArg, const String& name);
    StaterKitProgram(const StaterKitProgram& arg) = delete;
    virtual ~StaterKitProgram() = default;

public: // operators
    StaterKitProgram&  operator=(const StaterKitProgram& arg) = delete;

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
    StaterKit::StaterKitComponent& staterKitComponent;

};

///////////////////////////////////////////////////////////////////////////////
// inline methods of class ProgramBase
inline StaterKitProgram::StaterKitProgram(StaterKit::StaterKitComponent& staterKitComponentArg, const String& name)
: ProgramBase(name)
, staterKitComponent(staterKitComponentArg)
{
}

} // end of namespace StaterKit
