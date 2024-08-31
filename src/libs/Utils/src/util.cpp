#include "Utils/util.hpp"
#include "Arp/System/Commons/Logging.h"

namespace Utils
{

std::string
toString(const SafetyRelayHandler::DiagnosticType diagnosticType)
{
    switch (diagnosticType)
    {
    case SafetyRelayHandler::DiagnosticType::UNKNOWN:
        return "UNKNOWN";
    case SafetyRelayHandler::DiagnosticType::Status:
        return "Status";
    case SafetyRelayHandler::DiagnosticType::Alert:
        return "Alert";
    case SafetyRelayHandler::DiagnosticType::Error:
        return "Error";
    default:
        return "UNKNOWN";
    }
}
} // namespace Utils