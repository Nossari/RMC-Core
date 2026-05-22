#include "../../include/rmc/manifold.hpp"
#include <cmath>

namespace rmc {

    // تنفيذ دالة حساب الاستقرار بناءً على الرنين
    double calculate_stability(ManifoldPoint p) {
        // نستخدم التردد كمرجع للاستقرار الطوبولوجي
        // إذا كان التردد ضمن نطاق الرنين، ترتفع نسبة الاستقرار
        double target_freq = 10.0; // مثال لتردد الرنين الأساسي
        double diff = std::abs(p.signal_data.frequency - target_freq);
        
        // حساب الاستقرار كدالة عكسية للانحراف عن التردد المستهدف
        return 1.0 / (1.0 + diff);
    }
}
