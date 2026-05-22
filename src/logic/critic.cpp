#include "../../include/rmc/manifold.hpp"
#include <iostream>

namespace rmc {

    // طبقة النقد: تقرر هل الإشارة تستحق المعالجة أم لا
    bool is_reliable(ManifoldPoint p, double threshold) {
        double stability = calculate_stability(p);
        
        // إذا كان الاستقرار أعلى من الحد الأدنى (threshold)
        if (stability >= threshold) {
            return true;
        } else {
            std::cout << "[Critic] Signal rejected: Low stability detected." << std::endl;
            return false;
        }
    }
}
