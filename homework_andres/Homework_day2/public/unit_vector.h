#include <vector>
#include <cmath>

//This class provides a unit_vector that exists in 3 dimensions and is compatible with the dot product and the addition operator

class unit_vector
{
 public:
  unit_vector(double x , double y , double z);
  ~unit_vector();
  std::vector<double> unit;
  double x_component;
  double y_component;
  double z_component;
  double operator* ( unit_vector& vector1 )
  { double result = 0;
    for( int i = 0 ; i < 3 ; i++){
      result += this->unit[i] * vector1.unit[i];
    }
    return result;
  }
  unit_vector operator+ ( unit_vector& vector1 )
  { unit_vector result = unit_vector(1,0,0);
    double x_component = this->unit[0] + vector1.unit[0];
    double y_component = this->unit[1] + vector1.unit[1];
    double z_component = this->unit[2] + vector1.unit[2];
    double mag = sqrt( ( x_component * x_component ) + ( y_component * y_component ) + ( z_component * z_component ) );
    result.unit[0] = x_component/mag;
    result.unit[1] = y_component/mag;
    result.unit[2] = z_component/mag;
    return result;
  }
  
 private:
  double magnitude;
  double x_;
  double y_;
  double z_;
};
