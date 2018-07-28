#pragma once

#include <cstdint>

class AdcInterface
{
 public:
    virtual void Initialize(uint32_t clock_frequency = 1'000'000) = 0;
    virtual void Conversion() = 0;
    virtual uint16_t ReadResult() = 0;
    virtual bool​ FinishedConversion() = 0;
};
