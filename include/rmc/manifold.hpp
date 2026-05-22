#ifndef RMC_MANIFOLD_HPP
#define RMC_MANIFOLD_HPP

namespace rmc {

    const int DIMENSIONS = 3; 

    // تعريف خصائص الإشارة لضمان الموثوقية
    struct Signal {
        double frequency;      // تردد الإشارة
        double amplitude;      // سعة الإشارة
        double timestamp;      // الزمن لضمان التدفق الصحيح
    };

    struct ManifoldPoint {
        double coords[DIMENSIONS];
        double resonance_intensity;
        Signal signal_data;    // ربط الإشارة بالنقطة الطوبولوجية
    };

    double calculate_stability(ManifoldPoint p);

}

#endif // RMC_MANIFOLD_HPP
