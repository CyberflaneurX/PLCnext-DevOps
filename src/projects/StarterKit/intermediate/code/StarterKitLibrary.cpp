#include "StarterKitLibrary.hpp"
#include "Arp/System/Core/CommonTypeName.hxx"
#include "Arp/Plc/Commons/Meta/TypeSystem/TypeSystem.h"
#include "StarterKitComponent.hpp"

namespace StarterKit
{

StarterKitLibrary::StarterKitLibrary(AppDomain& appDomain)
    : MetaLibraryBase(appDomain, ARP_VERSION_CURRENT, typeDomain)
    , typeDomain(CommonTypeName<StarterKitLibrary>().GetNamespace())
{
    this->componentFactory.AddFactoryMethod(CommonTypeName<::StarterKit::StarterKitComponent>(), &::StarterKit::StarterKitComponent::Create);
    this->InitializeTypeDomain();
}

void StarterKitLibrary::Main(AppDomain& appDomain)
{
    SingletonBase::CreateInstance(appDomain);
}

extern "C" ARP_CXX_SYMBOL_EXPORT ILibrary& ArpDynamicLibraryMain(AppDomain& appDomain)
{
    StarterKitLibrary::Main(appDomain);
    return  StarterKitLibrary::GetInstance();
}

} // end of namespace StarterKit
