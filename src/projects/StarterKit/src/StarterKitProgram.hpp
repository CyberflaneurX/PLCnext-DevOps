#pragma once
#include "Arp/Plc/Commons/Esm/ProgramBase.hpp"
#include "Arp/System/Commons/Logging.h"
#include "Arp/System/Core/Arp.h"
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
    StarterKitProgram(StarterKit::StarterKitComponent &starterKitComponentArg, const String &name);
    StarterKitProgram(const StarterKitProgram &arg) = delete;
    virtual ~StarterKitProgram()                    = default;

  public: // operators
    StarterKitProgram &operator=(const StarterKitProgram &arg) = delete;

  public: // properties
  public: // operations
    void Execute() override;

  public: /* Ports
             =====
             Ports are defined in the following way:
             //#port
             //#attributes(Input|Retain)
             //#name(NameOfPort)
             boolean portField;

             The attributes comment define the port attributes and is optional.
             The name comment defines the name of the port and is optional. Default is the name of
             the field.
          */
    // Inputs

    //#port
    //#attributes(Input|Opc)
    //#name(DIN01)
    Arp::boolean digitalIn1;

    //#port
    //#attributes(Input|Opc)
    //#name(DIN02)
    Arp::boolean dIN02;

    //#port
    //#attributes(Input|Opc)
    //#name(DIN03)
    Arp::boolean dIN03;

    //#port
    //#attributes(Input|Opc)
    //#name(DIN04)
    Arp::boolean dIN04;

    //#port
    //#attributes(Input|Opc)
    //#name(DIN05)
    Arp::boolean dIN05;

    //#port
    //#attributes(Input|Opc)
    //#name(DIN06)
    Arp::boolean dIN06;

    //#port
    //#attributes(Input|Opc)
    //#name(DIN07)
    Arp::boolean dIN07;

    //#port
    //#attributes(Input|Opc)
    //#name(DIN08)
    Arp::boolean dIN08;

    //#port
    //#attributes(Input|Opc)
    //#name(DIN09)
    Arp::boolean dIN09;

    //#port
    //#attributes(Input|Opc)
    //#name(DIN10)
    Arp::boolean dIN10;

    //#port
    //#attributes(Input|Opc)
    //#name(DIN11)
    Arp::boolean dIN11;

    //#port
    //#attributes(Input|Opc)
    //#name(DIN12)
    Arp::boolean dIN12;

    //#port
    //#attributes(Input|Opc)
    //#name(DIN13)
    Arp::boolean dIN13;

    //#port
    //#attributes(Input|Opc)
    //#name(DIN14)
    Arp::boolean dIN14;

    //#port
    //#attributes(Input|Opc)
    //#name(DIN15)
    Arp::boolean dIN15;

    //#port
    //#attributes(Input|Opc)
    //#name(DIN16)
    Arp::boolean dIN16;

    //#port
    //#attributes(Input|Opc)
    //#name(AIN1)
    Arp::uint32 aiN1;

    //#port
    //#attributes(Input|Opc)
    //#name(AIN2)
    Arp::uint32 aiN2;

    //#port
    //#attributes(Input|Opc)
    //#name(AIN3)
    Arp::uint32 aiN3;

    //#port
    //#attributes(Input|Opc)
    //#name(AIN4)
    Arp::uint32 aiN4;

    // Outputs

    //#port
    //#attributes(Output|Opc)
    //#name(DOUT01)
    Arp::boolean dOUT01;

    //#port
    //#attributes(Output|Opc)
    //#name(DOUT02)
    Arp::boolean dOUT02;

    //#port
    //#attributes(Output|Opc)
    //#name(DOUT03)
    Arp::boolean dOUT03;

    //#port
    //#attributes(Output|Opc)
    //#name(DOUT04)
    Arp::boolean dOUT04;

    //#port
    //#attributes(Output|Opc)
    //#name(DOUT05)
    Arp::boolean dOUT05;

    //#port
    //#attributes(Output|Opc)
    //#name(DOUT06)
    Arp::boolean dOUT06;

    //#port
    //#attributes(Output|Opc)
    //#name(DOUT07)
    Arp::boolean dOUT07;

    //#port
    //#attributes(Output|Opc)
    //#name(DOUT08)
    Arp::boolean dOUT08;

    //#port
    //#attributes(Output|Opc)
    //#name(DOUT09)
    Arp::boolean dOUT09;

    //#port
    //#attributes(Output|Opc)
    //#name(DOUT10)
    Arp::boolean dOUT10;

    //#port
    //#attributes(Output|Opc)
    //#name(DOUT11)
    Arp::boolean dOUT11;

    //#port
    //#attributes(Output|Opc)
    //#name(DOUT12)
    Arp::boolean dOUT12;

    //#port
    //#attributes(Output|Opc)
    //#name(DOUT13)
    Arp::boolean dOUT13;

    //#port
    //#attributes(Output|Opc)
    //#name(DOUT14)
    Arp::boolean dOUT14;

    //#port
    //#attributes(Output|Opc)
    //#name(DOUT15)
    Arp::boolean dOUT15;

    //#port
    //#attributes(Output|Opc)
    //#name(DOUT16)
    Arp::boolean dOUT16;

  private: // fields
    StarterKit::StarterKitComponent &starterKitComponent;
};

///////////////////////////////////////////////////////////////////////////////
// inline methods of class ProgramBase
inline StarterKitProgram::StarterKitProgram(StarterKit::StarterKitComponent &starterKitComponentArg,
                                            const String &name)
    : ProgramBase(name), starterKitComponent(starterKitComponentArg)
{
}

} // end of namespace StarterKit
