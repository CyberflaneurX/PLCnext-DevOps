#pragma once
#include "Arp/System/Core/Arp.h"

namespace Utils
{

class AnalogInputs
{
    enum class DiagnosticType : Arp::uint8
    {
        UNKNOWN = 0x00,
        Status  = 0x01,
        Alert   = 0x02,
        Error   = 0x03
    };

    struct RelayStatus
    {
        DiagnosticType diagnosticType = DiagnosticType::UNKNOWN;
    };
};

} // namespace Utils