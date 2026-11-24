// utils.cpp — part of adopt-me-autofarm.

#include "adoptmeautofarm/utils.h"

#include <cstdio>

namespace adoptmeautofarm {

Utils::Utils(const std::string& config_path)
    : config_path_(config_path) {}

void Utils::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Utils::run() {
    if (verbose_) std::fprintf(stderr, "[adopt-me-autofarm] utils: run\n");
    // core logic lives here
    return true;
}

}  // namespace adoptmeautofarm
