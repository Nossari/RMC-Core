#include <iostream>
#include "include/rmc/manifold.hpp"
#include "src/core/kernel.cpp"
#include "src/logic/critic.cpp"

int main() {
    // 1. تعريف إشارة قادمة
    rmc::ManifoldPoint signal_input;
    signal_input.signal_data.frequency = 10.5; // تردد قريب من تردد الرنين
    
    // 2. التحقق من موثوقية الإشارة باستخدام "الناقد"
    double threshold = 0.8; // الحد الأدنى للاستقرار
    
    std::cout << "--- RMC System Processing ---" << std::endl;
    
    if (rmc::is_reliable(signal_input, threshold)) {
        std::cout << "Action: Signal accepted for cognitive processing." << std::endl;
    } else {
        std::cout << "Action: Signal discarded." << std::endl;
    }
    
    return 0;
}
