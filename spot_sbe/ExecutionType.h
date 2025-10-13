/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _SPOT_SBE_EXECUTIONTYPE_CXX_H_
#define _SPOT_SBE_EXECUTIONTYPE_CXX_H_

#if !defined(__STDC_LIMIT_MACROS)
#  define __STDC_LIMIT_MACROS 1
#endif

#include <cstdint>
#include <iomanip>
#include <limits>
#include <ostream>
#include <stdexcept>
#include <sstream>
#include <string>

#define SBE_NULLVALUE_INT8 (std::numeric_limits<std::int8_t>::min)()
#define SBE_NULLVALUE_INT16 (std::numeric_limits<std::int16_t>::min)()
#define SBE_NULLVALUE_INT32 (std::numeric_limits<std::int32_t>::min)()
#define SBE_NULLVALUE_INT64 (std::numeric_limits<std::int64_t>::min)()
#define SBE_NULLVALUE_UINT8 (std::numeric_limits<std::uint8_t>::max)()
#define SBE_NULLVALUE_UINT16 (std::numeric_limits<std::uint16_t>::max)()
#define SBE_NULLVALUE_UINT32 (std::numeric_limits<std::uint32_t>::max)()
#define SBE_NULLVALUE_UINT64 (std::numeric_limits<std::uint64_t>::max)()

namespace spot_sbe {

class ExecutionType
{
public:
    enum Value
    {
        New = static_cast<std::uint8_t>(0),
        Canceled = static_cast<std::uint8_t>(1),
        Replaced = static_cast<std::uint8_t>(2),
        Rejected = static_cast<std::uint8_t>(3),
        Trade = static_cast<std::uint8_t>(4),
        Expired = static_cast<std::uint8_t>(5),
        TradePrevention = static_cast<std::uint8_t>(8),
        Unknown = static_cast<std::uint8_t>(253),
        NonRepresentable = static_cast<std::uint8_t>(254),
        NULL_VALUE = static_cast<std::uint8_t>(255)
    };

    static ExecutionType::Value get(const std::uint8_t value)
    {
        switch (value)
        {
            case static_cast<std::uint8_t>(0): return New;
            case static_cast<std::uint8_t>(1): return Canceled;
            case static_cast<std::uint8_t>(2): return Replaced;
            case static_cast<std::uint8_t>(3): return Rejected;
            case static_cast<std::uint8_t>(4): return Trade;
            case static_cast<std::uint8_t>(5): return Expired;
            case static_cast<std::uint8_t>(8): return TradePrevention;
            case static_cast<std::uint8_t>(253): return Unknown;
            case static_cast<std::uint8_t>(254): return NonRepresentable;
            case static_cast<std::uint8_t>(255): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum ExecutionType [E103]");
    }

    static const char *c_str(const ExecutionType::Value value)
    {
        switch (value)
        {
            case New: return "New";
            case Canceled: return "Canceled";
            case Replaced: return "Replaced";
            case Rejected: return "Rejected";
            case Trade: return "Trade";
            case Expired: return "Expired";
            case TradePrevention: return "TradePrevention";
            case Unknown: return "Unknown";
            case NonRepresentable: return "NonRepresentable";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum ExecutionType [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, ExecutionType::Value m)
    {
        return os << ExecutionType::c_str(m);
    }
};

}

#endif
