// main.cpp — entry point. Wires config and subsystems together.

#include "adoptmeautofarm/settings.h"
#include "adoptmeautofarm/care.h"
#include "adoptmeautofarm/quests.h"
#include "adoptmeautofarm/money.h"
#include "adoptmeautofarm/cli.h"
#include "adoptmeautofarm/utils.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    adoptmeautofarm::Settings settings = adoptmeautofarm::Settings::load_default();
    adoptmeautofarm::Care care(settings.store_path);
    adoptmeautofarm::Quests quests(settings.store_path);
    adoptmeautofarm::Money money(settings.store_path);
    adoptmeautofarm::Cli cli(settings.store_path);
    adoptmeautofarm::Utils utils(settings.store_path);
    std::fprintf(stderr, "[adopt-me-autofarm] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
