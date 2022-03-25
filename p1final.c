#include <stdio.h>
#include<math.h>
float input_radius()
{
  float x;
  printf("enter the radius of stomach\n");
  scanf("%f",&x);
  return x;
}
float input_heigth()
{
  float y;
  printf("enter the height\n");
  scanf("%f",&y);
  return y;
}
float input_length()
{
  float z;
  printf("enter the length\n");
  scanf("%f",&z);
  return z;
}
float find_weight(float radius, float height, float length)
{
  double weight;
  weight=M_PI *pow(radius,3) * sqrt(height * length);
  return weight;
}
void output(float radius, float height, float length, float weight)
{
  printf("the weight of camel is %f",weight);
}
int main()
{
  float x,y,z,weight;
  x= input_radius();
  y=input_heigth();
  z=input_length();
  weight=find_weight(x,y,z);
  output(x,y,z,weight);
  return 0;
}