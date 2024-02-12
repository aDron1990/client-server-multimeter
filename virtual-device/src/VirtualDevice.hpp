#pragma once

#ifndef CHANNELS_COUNT
    #define CHANNELS_COUNT 2
#endif

#include "device/IDevice.hpp"
#include "Channel.hpp"

#include <array>

class VirtualDevice final : public IDevice
{
private:

    std::array<int, CHANNELS_COUNT> channels_;

public:

    void start_measure(const uint32_t channel) override;
    void stop_measure(const uint32_t channel) override;

    void set_range(const uint32_t channel, const uint32_t range) override;
    State get_status(const uint32_t channel) override;

    float get_result(const uint32_t channel) override;

};