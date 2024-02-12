#pragma once

#include <stdint.h>
#include <random>

class Channel
{
private:

    std::mt19937 rng_;
    std::uniform_real_distribution<float> dist_;

public:

    void set_range(const uint32_t range);

    float get_value();

};