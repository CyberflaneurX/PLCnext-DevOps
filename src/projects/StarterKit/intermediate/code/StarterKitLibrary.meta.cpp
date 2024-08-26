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
                    }
                },
            }
            // End TypeDefinitions
        );
    }

} // end of namespace StarterKit

