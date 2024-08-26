#pragma once
#include "Arp/System/Core/Arp.h"
#include "Arp/System/Core/AppDomain.hpp"
#include "Arp/System/Core/Singleton.hxx"
#include "Arp/System/Core/Library.h"
#include "Arp/Plc/Commons/Meta/MetaLibraryBase.hpp"
#include "Arp/Plc/Commons/Meta/TypeSystem/TypeDomain.hpp"

namespace StarterKit
{

using namespace Arp::System::Acf;
using namespace Arp::Plc::Commons::Meta;
using namespace Arp::Plc::Commons::Meta::TypeSystem;

class StarterKitLibrary : public MetaLibraryBase, public Singleton<StarterKitLibrary>
{
public: // typedefs
    typedef Singleton<StarterKitLibrary> SingletonBase;

public: // construction/destruction
    StarterKitLibrary(AppDomain& appDomain);
    virtual ~StarterKitLibrary() = default;

public: // static operations (called through reflection)
    static void Main(AppDomain& appDomain);

private: // methods
    void InitializeTypeDomain();

private: // deleted methods
    StarterKitLibrary(const StarterKitLibrary& arg) = delete;
    StarterKitLibrary& operator= (const StarterKitLibrary& arg) = delete;

private:  // fields
    TypeDomain typeDomain;
};

extern "C" ARP_CXX_SYMBOL_EXPORT ILibrary& ArpDynamicLibraryMain(AppDomain& appDomain);

///////////////////////////////////////////////////////////////////////////////
// inline methods of class StarterKitLibrary

} // end of namespace StarterKit
