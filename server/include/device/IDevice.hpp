#pragma once

#include <stdint.h>

class IDevice
{
public:

    enum class State
    {
        error_state,
        idle_state,
        measure_state,
        busy_state
    };

    virtual ~IDevice() = 0;

    virtual void start_measure(const uint32_t channel) = 0;
    virtual void stop_measure(const uint32_t channel) = 0;

    virtual void set_range(const uint32_t channel, const uint32_t range) = 0;
    virtual State get_status(const uint32_t channel) = 0;

    virtual float get_result(const uint32_t channel) = 0;

};