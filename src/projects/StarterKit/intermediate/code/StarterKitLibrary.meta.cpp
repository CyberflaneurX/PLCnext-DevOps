#include "Arp/System/Core/Arp.h"
#include "Arp/Plc/Commons/Meta/TypeSystem/TypeSystem.h"
#include "StarterKitProgram.hpp"
#include "StarterKitLibrary.hpp"

namespace StarterKit
{

using namespace Arp::Plc::Commons::Meta;

    void StarterKitLibrary::InitializeTypeDomain()
    {
        this->typeDomain.AddTypeDefinitions
        (
            // Begin TypeDefinitions
            {
                {   // ProgramDefinition: StarterKit::StarterKitProgram
                    DataType::Program, CTN<StarterKit::StarterKitProgram>(), sizeof(::StarterKit::StarterKitProgram), alignof(::StarterKit::StarterKitProgram), StandardAttribute::None,
                    {
                        // FieldDefinitions:
                        { "DIN01", offsetof(::StarterKit::StarterKitProgram, digitalIn1), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN02", offsetof(::StarterKit::StarterKitProgram, dIN02), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN03", offsetof(::StarterKit::StarterKitProgram, dIN03), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN04", offsetof(::StarterKit::StarterKitProgram, dIN04), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN05", offsetof(::StarterKit::StarterKitProgram, dIN05), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN06", offsetof(::StarterKit::StarterKitProgram, dIN06), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN07", offsetof(::StarterKit::StarterKitProgram, dIN07), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN08", offsetof(::StarterKit::StarterKitProgram, dIN08), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN09", offsetof(::StarterKit::StarterKitProgram, dIN09), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN10", offsetof(::StarterKit::StarterKitProgram, dIN10), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN11", offsetof(::StarterKit::StarterKitProgram, dIN11), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN12", offsetof(::StarterKit::StarterKitProgram, dIN12), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN13", offsetof(::StarterKit::StarterKitProgram, dIN13), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN14", offsetof(::StarterKit::StarterKitProgram, dIN14), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN15", offsetof(::StarterKit::StarterKitProgram, dIN15), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN16", offsetof(::StarterKit::StarterKitProgram, dIN16), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "AIN1", offsetof(::StarterKit::StarterKitProgram, aiN1), DataType::UInt32, String::Empty, sizeof(Arp::uint32), alignof(Arp::uint32), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "AIN2", offsetof(::StarterKit::StarterKitProgram, aiN2), DataType::UInt32, String::Empty, sizeof(Arp::uint32), alignof(Arp::uint32), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "AIN3", offsetof(::StarterKit::StarterKitProgram, aiN3), DataType::UInt32, String::Empty, sizeof(Arp::uint32), alignof(Arp::uint32), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "AIN4", offsetof(::StarterKit::StarterKitProgram, aiN4), DataType::UInt32, String::Empty, sizeof(Arp::uint32), alignof(Arp::uint32), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DOUT01", offsetof(::StarterKit::StarterKitProgram, dOUT01), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT02", offsetof(::StarterKit::StarterKitProgram, dOUT02), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT03", offsetof(::StarterKit::StarterKitProgram, dOUT03), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT04", offsetof(::StarterKit::StarterKitProgram, dOUT04), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT05", offsetof(::StarterKit::StarterKitProgram, dOUT05), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT06", offsetof(::StarterKit::StarterKitProgram, dOUT06), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT07", offsetof(::StarterKit::StarterKitProgram, dOUT07), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT08", offsetof(::StarterKit::StarterKitProgram, dOUT08), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT09", offsetof(::StarterKit::StarterKitProgram, dOUT09), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT10", offsetof(::StarterKit::StarterKitProgram, dOUT10), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT11", offsetof(::StarterKit::StarterKitProgram, dOUT11), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT12", offsetof(::StarterKit::StarterKitProgram, dOUT12), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT13", offsetof(::StarterKit::StarterKitProgram, dOUT13), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT14", offsetof(::StarterKit::StarterKitProgram, dOUT14), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT15", offsetof(::StarterKit::StarterKitProgram, dOUT15), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT16", offsetof(::StarterKit::StarterKitProgram, dOUT16), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                    }
                },
            }
            // End TypeDefinitions
        );
    }

} // end of namespace StarterKit

