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
                {   // TypeDefinition: StarterKit::StarterKitProgram::StarterKitCommand
                    DataType::Struct, CTN<StarterKit::StarterKitProgram::StarterKitCommand>(), sizeof(::StarterKit::StarterKitProgram::StarterKitCommand), alignof(::StarterKit::StarterKitProgram::StarterKitCommand), StandardAttribute::None,
                    {
                        // FieldDefinitions:
                        { "readAnalog1", offsetof(::StarterKit::StarterKitProgram::StarterKitCommand, readAnalog1), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::None },
                        { "setOutput", offsetof(::StarterKit::StarterKitProgram::StarterKitCommand, setOutput), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::None },
                    }
                },
                {   // TypeDefinition: StarterKit::StarterKitProgram::StarterKitConfig
                    DataType::Struct, CTN<StarterKit::StarterKitProgram::StarterKitConfig>(), sizeof(::StarterKit::StarterKitProgram::StarterKitConfig), alignof(::StarterKit::StarterKitProgram::StarterKitConfig), StandardAttribute::None,
                    {
                        // FieldDefinitions:
                        { "allowOutputs", offsetof(::StarterKit::StarterKitProgram::StarterKitConfig, allowOutputs), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::None },
                        { "minRange", offsetof(::StarterKit::StarterKitProgram::StarterKitConfig, minRange), DataType::UInt32, String::Empty, sizeof(Arp::uint32), alignof(Arp::uint32), {  }, StandardAttribute::None },
                        { "analogInOne", offsetof(::StarterKit::StarterKitProgram::StarterKitConfig, analogInOne), DataType::Struct, CTN<StarterKit::StarterKitProgram::analogConfig>(), sizeof(StarterKit::StarterKitProgram::analogConfig), alignof(StarterKit::StarterKitProgram::analogConfig), {  }, StandardAttribute::None },
                    }
                },
                {   // TypeDefinition: StarterKit::StarterKitProgram::StarterKitData
                    DataType::Struct, CTN<StarterKit::StarterKitProgram::StarterKitData>(), sizeof(::StarterKit::StarterKitProgram::StarterKitData), alignof(::StarterKit::StarterKitProgram::StarterKitData), StandardAttribute::None,
                    {
                        // FieldDefinitions:
                        { "areOutPutActive", offsetof(::StarterKit::StarterKitProgram::StarterKitData, areOutPutActive), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::None },
                    }
                },
                {   // TypeDefinition: StarterKit::StarterKitProgram::analogConfig
                    DataType::Struct, CTN<StarterKit::StarterKitProgram::analogConfig>(), sizeof(::StarterKit::StarterKitProgram::analogConfig), alignof(::StarterKit::StarterKitProgram::analogConfig), StandardAttribute::None,
                    {
                        // FieldDefinitions:
                        { "minRange", offsetof(::StarterKit::StarterKitProgram::analogConfig, minRange), DataType::UInt32, String::Empty, sizeof(Arp::uint32), alignof(Arp::uint32), {  }, StandardAttribute::None },
                        { "maxRange", offsetof(::StarterKit::StarterKitProgram::analogConfig, maxRange), DataType::UInt32, String::Empty, sizeof(Arp::uint32), alignof(Arp::uint32), {  }, StandardAttribute::None },
                    }
                },
                {   // ProgramDefinition: StarterKit::StarterKitProgram
                    DataType::Program, CTN<StarterKit::StarterKitProgram>(), sizeof(::StarterKit::StarterKitProgram), alignof(::StarterKit::StarterKitProgram), StandardAttribute::None,
                    {
                        // FieldDefinitions:
                        { "Command", offsetof(::StarterKit::StarterKitProgram, command_), DataType::Struct, CTN<StarterKit::StarterKitProgram::StarterKitCommand>(), sizeof(StarterKit::StarterKitProgram::StarterKitCommand), alignof(StarterKit::StarterKitProgram::StarterKitCommand), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "Config", offsetof(::StarterKit::StarterKitProgram, config_), DataType::Struct, CTN<StarterKit::StarterKitProgram::StarterKitConfig>(), sizeof(StarterKit::StarterKitProgram::StarterKitConfig), alignof(StarterKit::StarterKitProgram::StarterKitConfig), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "Data", offsetof(::StarterKit::StarterKitProgram, data_), DataType::Struct, CTN<StarterKit::StarterKitProgram::StarterKitData>(), sizeof(StarterKit::StarterKitProgram::StarterKitData), alignof(StarterKit::StarterKitProgram::StarterKitData), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DIN01", offsetof(::StarterKit::StarterKitProgram, dIN01_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN02", offsetof(::StarterKit::StarterKitProgram, dIN02_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN03", offsetof(::StarterKit::StarterKitProgram, dIN03_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN04", offsetof(::StarterKit::StarterKitProgram, dIN04_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN05", offsetof(::StarterKit::StarterKitProgram, dIN05_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN06", offsetof(::StarterKit::StarterKitProgram, dIN06_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN07", offsetof(::StarterKit::StarterKitProgram, dIN07_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN08", offsetof(::StarterKit::StarterKitProgram, dIN08_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN09", offsetof(::StarterKit::StarterKitProgram, dIN09_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN10", offsetof(::StarterKit::StarterKitProgram, dIN10_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN11", offsetof(::StarterKit::StarterKitProgram, dIN11_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN12", offsetof(::StarterKit::StarterKitProgram, dIN12_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN13", offsetof(::StarterKit::StarterKitProgram, dIN13_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN14", offsetof(::StarterKit::StarterKitProgram, dIN14_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN15", offsetof(::StarterKit::StarterKitProgram, dIN15_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DIN16", offsetof(::StarterKit::StarterKitProgram, dIN16_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "AIN1", offsetof(::StarterKit::StarterKitProgram, aiN1_), DataType::UInt32, String::Empty, sizeof(Arp::uint32), alignof(Arp::uint32), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "AIN2", offsetof(::StarterKit::StarterKitProgram, aiN2_), DataType::UInt32, String::Empty, sizeof(Arp::uint32), alignof(Arp::uint32), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "AIN3", offsetof(::StarterKit::StarterKitProgram, aiN3_), DataType::UInt32, String::Empty, sizeof(Arp::uint32), alignof(Arp::uint32), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "AIN4", offsetof(::StarterKit::StarterKitProgram, aiN4_), DataType::UInt32, String::Empty, sizeof(Arp::uint32), alignof(Arp::uint32), {  }, StandardAttribute::Input | StandardAttribute::Opc },
                        { "DOUT01", offsetof(::StarterKit::StarterKitProgram, dOUT01_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT02", offsetof(::StarterKit::StarterKitProgram, dOUT02_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT03", offsetof(::StarterKit::StarterKitProgram, dOUT03_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT04", offsetof(::StarterKit::StarterKitProgram, dOUT04_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT05", offsetof(::StarterKit::StarterKitProgram, dOUT05_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT06", offsetof(::StarterKit::StarterKitProgram, dOUT06_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT07", offsetof(::StarterKit::StarterKitProgram, dOUT07_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT08", offsetof(::StarterKit::StarterKitProgram, dOUT08_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT09", offsetof(::StarterKit::StarterKitProgram, dOUT09_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT10", offsetof(::StarterKit::StarterKitProgram, dOUT10_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT11", offsetof(::StarterKit::StarterKitProgram, dOUT11_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT12", offsetof(::StarterKit::StarterKitProgram, dOUT12_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT13", offsetof(::StarterKit::StarterKitProgram, dOUT13_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT14", offsetof(::StarterKit::StarterKitProgram, dOUT14_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT15", offsetof(::StarterKit::StarterKitProgram, dOUT15_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                        { "DOUT16", offsetof(::StarterKit::StarterKitProgram, dOUT16_), DataType::Boolean, String::Empty, sizeof(Arp::boolean), alignof(Arp::boolean), {  }, StandardAttribute::Output | StandardAttribute::Opc },
                    }
                },
            }
            // End TypeDefinitions
        );
    }

} // end of namespace StarterKit

