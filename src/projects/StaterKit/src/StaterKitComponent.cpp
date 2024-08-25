#include "StaterKitComponent.hpp"
#include "Arp/Plc/Commons/Esm/ProgramComponentBase.hpp"
#include "StaterKitLibrary.hpp"

namespace StaterKit
{

StaterKitComponent::StaterKitComponent(IApplication& application, const String& name)
: ComponentBase(application, ::StaterKit::StaterKitLibrary::GetInstance(), name, ComponentCategory::Custom)
, programProvider(*this)
, ProgramComponentBase(::StaterKit::StaterKitLibrary::GetInstance().GetNamespace(), programProvider)
{
}

void StaterKitComponent::Initialize()
{
    // never remove next line
    ProgramComponentBase::Initialize();

    // subscribe events from the event system (Nm) here
}

void StaterKitComponent::LoadConfig()
{
    // load project config here
}

void StaterKitComponent::SetupConfig()
{
    // never remove next line
    ProgramComponentBase::SetupConfig();

    // setup project config here
}

void StaterKitComponent::ResetConfig()
{
    // never remove next line
    ProgramComponentBase::ResetConfig();

    // implement this inverse to SetupConfig() and LoadConfig()
}

void StaterKitComponent::PowerDown()
{
	// implement this only if data must be retained even on power down event
	// will work only for PLCnext controllers with an "Integrated uninterruptible power supply (UPS)"
	// Available with 2021.6 FW
}

} // end of namespace StaterKit
