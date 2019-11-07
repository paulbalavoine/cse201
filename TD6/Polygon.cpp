#include <string>
#include "Polygon.hpp"

namespace Geometry{

Polygon::Polygon(std::string lab, int a):Shape::Shape(lab){vertexCount=a;};
int Polygon::getVertexCount() const{return vertexCount;};
}
