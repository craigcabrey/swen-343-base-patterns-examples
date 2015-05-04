#include <iostream>

#include "pricing_mapper.cc"

int main() {
  std::cout << "Starting Mapper example." << std::endl << std::endl;
  PricingMapper* pricing_mapper = new PricingMapper();

  // Customer
  std::cout << "Creating customer with an ID of 1." << std::endl;
  pricing_mapper->Create_Customer(1);

  // Lease
  std::cout << "Creating lease with a price of $200." << std::endl;
  pricing_mapper->Create_Lease(200);

  // Asset
  std::cout << "Creating asset of $100,000." << std::endl;
  pricing_mapper->Create_Asset(100000);

  std::cout << "Updating objects through call to remote logic with Mapper." << std::endl;
  pricing_mapper->Get_Prices();
  pricing_mapper->Update_Listeners();

  std::cout << "Customer info: ";
  std::cout << pricing_mapper->Get_Customer_Info() << std::endl;
  std::cout << "Lease info: ";
  std::cout << pricing_mapper->Get_Lease_Info() << std::endl;  
  std::cout << "Asset info: ";
  std::cout << pricing_mapper->Get_Asset_Info() << std::endl;
}