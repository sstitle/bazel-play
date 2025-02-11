#include <spdlog/spdlog.h>
#include <CGAL/Simple_cartesian.h>
#include <CGAL/Point_2.h>

typedef CGAL::Simple_cartesian<double> Kernel;
typedef CGAL::Point_2<Kernel> Point_2;

int main() {
    spdlog::info("Hello, World!");

    // Example usage of CGAL
    Point_2 p(1.0, 2.0);
    Point_2 q(3.0, 4.0);

    spdlog::info("Point p: ({}, {})", p.x(), p.y());
    spdlog::info("Point q: ({}, {})", q.x(), q.y());

    return 0;
}
