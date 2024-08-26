#include "StarterKitComponent.hpp"
#include "Arp/Plc/Commons/Esm/ProgramComponentBase.hpp"
#include "StarterKitLibrary.hpp"

namespace StarterKit
{

StarterKitComponent::StarterKitComponent(IApplication& application, const String& name)
: ComponentBase(application, ::StarterKit::StarterKitLibrary::GetInstance(), name, ComponentCategory::Custom)
, programProvider(*this)
, ProgramComponentBase(::StarterKit::StarterKitLibrary::GetInstance().GetNamespace(), programProvider)
{
}

void StarterKitComponent::Initialize()
{
    // never remove next line
    ProgramComponentBase::Initialize();

    // subscribe events from the event system (Nm) here
}

void StarterKitComponent::LoadConfig()
{
    // load project config here
}

void StarterKitComponent::SetupConfig()
{
    // never remove next line
    ProgramComponentBase::SetupConfig();

    // setup project config here
}

void StarterKitComponent::ResetConfig()
{
    // never remove next line
    ProgramComponentBase::ResetConfig();

    // implement this inverse to SetupConfig() and LoadConfig()
}

void StarterKitComponent::PowerDown()
{
	// implement this only if data must be retained even on power down event
	// will work only for PLCnext controllers with an "Integrated uninterruptible power supply (UPS)"
	// Available with 2021.6 FW
}

} // end of namespace StarterKit
