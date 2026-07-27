#include<stdio.h>
#include<stdint.h>

struct CarModel
{
  unsigned int carNumber;
  uint32_t carPrice;
  uint16_t carMaxSpeed;
  float carWeight;
};

int main()
{
  struct CarModel CarHonda;
  struct CarModel CarBMW = {1234, 4538, 200, 120};
  struct CarModel CarFord = {.carNumber = 234,.carMaxSpeed= 234, .carPrice=467, .carWeight=4657 };

  printf("Details of car  \n");
  printf("carNumber = %d  \n", CarFord.carNumber);
  printf("carNumber = %d  \n", CarFord.carMaxSpeed);
  printf("carNumber = %d  \n", CarFord.carPrice);
   printf("carNumber = %d  \n", CarFord.carWeight);
  return 0;
}
