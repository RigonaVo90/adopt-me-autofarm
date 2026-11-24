// money.cpp — part of adopt-me-autofarm.

#include "adoptmeautofarm/money.h"

#include <cstdio>

namespace adoptmeautofarm {

Money::Money(const std::string& config_path)
    : config_path_(config_path) {}

void Money::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Money::run() {
    if (verbose_) std::fprintf(stderr, "[adopt-me-autofarm] money: run\n");
    // core logic lives here
    return true;
}

}  // namespace adoptmeautofarm
