#include <iostream>

int main() {
   
   int numbers[] = {1,2,3,4,5,6,7,8,9,10};
   int sum=0;
   
   for (int i=0; i<10; i++)
   {
   	sum += numbers[i];
   	std::cout<<numbers[i]<<"";
   }
   std::cout<<std::endl<<sum<<std::endl;
   
   return 0;
}
