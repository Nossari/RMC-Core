#ifndef RMC_MANIFOLD_HPP
#define RMC_MANIFOLD_HPP

namespace rmc {

    // يحدد هذا الثابت أبعاد الفضاء الطوبولوجي الذي نعمل فيه
    const int DIMENSIONS = 3; 

    struct ManifoldPoint {
        double coords[DIMENSIONS];
        double resonance_intensity;
    };

    // الدالة المسؤولة عن حساب التمركز
    double calculate_stability(ManifoldPoint p);

}

#endif // RMC_MANIFOLD_HPP
