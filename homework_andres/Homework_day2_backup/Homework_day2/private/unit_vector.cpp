#include "unit_vector.h"
#include <cmath>
#include <vector>

unit_vector::unit_vector( double& x , double& y , double& z)
  : x_(x) , y_(y) , z_(z)
{
  magnitude = sqrt(x_*x_ + y_*y_ + z_*z_) ;
  x_component = x_ / magnitude;
  y_component = y_ / magnitude;
  z_component = z_ / magnitude;
  unit.push_back(x_component);
  unit.push_back(y_component);
  unit.push_back(z_component);
}

unit_vector::~unit_vector(){}

double operator* ( unit_vector& vector1 , unit_vector& vector2 )
{
  double result = 0;
  for( int i = 0 ; i < 3 ; i++){
    result += vector1.unit[i] * vector2.unit[i];
      }
  return result;
}

std::vector<double> operator+ ( unit_vector& vector1 , unit_vector& vector2 ) {
  std::vector<double> result;
  double x_component = vector1.unit[0] + vector2.unit[0];
  double y_component = vector1.unit[1] + vector2.unit[1];
  double z_component = vector1.unit[2] + vector2.unit[2];
  result.push_back(x_component);
  result.push_back(y_component);
  result.push_back(z_component);
  return result;
    }
    
