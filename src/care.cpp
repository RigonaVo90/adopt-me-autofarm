// care.cpp — part of adopt-me-autofarm.

#include "adoptmeautofarm/care.h"

#include <cstdio>

namespace adoptmeautofarm {

Care::Care(const std::string& config_path)
    : config_path_(config_path) {}

void Care::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Care::run() {
    if (verbose_) std::fprintf(stderr, "[adopt-me-autofarm] care: run\n");
    // core logic lives here
    return true;
}

}  // namespace adoptmeautofarm
