#include <iostream>
#include "../include/rmc/manifold.hpp"

// دالة اختبار بسيطة للتحقق من استقرار النظام
int main() {
    rmc::ManifoldPoint p;
    p.signal_data.frequency = 10.0; // حالة رنين مثالي
    
    double stability = rmc::calculate_stability(p);
    
    std::cout << "Signal Frequency: " << p.signal_data.frequency << std::endl;
    std::cout << "System Stability: " << stability << std::endl;
    
    if (stability == 1.0) {
        std::cout << "Result: System is in perfect resonance." << std::endl;
    } else {
        std::cout << "Result: System is adjusting." << std::endl;
    }
    
    return 0;
}
