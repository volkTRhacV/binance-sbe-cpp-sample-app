/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _SPOT_SBE_PEGPRICETYPE_CXX_H_
#define _SPOT_SBE_PEGPRICETYPE_CXX_H_

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

class PegPriceType
{
public:
    enum Value
    {
        PrimaryPeg = static_cast<std::uint8_t>(1),
        MarketPeg = static_cast<std::uint8_t>(2),
        NonRepresentable = static_cast<std::uint8_t>(254),
        NULL_VALUE = static_cast<std::uint8_t>(255)
    };

    static PegPriceType::Value get(const std::uint8_t value)
    {
        switch (value)
        {
            case static_cast<std::uint8_t>(1): return PrimaryPeg;
            case static_cast<std::uint8_t>(2): return MarketPeg;
            case static_cast<std::uint8_t>(254): return NonRepresentable;
            case static_cast<std::uint8_t>(255): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum PegPriceType [E103]");
    }

    static const char *c_str(const PegPriceType::Value value)
    {
        switch (value)
        {
            case PrimaryPeg: return "PrimaryPeg";
            case MarketPeg: return "MarketPeg";
            case NonRepresentable: return "NonRepresentable";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum PegPriceType [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, PegPriceType::Value m)
    {
        return os << PegPriceType::c_str(m);
    }
};

}

#endif
