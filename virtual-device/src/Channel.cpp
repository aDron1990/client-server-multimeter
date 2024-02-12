#include "Channel.hpp"

#include <stdexcept>

void Channel::set_range(const uint32_t range)
{
    float min, max;
    switch (range)
    {
    case 0:
        min = 0.0000001f;
        max = 0.001f;
        break;
    case 1:
        min = 0.001f;
        max = 1.0f;
        break;
    case 2:
        min = 1.0f;
        max = 1000.0f;
        break;
    case 3:
        min = 1000.0f;
        max = 1000000.0f;
        break;
    default:
        throw std::runtime_error{"incorrect range number: " + std::to_string(range)};
    }

    std::random_device dev;
    rng_ = std::mt19937{dev()};
    dist_ = std::uniform_real_distribution<float>{min, max};
}

float Channel::get_value()
{
    return dist_(rng_);
}